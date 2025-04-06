class Card {
    private:
        int m_suit;  // 0-3: clubs, diamonds, hearts, spades
        int m_rank;  // 1-13: ace through king
    
    public:
        Card(int rank, int suit);
        
        int getSuit() const;
        int getRank() const;
        std::string toString() const;
    };