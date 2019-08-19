// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2019 The Bitcoin developers
// Copyright (c) 2014-2019 The Dash developers
// Copyright (c) 2015-2019 The PIVX developers
// Copyright (c) 2018-2019 The ZENZO developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "libzerocoin/Params.h"
#include "chainparams.h"
#include "random.h"
#include "util.h"
#include "utilstrencodings.h"

#include <assert.h>

#include <boost/assign/list_of.hpp>

using namespace std;
using namespace boost::assign;

struct SeedSpec6 {
    uint8_t addr[16];
    uint16_t port;
};

#include "chainparamsseeds.h"

/**
 * Main network
 */

//! Convert the pnSeeds6 array into usable address objects.
static void convertSeed6(std::vector<CAddress>& vSeedsOut, const SeedSpec6* data, unsigned int count)
{
    // It'll only connect to one or two seed nodes because once it connects,
    // it'll get a pile of addresses with newer timestamps.
    // Seed nodes are given a random 'last seen time' of between one and two
    // weeks ago.
    const int64_t nOneWeek = 7 * 24 * 60 * 60;
    for (unsigned int i = 0; i < count; i++) {
        struct in6_addr ip;
        memcpy(&ip, data[i].addr, sizeof(ip));
        CAddress addr(CService(ip, data[i].port));
        addr.nTime = GetTime() - GetRand(nOneWeek) - nOneWeek;
        vSeedsOut.push_back(addr);
    }
}

//   What makes a good checkpoint block?
// + Is surrounded by blocks with reasonable timestamps
//   (no blocks before with a timestamp after, none after with
//    timestamp before)
// + Contains no strange transactions
static Checkpoints::MapCheckpoints mapCheckpoints =
    boost::assign::map_list_of
    (0, uint256("0000024c78d7d2fb56363f7777bab06de80307ac751b02e843ca7ae62d2310d2"))
	(100, uint256("00000a077be1f0b9850b8321fa847e5eb79fd939217596f51f1ea188b16284ea"))
	(200, uint256("00000003b64c5a430505a05eb3fcada74ff5663829a2cb39be5678223f2f4e59"))
	(300, uint256("0000000dbb7ac6312c6bbebd31c4dbf6baae9cd34d7ad5fcbe2e89b1c0681d3a"))
	(400, uint256("0000000a6551d2f6addaffd58fcfc92f1cdb1f0ed91c4cce2b7c925124c51bdc"))
	(500, uint256("d95c542234350153f61595a58c486485c9d9e01ea26b71614a1938779b4620ae"))
	(600, uint256("ae353efb716ed1e28c2c597fe41358a9a79f979178dd3da2a568a02f5f9973c8"))
	(383000, uint256("934c36d558b4ba0298cd6f8d928035eba557b8e1ad6728ee31616ab7edc92c88"));
static const Checkpoints::CCheckpointData data = {
    &mapCheckpoints,
    1561681242, // * UNIX timestamp of last checkpoint block
    780781,    // * total number of transactions between genesis and last checkpoint
                //   (the tx=... number in the SetBestChain debug.log lines)
    2881        // * estimated number of transactions per day after checkpoint
};

static Checkpoints::MapCheckpoints mapCheckpointsTestnet =
    boost::assign::map_list_of(0, uint256("0000024c78d7d2fb56363f7777bab06de80307ac751b02e843ca7ae62d2310d2"));
static const Checkpoints::CCheckpointData dataTestnet = {
    &mapCheckpointsTestnet,
    1538323043,
    0,
    250};

static Checkpoints::MapCheckpoints mapCheckpointsRegtest =
    boost::assign::map_list_of(0, uint256("0000024c78d7d2fb56363f7777bab06de80307ac751b02e843ca7ae62d2310d2"));
static const Checkpoints::CCheckpointData dataRegtest = {
    &mapCheckpointsRegtest,
    1538323043,
    0,
    100};

libzerocoin::ZerocoinParams* CChainParams::Zerocoin_Params() const
{
    assert(this);
    static CBigNum bnTrustedModulus(zerocoinModulus);
    static libzerocoin::ZerocoinParams ZCParams = libzerocoin::ZerocoinParams(bnTrustedModulus);

    return &ZCParams;
}

