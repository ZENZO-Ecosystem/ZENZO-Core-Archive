// Copyright (c) 2018-2019 The ZENZO developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "base58.h"
#include "init.h"
#include "wallet.h"
#include "voting.h"

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