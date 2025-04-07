#include <string>

class Card {
    private:
        int m_suit;  // 0-3: clubs, diamonds, hearts, spades
        int m_rank;  // 2-14: deuce through ace
    
    public:
        Card(int rank, int suit);
        
        int getSuit() const;
        int getRank() const;
        std::string toString() const;
    };