class CMainParams : public CChainParams
{
public:
    CMainParams()
    {
        networkID = CBaseChainParams::MAIN;
        strNetworkID = "main";
        consensus.nSubsidyHalvingInterval = 4000000;
        consensus.nMajorityEnforceBlockUpgrade = 750;
        consensus.nMajorityRejectBlockOutdated = 950;
        consensus.nMajorityWindow = 1000;
        consensus.powLimit = ~arith_uint256(0) >> 20;
        consensus.nPowTargetTimespan = 1 * 60; // ZENZO: 1 minute
        consensus.nPowTargetSpacing = 1 * 60;  // ZENZO: 1 minute
        consensus.fPowAllowMinDifficultyBlocks = false;
        /**
         * The message start string is designed to be unlikely to occur in normal data.
         * The characters are rarely used upper ASCII, not valid as UTF-8, and produce
         * a large 4-byte int at any alignment.
         */
        pchMessageStart[0] = 0x7a;
        pchMessageStart[1] = 0x51;
        pchMessageStart[2] = 0xb9;
        pchMessageStart[3] = 0xc4;
        nDefaultPort = 26210;
        nMaxReorganizationDepth = 100;
        nMinerThreads = 0;
        nMaturity = 50;
        nMasternodeCountDrift = 20;
        nMaxMoneyOut = 83000000 * COIN;

        /** Height or Time Based Activations **/
        nLastPOWBlock = 400;
        nModifierUpdateBlock = 1;
        nZerocoinStartHeight = 101;
        nAccumulatorStartHeight = 50;
        nZerocoinStartTime = 1529726034; // 20:30pm
        nBlockEnforceSerialRange = 1; //Enforce serial range starting this block
        nBlockRecalculateAccumulators = ~1; //Trigger a recalculation of accumulators
        nBlockFirstFraudulent = ~1; //First block that bad serials emerged
        nBlockLastGoodCheckpoint = ~1; //Last valid accumulator checkpoint

        /**
         * Build the genesis block. Note that the output of the genesis coinbase cannot
         * be spent as it did not originally exist in the database.
         *
         * CBlock(hash=00000ffd590b14, ver=1, hashPrevBlock=00000000000000, hashMerkleRoot=e0028e, nTime=1390095618, nBits=1e0ffff0, nNonce=28917698, vtx=1)
         *   CTransaction(hash=e0028e, ver=1, vin.size=1, vout.size=1, nLockTime=0)
         *     CTxIn(COutPoint(000000, -1), coinbase 04ffff001d01044c5957697265642030392f4a616e2f3230313420546865204772616e64204578706572696d656e7420476f6573204c6976653a204f76657273746f636b2e636f6d204973204e6f7720416363657074696e6720426974636f696e73)
         *     CTxOut(nValue=50.00000000, scriptPubKey=0xA9037BAC7050C479B121CF)
         *   vMerkleTree: e0028e
         */
        const char* pszTimestamp = "Sep 30 2018 - Indias Central Bank Denies Formal Creation of Blockchain Unit";
        CMutableTransaction txNew;
        txNew.vin.resize(1);
        txNew.vout.resize(1);
        txNew.vin[0].scriptSig = CScript() << 486604799 << CScriptNum(4) << vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
        txNew.vout[0].nValue = 0 * COIN;
        txNew.vout[0].scriptPubKey = CScript() << ParseHex("04678afdb0fe5548271967f1a67130b7105cd6a828e03909a67962e0ea1f61deb649f6bc3f4cef38c4f35504e51ec112de5c384df7ba0b8d578a4c702b6bf11d5f") << OP_CHECKSIG;
        genesis.vtx.push_back(txNew);
        genesis.hashPrevBlock = 0;
        genesis.hashMerkleRoot = genesis.BuildMerkleTree();
        genesis.nVersion = 1;
        genesis.nTime = 1538323043;
        genesis.nBits = 0x1e0ffff0;
        genesis.nNonce = 1050765;

        consensus.hashGenesisBlock = genesis.GetHash();
        assert(consensus.hashGenesisBlock == uint256("0000024c78d7d2fb56363f7777bab06de80307ac751b02e843ca7ae62d2310d2"));
        assert(genesis.hashMerkleRoot == uint256("7411c8de5f43691fd7cb0f6264867edb8bb35da1bd6f0377e0981b86832254a1"));

		vSeeds.push_back(CDNSSeedData("80.240.31.194", "80.240.31.194")); // Primary DNS Seeder
		vSeeds.push_back(CDNSSeedData("149.28.55.190", "149.28.55.190")); // Secondary DNS Seeder
		vSeeds.push_back(CDNSSeedData("45.77.224.165", "45.77.224.165")); // Backup DNS Seeder
		vSeeds.push_back(CDNSSeedData("45.76.117.67", "45.76.117.67")); // Backup Secondary DNS Seeder
		vSeeds.push_back(CDNSSeedData("45.76.184.133", "45.76.184.133")); // Backup DNS Seeder

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 81);
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 53);
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 215);
        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x02)(0x2D)(0x25)(0x33).convert_to_container<std::vector<unsigned char> >();
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x02)(0x21)(0x31)(0x2B).convert_to_container<std::vector<unsigned char> >();
        // 	BIP44 coin type is from https://github.com/satoshilabs/slips/blob/master/slip-0044.md
        nExtCoinType = 377;

        convertSeed6(vFixedSeeds, pnSeed6_main, ARRAYLEN(pnSeed6_main));

        fRequireRPCPassword = true;
        fMiningRequiresPeers = true;
        fDefaultConsistencyChecks = false;
        fRequireStandard = true;
        fMineBlocksOnDemand = false;
        fSkipProofOfWorkCheck = false;
        fTestnetToBeDeprecatedFieldRPC = false;
        fHeadersFirstSyncingActive = false;

        nPoolMaxTransactions = 3;
        strSporkKey = "041a3041a1018f6495fc808c044481f0d446be6560e593277a34b258537f77922661f983952cb71a9d1b8948b6e1611fcd28507989d23833f0ba3b5d60c7f289cf";
        strObfuscationPoolDummyAddress = "Zp5p6GQjGdpXB8pvLhcYHc4arG6k9YC8k9";
        nStartMasternodePayments = 1516371317; //Wed, 25 Jun 2014 20:36:16 GMT

        /** Zerocoin */
        zerocoinModulus = "d59f1d99dae2770f40fb82066b6f69bb0b3783113505ecf4d958a6021d7204a8612d7c824741ac69cbf426ba4056a0598f2683c54a72c9162821864da23add323b9af365c63d1c60af802a15c3961c4a23a0a4b8f8d0cd681faf9ff5f308a9d8348993a7f5e2560bdc4274aaa670878562ad8774c7fa15ec449385a7e3f2621b152e1f9978890cf02058d3f00d7ed1fc2fba76fe2b8358205dec3f0bd0b648b995f84b74e34ae77a2c134033075cf966b4339f028e039ce8200e279bd0169cf5994a4b135699280fa7be8f0328cfcaa1f7dc7cabe18ba0ec6f42e00792b3f128ec64fee8eb9306b871f6514946649d3fa2247c62ecd5050914570bb35b035fa80ef0995006790eb5ef2e383e7919b7e1aea89f59917c1a7adfdb1a73239c09e191cdde217c53ba0bf96ac9c265054aef811da8b51b1b3ea31d96f5d1ab9acf87363be80f42acf7353b3c4a5297eb3f5676f04b987a3144c5b04d1f6f3fdec243bab3fa2f463a1c50be50b49c156c421befad74c9b6f4367149163d3796355331";
        nMaxZerocoinSpendsPerTransaction = 7; // Assume about 20kb each
        nMinZerocoinMintFee = 1 * ZCENT; //high fee required for zerocoin mints
        nMintRequiredConfirmations = 20; //the maximum amount of confirmations until accumulated in 19
        nRequiredAccumulation = 1;
        nDefaultSecurityLevel = 100; //full security level for accumulators
        nZerocoinHeaderVersion = 4; //Block headers must be this version once zerocoin is active
        nBudget_Fee_Confirmations = 6; // Number of confirmations for the finalization fee
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return data;
    }
};
static CMainParams mainParams;

