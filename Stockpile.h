#pragma once

#include "Card.h"

#include <array>
#include <vector>

struct Stockpile
{
    // There are five sets of cards in the stockpile, each one containing a card for each column
    // The stockpile removes an entire row when you draw from it so each column always has the same number of cards
    std::vector<std::array<Card, 10>> cards;
};

