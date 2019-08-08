/**
 * @file       denominations_functions.cpp
 *
 * @brief      Denomination functions for the Zerocoin library.
 *
 * @copyright  Copyright 2017 PIVX Developers
 * @license    This project is released under the MIT license.
 **/
// Copyright (c) 2015-2017 The PIVX developers

#include "denomination_functions.h"

using namespace libzerocoin;

// -------------------------------------------------------------------------------------------------------
// Get change (no limits)
// -------------------------------------------------------------------------------------------------------
std::map<CoinDenomination, CAmount> getChange(const CAmount nValueTarget)
{
    std::map<CoinDenomination, CAmount> mapChange;
    CAmount nRemainingValue = nValueTarget;
    // Initialize
    for (const auto& denom : zerocoinDenomList)
        mapChange.insert(std::pair<CoinDenomination, CAmount>(denom, 0));

    // Start with the Highest Denomination coin and grab coins as long as the remaining amount is greater than the
    // current denomination value
    for (auto& coin : reverse_iterate(zerocoinDenomList)) {
        CAmount nValue = ZerocoinDenominationToAmount(coin);
        do {
            if (nRemainingValue >= nValue) {
                mapChange.at(coin)++;
                nRemainingValue -= nValue;
            }
        } while (nRemainingValue >= nValue);
    }
    return mapChange;
}

// -------------------------------------------------------------------------------------------------------
// Return a list of Mint coins based on mapOfDenomsUsed and the overall value in nCoinsSpentValue
// -------------------------------------------------------------------------------------------------------
std::vector<CZerocoinMint> getSpends(
    const std::list<CZerocoinMint>& listMints,
    std::map<CoinDenomination, CAmount>& mapOfDenomsUsed,
    CAmount& nCoinsSpentValue)
{
    std::vector<CZerocoinMint> vSelectedMints;
    nCoinsSpentValue = 0;
    for (auto& coin : reverse_iterate(zerocoinDenomList)) {
        do {
            for (const CZerocoinMint mint : listMints) {
                if (mint.IsUsed()) continue;
                if (coin == mint.GetDenomination() && mapOfDenomsUsed.at(coin)) {
                    vSelectedMints.push_back(mint);
                    nCoinsSpentValue += ZerocoinDenominationToAmount(coin);
                    mapOfDenomsUsed.at(coin)--;
                }
            }
        } while (mapOfDenomsUsed.at(coin));
    }
    return vSelectedMints;
}

// -------------------------------------------------------------------------------------------------------
// Just for printing/debuggin
// -------------------------------------------------------------------------------------------------------
void listSpends(const std::vector<CZerocoinMint>& vSelectedMints)
{
    std::map<libzerocoin::CoinDenomination, int64_t> mapZerocoinSupply;
    for (auto& denom : libzerocoin::zerocoinDenomList)
        mapZerocoinSupply.insert(std::make_pair(denom, 0));

    for (const CZerocoinMint mint : vSelectedMints) {
        libzerocoin::CoinDenomination denom = mint.GetDenomination();
        mapZerocoinSupply.at(denom)++;
    }

    CAmount nTotal = 0;
    for (auto& denom : libzerocoin::zerocoinDenomList) {
        LogPrint("zero", "%s %d coins for denomination %d used\n", __func__, mapZerocoinSupply.at(denom), denom);
        nTotal += libzerocoin::ZerocoinDenominationToAmount(denom);
    }
    LogPrint("zero", "Total value of coins %d\n", nTotal);
}