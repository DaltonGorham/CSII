#ifndef Card_H
#define Card_H
#include <iostream>
using namespace std;

enum Suits { Hearts, Diamonds, Clubs, Spades };


struct RankValue{
  enum Rank { Ace = 0, Two, Three, Four, Five, Six,  Seven, Eight, Nine, Ten, Jack, Queen, King};
};



class Card{
  private:
    Suits suit;
    RankValue::Rank rank;
    bool faceUp;
  public:
    Card(Suits suit, RankValue::Rank rank, bool up = true); 
    string toString();
    Suits getSuit();
    string getSuitName();
    string getRankName();
    RankValue::Rank getRank();
    void setFaceUp(bool isFaceUp);
};








#endif