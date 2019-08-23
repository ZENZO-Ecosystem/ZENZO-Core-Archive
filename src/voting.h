// Copyright (c) 2018-2019 The ZENZO developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

class CProposal;

// A list of all known proposals
extern std::vector<CProposal> vProposals;

/**
 * The Voter class allows for usage of the ZENZO P2P Voting system,
 * providing an easy set of methods to interact with the system.
 * Such as: Vote signing, broadcasting and verifying.
 */
class CVoter
{
public:
    std::string CreateVote(const std::string& addr, const std::string& utxo, const int& proposal);
};

// Create a new CProposal object
CProposal CreateProposal(const std::string& name, const std::string& desc);

// Submit a CProposal object to the network and save into vProposals
std::string SubmitProposal(const CProposal& p);

/**
 * The Proposal class acts as a template for Proposal creation
 * and parsing for incoming network proposals.
 */
class CProposal
{
public:
    // The human-readable name of the Proposal
    std::string name;
    // The human-readable description of the proposal
    std::string desc;
    // The total amount of verified "For" votes for the proposal
    int votesFor;
    // The total amount of verified "Against" votes for the proposal
    int votesAgainst;
    // The unique proposal index
    int index;
};