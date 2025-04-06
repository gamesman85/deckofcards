#include <vector>
#include "Card.h"

class Hand {
private:
    std::vector<Card> m_cards;

public:
    Hand();
    
    void addCard(const Card& card);
    void showHand() const;
    void clear();
};