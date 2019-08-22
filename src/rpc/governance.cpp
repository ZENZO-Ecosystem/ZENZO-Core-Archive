// Copyright (c) 2018-2019 The ZENZO developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "rpc/server.h"
#include "voting.h"

#include <stdint.h>

#include "json/json_spirit_utils.h"
#include "json/json_spirit_value.h"
#include <boost/assign/list_of.hpp>

using namespace boost;
using namespace boost::assign;
using namespace json_spirit;
using namespace std;

Value createvote(const Array& params, bool fHelp)
{
    if (fHelp || params.size() != 2)
        throw runtime_error(
            "createvote <address> <proposal_index>\n"
            "<address> is the local address you want to vote from\n"
            "<proposal_index> is the index integer of the proposal you want to vote for" +
            HelpRequiringPassphrase());

    EnsureWalletIsUnlocked();

    std::string strAddress = params[0].get_str();
    int intProposal = params[1].get_int();

    CVoter voter;
    return voter.CreateVote(strAddress, "", intProposal);
}