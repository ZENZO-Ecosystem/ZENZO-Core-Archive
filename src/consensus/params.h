
// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZENZO_CONSENSUS_PARAMS_H
#define ZENZO_CONSENSUS_PARAMS_H

#include "arith_uint256.h"
#include "uint256.h"

namespace Consensus {
/**
 * Parameters that influence chain consensus.
 */
    struct Params {
        uint256 hashGenesisBlock;
        int nSubsidyHalvingInterval;
        /** Used to check majorities for block version upgrade */
        int nMajorityEnforceBlockUpgrade;
        int nMajorityRejectBlockOutdated;
        int nMajorityWindow;
        /** Proof of work parameters */
        arith_uint256 powLimit;
        bool fPowAllowMinDifficultyBlocks;
        int64_t nPowTargetSpacing;
        int64_t nPowTargetTimespan;
        int64_t DifficultyAdjustmentInterval() const { return nPowTargetTimespan / nPowTargetSpacing; }
    };
} // namespace Consensus

#endif // ZENZO_CONSENSUS_PARAMS_H