/**
 * Testnet (v3)
 */
class CTestNetParams : public CMainParams
{
public:
    CTestNetParams()
    {
        networkID = CBaseChainParams::TESTNET;
        strNetworkID = "test";
        consensus.nMajorityEnforceBlockUpgrade = 51;
        consensus.nMajorityRejectBlockOutdated = 75;
        consensus.nMajorityWindow = 100;
        consensus.fPowAllowMinDifficultyBlocks = true;
        pchMessageStart[0] = 0x35;
        pchMessageStart[1] = 0x57;
        pchMessageStart[2] = 0x5a;
        pchMessageStart[3] = 0xa1;
        nDefaultPort = 16210;
        nMinerThreads = 0;
        nLastPOWBlock = 200;
        nMaturity = 15;
        nMasternodeCountDrift = 4;
        nModifierUpdateBlock = 51197; //approx Mon, 17 Apr 2017 04:00:00 GMT
        nMaxMoneyOut = 43199500 * COIN;
        nZerocoinStartHeight = 50;
        nZerocoinStartTime = 1529726039;
        nBlockEnforceSerialRange = 1; //Enforce serial range starting this block
        nBlockRecalculateAccumulators = 9908000; //Trigger a recalculation of accumulators
        nBlockFirstFraudulent = 9891737; //First block that bad serials emerged
        nBlockLastGoodCheckpoint = 9891730; //Last valid accumulator checkpoint

        //! Modify the testnet genesis block so the timestamp is valid for a later start.
        genesis.nTime = 1538323043;
        genesis.nNonce = 1050765;

        consensus.hashGenesisBlock = genesis.GetHash();
        assert(consensus.hashGenesisBlock == uint256("0000024c78d7d2fb56363f7777bab06de80307ac751b02e843ca7ae62d2310d2"));

        vFixedSeeds.clear();
        vSeeds.clear();
        vSeeds.push_back(CDNSSeedData("testnet.znz.io", "testnet.znz.io"));         // Single node address

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 53);
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 73);
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 230);
        // Testnet zenzo BIP32 pubkeys start with 'DRKV'
        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x3a)(0x80)(0x61)(0xa0).convert_to_container<std::vector<unsigned char> >();
        // Testnet zenzo BIP32 prvkeys start with 'DRKP'
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x3a)(0x80)(0x58)(0x37).convert_to_container<std::vector<unsigned char> >();
        // Testnet zenzo BIP44 coin type is '1' (All coin's testnet default)
        nExtCoinType = 1;

        convertSeed6(vFixedSeeds, pnSeed6_test, ARRAYLEN(pnSeed6_test));

        fRequireRPCPassword = true;
        fMiningRequiresPeers = false;
        fDefaultConsistencyChecks = false;
        fRequireStandard = false;
        fMineBlocksOnDemand = false;
        fTestnetToBeDeprecatedFieldRPC = true;

        nPoolMaxTransactions = 2;
        strSporkKey = "0400556a5a4b52557aa51ef491059302a7762d8ed7b3e6037cad7804276cfb080286b8e18773167b124303603e4845e900ddef8995d378bddc098d149860ccf7f3";
        strObfuscationPoolDummyAddress = "xp87cG8UEQgzs1Bk67Yk884C7pnQfAeo7q";
        nStartMasternodePayments = 1420837558; //Fri, 09 Jan 2015 21:05:58 GMT
        nBudget_Fee_Confirmations = 3; // Number of confirmations for the finalization fee. We have to make this very short
                                       // here because we only have a 8 block finalization window on testnet
    }
    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataTestnet;
    }
};
static CTestNetParams testNetParams;

