#include "position.h"



Position::Position() : x(0), y(0){}


Position::Position(int X, int Y) : x(X), y(Y){}  



void Position::setX(int X){
  x = X;
}

void Position:: setY(int Y){
  y = Y;
}


double Position::calcDistance(Position start, Position end){
 double distance = (end.x - start.x) + (end.y - start.y);
  return distance;
}

