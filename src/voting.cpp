// Copyright (c) 2018-2019 The ZENZO developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "base58.h"
#include "hash.h"
#include "init.h"
#include "wallet.h"
#include "voting.h"

std::vector<CProposal> vProposals;

/** CVoter Class */

// Create a new vote signature using an address within the local wallet
std::string CVoter::CreateVote(const std::string& addr, const std::string& utxo, const int& proposal)
{
    if (!pwalletMain)
        return "nowallet";

    // Parse the given address and pull it's private key for signing
    CBitcoinAddress address;
    if (!address.SetString(addr))
        return "badaddr";
    CKeyID keyID;
    if (!address.GetKeyID(keyID))
        return "badkeyid";
    CKey vchSecret;
    if (!pwalletMain->GetKey(keyID, vchSecret))
        return "badpk";

    // Got the private key, now let's sign the proposal index
    CDataStream ss(SER_GETHASH, 0);
    ss << strMessageMagic;
    ss << std::to_string(proposal);

    std::vector<unsigned char> vchSig;
    if (!vchSecret.SignCompact(Hash(ss.begin(), ss.end()), vchSig)) {
        return "badsig";
    }

    // The signing was successful, return the vote signature
    return EncodeBase64(&vchSig[0], vchSig.size());
}

/** CProposal(s) Class */

// Create a new proposal object
CProposal CreateProposal(const std::string& strName, const std::string& strDesc)
{
    CProposal p;
    p.name = strName;
    p.desc = strDesc;
    p.votesAgainst = 0;
    p.votesFor = 0;
    p.index = vProposals.size() + 1;

    // Yuhu! Almost there, now let's hash the main proposal data to ensure it doesn't get tampered post-submission
    std::string str = p.name + p.desc + std::to_string(p.index);
    p.hash = Hash(BEGIN(str), END(str)).GetHex();

    return p;
}

// Submit a proposal object to the network, also saving it into the local vProposals list
std::string SubmitProposal(const CProposal& p)
{
    // Make sure we aren't submitting a duplicate index proposal
    if (!vProposals.empty())
        for (unsigned i=0; i < vProposals.size(); i++)
            if (vProposals[i].index == p.index)
                return "duplicate";

    // Proposal passed tests, save into memory and broadcast to our peers
    vProposals.push_back(p);
    return "success";
}