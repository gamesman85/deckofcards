#pragma once

#include "Card.h"
#include <vector>

class Deck {
private:
    std::vector<Card> m_cards;

public:
    Deck();  // Creates standard 52-card deck
    
    void shuffle();
    Card drawCard();
    bool isEmpty() const;
    void reset();  // Rebuilds a full deck
};