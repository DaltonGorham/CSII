#include "card.h"
using namespace std;


Card::Card(Suits s, RankValue::Rank r, bool Up) : suit(s), rank(r), faceUp(Up){}

Suits Card::getSuit(){
  return suit;
}

RankValue::Rank Card::getRank(){
  return rank;
}

string Card::getRankName(){
  switch (rank){
    case RankValue::Ace: return "Ace";
    case RankValue::Two: return "Two";
    case RankValue::Three: return "Three";
    case RankValue::Four: return "Four";
    case RankValue::Five: return "Five";
    case RankValue::Six: return "Six";
    case RankValue::Seven: return "Seven";
    case RankValue::Eight: return "Eight";
    case RankValue::Nine: return "Nine";
    case RankValue::Ten: return "Ten";
    case RankValue::Jack: return "Jack";
    case RankValue::Queen: return "Queen";
    case RankValue::King: return "King";
    default: return "Unknow Rank";
  }
}

string Card::getSuitName(){
  switch (suit) {
    case Hearts: return "Hearts";
    case Diamonds: return "Diamonds";
    case Clubs: return "Clubs";
    case Spades: return "Spades";
    default: return "Unknown Suit";
  }
}

void Card::setFaceUp(bool isFaceUp){
  faceUp = isFaceUp;
}

string Card::toString(){
  if (faceUp){
    return getRankName() + " of " + getSuitName(); 
  } else{
    return "Unknown Card";
  }
}