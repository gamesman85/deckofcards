#include "Hand.h"
#include <iostream>  // For output in showHand

Hand::Hand() {
    // Create an empty hand - nothing needed here
    // m_cards is automatically initialized as an empty vector
}

void Hand::addCard(const Card& card) {
    m_cards.push_back(card);
}

void Hand::showHand() const {
    for (const auto& card : m_cards) {
        std::cout << card.toString() << " ";
    }
    std::cout << std::endl;
}

void Hand::clear() {
    m_cards.clear();
}