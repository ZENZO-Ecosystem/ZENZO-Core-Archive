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

Value createvote(const Array& params, bool fHelp)
{
    if (fHelp || params.size() != 2)
        throw std::runtime_error(
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

Value createproposal(const Array& params, bool fHelp)
{
    if (fHelp || params.size() != 2)
        throw std::runtime_error(
            "createproposal <name> <description>\n"
            "Creates and submits a proposal to the network for voting.\n"
            "If the proposal creation or submission fails, a runtime error will be returned.\n"
            "\nResult:\n"
            "{\n"
            "  \"name\": \"name\",          (string) the name of the proposal\n"
            "  \"description\": \"desc\",   (string) the description of the proposal\n"
            "  \"for\": n,          (numeric) total verified votes in favor of the proposal\n"
            "  \"against\": n,      (numeric) total verified votes against the proposal\n"
            "  \"index\": n,        (numeric) the unique index identifier of the proposal\n"
            "}\n"
            "\nExamples:\n" +
            HelpExampleCli("createproposal", "\"name\" \"desc\"") + HelpExampleRpc("createproposal", "\"name\" \"desc\""));

    // Create the proposal
    CProposal p = CreateProposal(params[0].get_str(), params[1].get_str());

    // Submit the proposal
    std::string ret = SubmitProposal(p);

    // Check for submission errors
    if (ret != "success")
        throw std::runtime_error(ret);

    Object obj;
    obj.push_back(Pair("name", p.name));
    obj.push_back(Pair("description", p.desc));
    obj.push_back(Pair("for", p.votesFor));
    obj.push_back(Pair("against", p.votesAgainst));
    obj.push_back(Pair("index", p.index));

    return obj;
}

Value getproposals(const Array& params, bool fHelp)
{
    if (fHelp || params.size() != 0)
        throw std::runtime_error(
            "getproposals\n"
            "Lists all known proposals on the network.\n"
            "\nResult:\n"
            "[\n"
            "  {\n"
            "    \"name\": \"name\",          (string) the name of the proposal\n"
            "    \"description\": \"desc\",   (string) the description of the proposal\n"
            "    \"for\": n,          (numeric) total verified votes in favor of the proposal\n"
            "    \"against\": n,      (numeric) total verified votes against the proposal\n"
            "    \"index\": n,        (numeric) the unique index identifier of the proposal\n"
            "  }, ...\n"
            "]\n"
            "\nExamples:\n" +
            HelpExampleCli("getproposals", "") + HelpExampleRpc("getproposals", ""));

    Array arr;
    for (CProposal p : vProposals)
    {
        Object obj;
        obj.push_back(Pair("name", p.name));
        obj.push_back(Pair("description", p.desc));
        obj.push_back(Pair("for", p.votesFor));
        obj.push_back(Pair("against", p.votesAgainst));
        obj.push_back(Pair("index", p.index));
        arr.push_back(obj);
    }

    return arr;
}