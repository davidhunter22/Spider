#pragma once

#include "Stockpile.h"

// A board represents on position in a game, there is an initial Board which is what you start playing from
struct Board
{
    // The first four columns have 5 down cards the next 6 have 4
    // Down cards are turned over per column until all the down cards have been turned over at which point the vector for that column will be empty
    // Cards are turned over when a move means a column has no up cards
    // When the vector for the column is empty that means the column is potentially empty
    std::array<std::vector<Card>, 10> down_cards;

    // Each column can have from zero to some big number of up cards, if a move results in 13 in sequence up cards of the same suit all 13 are removed 
    std::array<std::vector<Card>,10> up_cards;

    Stockpile stockpile;
};

