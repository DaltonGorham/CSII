#include "card.cpp"
#include "deck.cpp"
#include "hand.cpp"
#include <ctime>
using namespace std;



int main(){
  Deck deck;
  Hand hand;
  hand.addCard(deck.dealCard());
  hand.addCards(deck.dealCards(7));

  cout << hand.showCards() << endl;
  cout << hand.getSize();
  return 0;
}