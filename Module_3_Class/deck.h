#ifndef Deck_H
#define Deck_H
#include "card.h"
#include <vector>
using namespace std;


class Deck{
private:
  vector<Card> cards;
public:
  Deck();
  Card dealCard();
  Card dealCard(bool faceUp);
  vector<Card> dealCards(int numCards);
  vector<Card> dealCardsFaceUp(int numCards);
  string toString();
};






#endif