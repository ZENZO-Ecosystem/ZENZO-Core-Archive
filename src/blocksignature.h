// Copyright (c) 2015-2019 The PIVX Core developers
// Copyright (c) 2018-2019 The ZENZO Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZENZO_BLOCKSIGNATURE_H
#define ZENZO_BLOCKSIGNATURE_H

#include "key.h"
#include "primitives/block.h"
#include "keystore.h"

bool SignBlockWithKey(CBlock& block, const CKey& key);
bool SignBlock(CBlock& block, const CKeyStore& keystore);
bool CheckBlockSignature(const CBlock& block);

#endif //ZENZO_BLOCKSIGNATURE_H
