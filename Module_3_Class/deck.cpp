#include "deck.h"
#include <ctime>
using namespace std;




Deck::Deck(){
  srand(time(0));
  for (int suit = 0; suit < 4; suit++){
    for (int rank = 0; rank < 13; rank++){
      Card card(static_cast<Suits>(suit), static_cast<RankValue::Rank>(rank), true);
      cards.push_back(card);
    }
    }
}

Card Deck::dealCard(){
  int cardIndex = rand() % cards.size();
  Card tempCard = cards[cardIndex];
  cards[cardIndex] = cards[cards.size() - 1];
  cards.pop_back();
  return tempCard;
}

Card Deck::dealCard(bool faceUp){
  int cardIndex = rand() % cards.size();
  Card tempCard = cards[cardIndex];
  cards[cardIndex] = cards[cards.size() - 1];
  cards.pop_back();
  tempCard.setFaceUp(faceUp);
  return tempCard;
}

vector<Card> Deck::dealCards(int numCards){
  vector<Card> dealtCards;
  for (int i = 0; i < numCards; i++){
    dealtCards.push_back(dealCard());
  }
  return dealtCards;
}

vector<Card> Deck::dealCardsFaceUp(int numCards){
  vector<Card> dealtCards = dealCards(numCards);
  for (Card c : dealtCards){
    c.setFaceUp(true);
  }
  return dealtCards;
}

string Deck::toString(){
  string result;

  for (Card c : cards){
    result += c.toString() + "\n";
  }
  return result;
}