/**
 * Regression test
 */
class CRegTestParams : public CTestNetParams
{
public:
    CRegTestParams()
    {
        networkID = CBaseChainParams::REGTEST;
        strNetworkID = "regtest";
        consensus.nSubsidyHalvingInterval = 150;
        consensus.nMajorityEnforceBlockUpgrade = 750;
        consensus.nMajorityRejectBlockOutdated = 950;
        consensus.nMajorityWindow = 1000;
        consensus.powLimit = ~arith_uint256(0) >> 1;
        pchMessageStart[0] = 0xc6;
        pchMessageStart[1] = 0xbd;
        pchMessageStart[2] = 0xf2;
        pchMessageStart[3] = 0x3a;
        nMinerThreads = 1;
        genesis.nTime = 1538323043;
        genesis.nBits = 0x1e0ffff0;
        genesis.nNonce = 1050765;

        consensus.hashGenesisBlock = genesis.GetHash();
        nDefaultPort = 36210;
        assert(consensus.hashGenesisBlock == uint256("0000024c78d7d2fb56363f7777bab06de80307ac751b02e843ca7ae62d2310d2"));

        vFixedSeeds.clear(); //! Testnet mode doesn't have any fixed seeds.
        vSeeds.clear();      //! Testnet mode doesn't have any DNS seeds.

        nExtCoinType = 1;
        fRequireRPCPassword = false;
        fMiningRequiresPeers = false;
        fDefaultConsistencyChecks = true;
        fRequireStandard = false;
        fMineBlocksOnDemand = true;
        fTestnetToBeDeprecatedFieldRPC = false;
    }
    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataRegtest;
    }
};
static CRegTestParams regTestParams;

