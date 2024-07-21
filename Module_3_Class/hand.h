#ifndef Hand_H
#define Hand_H
#include "card.h"
#include <vector>



class Hand{
private:
  vector<Card> cards;
public:
  Hand();
  string showCards();
  string toString();
  Card getCard(int index);
  void addCard(Card c);
  void addCards(vector<Card> cs);
  int getSize();
};







#endif