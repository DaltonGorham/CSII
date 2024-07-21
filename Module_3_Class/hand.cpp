#include "hand.h"
using namespace std;
#include <iostream>



Hand::Hand(){
  
}
string Hand:: showCards(){
  string result;
  for (Card c : cards){
    c.setFaceUp(true);
    result += c.toString() + "\n";
  }
  return result;
}
string Hand::toString(){
  string result;
  for (Card c : cards){
    result += c.toString() + "\n";
  }
  return result;
}
Card Hand::getCard(int index){
  Card dummyCard(Suits::Clubs, RankValue::Rank::Ace, true);
  if (index > 0 && index < cards.size()){
  return cards[index];
  }
  return dummyCard;
}
void Hand:: addCard(Card c){
  cards.push_back(c);
}

void Hand::addCards(vector<Card> cs){
  for (Card c : cs){
    cards.push_back(c);
  }
}
int Hand::getSize(){
  return cards.size();
}