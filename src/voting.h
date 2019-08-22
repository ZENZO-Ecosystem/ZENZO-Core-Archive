// Copyright (c) 2018-2019 The ZENZO developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

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