/**
 * Unit test
 */
class CUnitTestParams : public CMainParams, public CModifiableParams
{
public:
    CUnitTestParams()
    {
        networkID = CBaseChainParams::UNITTEST;
        strNetworkID = "unittest";
        nDefaultPort = 51478;
        vFixedSeeds.clear(); //! Unit test mode doesn't have any fixed seeds.
        vSeeds.clear();      //! Unit test mode doesn't have any DNS seeds.

        fRequireRPCPassword = false;
        fMiningRequiresPeers = false;
        fDefaultConsistencyChecks = true;
        fAllowMinDifficultyBlocks = false;
        fMineBlocksOnDemand = true;
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        // UnitTest share the same checkpoints as MAIN
        return data;
    }

    //! Published setters to allow changing values in unit test cases
    virtual void setSubsidyHalvingInterval(int anSubsidyHalvingInterval) { nSubsidyHalvingInterval = anSubsidyHalvingInterval; }
    virtual void setEnforceBlockUpgradeMajority(int anEnforceBlockUpgradeMajority) { nEnforceBlockUpgradeMajority = anEnforceBlockUpgradeMajority; }
    virtual void setRejectBlockOutdatedMajority(int anRejectBlockOutdatedMajority) { nRejectBlockOutdatedMajority = anRejectBlockOutdatedMajority; }
    virtual void setToCheckBlockUpgradeMajority(int anToCheckBlockUpgradeMajority) { nToCheckBlockUpgradeMajority = anToCheckBlockUpgradeMajority; }
    virtual void setDefaultConsistencyChecks(bool afDefaultConsistencyChecks) { fDefaultConsistencyChecks = afDefaultConsistencyChecks; }
    virtual void setAllowMinDifficultyBlocks(bool afAllowMinDifficultyBlocks) { fAllowMinDifficultyBlocks = afAllowMinDifficultyBlocks; }
    virtual void setSkipProofOfWorkCheck(bool afSkipProofOfWorkCheck) { fSkipProofOfWorkCheck = afSkipProofOfWorkCheck; }
};

static CChainParams* pCurrentParams = 0;

const CChainParams& Params()
{
    assert(pCurrentParams);
    return *pCurrentParams;
}

CChainParams& Params(CBaseChainParams::Network network)
{
    switch (network) {
    case CBaseChainParams::MAIN:
        return mainParams;
    case CBaseChainParams::TESTNET:
        return testNetParams;
    case CBaseChainParams::REGTEST:
        return regTestParams;
    default:
        assert(false && "Unimplemented network");
        return mainParams;
    }
}

void SelectParams(CBaseChainParams::Network network)
{
    SelectBaseParams(network);
    pCurrentParams = &Params(network);
}

bool SelectParamsFromCommandLine()
{
    CBaseChainParams::Network network = NetworkIdFromCommandLine();
    if (network == CBaseChainParams::MAX_NETWORK_TYPES)
        return false;

    SelectParams(network);
    return true;
}
