#include "Deck.h"
#include "Hand.h"
#include <iostream>

int main() {
    // Create a deck and shuffle it
    Deck deck;
    deck.shuffle();

    // Create a player hand
    Hand playerHand;

    // Draw 5 cards from deck to hand
    for (int i = 0; i < 5; i++) {
        // First check if the deck has cards
        if (!deck.isEmpty()) {
            // Draw a card from the deck
            Card drawnCard = deck.drawCard();
            
            // Add the card to the player's hand
            playerHand.addCard(drawnCard);
        }
    }

    // Show the player's hand
    std::cout << "Player's hand: ";
    playerHand.showHand();

    return 0;
}