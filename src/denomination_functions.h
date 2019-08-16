/**
 * @file       denominations_functions.h
 *
 * @brief      Denomination functions for the Zerocoin library.
 *
 * @copyright  Copyright 2019 PIVX Developers
 * @license    This project is released under the MIT license.
 **/
// Copyright (c) 2015-2019 The PIVX developers

#include "reverse_iterate.h"
#include "util.h"
#include "libzerocoin/Denominations.h"
#include "primitives/zerocoin.h"
#include <list>
#include <map>

void listSpends(const std::vector<CZerocoinMint>& vSelectedMints);