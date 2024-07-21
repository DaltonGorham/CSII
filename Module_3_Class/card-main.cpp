#include "card.cpp"
#include "deck.cpp"
#include <ctime>
using namespace std;



int main(){
  
  Card card1(Suits::Hearts, RankValue::King, true);
  cout << card1.toString() << endl;

  Card card2(Suits::Spades, RankValue::Ace, false);
  cout << card2.toString() << endl;

  card2.setFaceUp(true);
  cout << card2.toString() << endl;


  Deck deck;

  cout << deck.dealCard().toString();
  cout << endl << endl;
  vector<Card> hand = deck.dealCards(3);

  for (Card c : hand){
    cout << c.toString() << endl;
  }

  cout << endl << deck.toString();
  cout << endl;
  Deck deck2;

  cout << deck2.toString();

  return 0;
}