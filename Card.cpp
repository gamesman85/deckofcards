#include "Card.h"
#include <iostream>
#include <string>

Card::Card(int rank, int suit): m_rank(rank), m_suit(suit) {}

int Card::getSuit() const {
    return m_suit;
}

int Card::getRank() const {
    return m_rank;
}

std::string Card::toString() const {
    std::string rankStr;
    
    switch(m_rank) {
        case 14: rankStr = "A"; break;
        case 13: rankStr = "K"; break;
        case 12: rankStr = "Q"; break;
        case 11: rankStr = "J"; break;
        default: rankStr = std::to_string(m_rank);
    }
    
    std::string suits[] = {"♣", "♦", "♥", "♠"};
    
    return rankStr + suits[m_suit];
}