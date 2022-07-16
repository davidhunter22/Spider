#pragma once

enum class Suit : unsigned char
{
    Heart   = 0,
    Club    = 1,
    Diamond = 2,
    Spade   = 3
};

enum class Rank : unsigned char
{
    Ace = 1,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King
};

struct Card
{
    Suit suit : 2;
    Rank rank : 4;
};

