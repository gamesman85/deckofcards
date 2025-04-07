#include "Deck.h"
#include <algorithm>  // For std::shuffle
#include <random>     // For std::default_random_engine

Deck::Deck() {
    reset(); // Call reset() to populate the deck
}

void Deck::reset() {
    m_cards.clear(); // Clear any existing cards
    
    // Create a standard 52-card deck
    // Suits are 0-3 (clubs, diamonds, hearts, spades)
    // Ranks are 2-14 (2 through Ace)
    for (int suit = 0; suit < 4; suit++) {
        for (int rank = 2; rank <= 14; rank++) {
            m_cards.push_back(Card(rank, suit));
        }
    }
}

void Deck::shuffle() {
    auto rng = std::default_random_engine{};
    std::shuffle(m_cards.begin(), m_cards.end(), rng);
}

bool Deck::isEmpty() const {
    return m_cards.empty();
}

Card Deck::drawCard() {
    Card topCard = m_cards.back();
    m_cards.pop_back();
    return topCard;
}