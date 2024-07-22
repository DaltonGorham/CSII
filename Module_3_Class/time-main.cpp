#include "time.cpp"

void testTimeAssignment();
void testTimeSimplify();
void testTimesAddition();
void testTimeSubtraction();
void testTimePlusPlus();
void TestTimeMinusMinus();
void testTimeRelationalOperators();
void testTimeExtractionOperator();
void testTimeIntegerConversion();
int main(){


//testTimeAssignment();
//testTimeSimplify();
//testTimesAddition();
//cout << endl;
//testTimeSubtraction();
//testTimePlusPlus();
//TestTimeMinusMinus();
//testTimeRelationalOperators();
// testTimeExtractionOperator();
testTimeIntegerConversion();


  return 0;
}

void testTimeAssignment(){
  Time now(10, 22);
  Time classStart(9, 40);

  now = classStart;
  cout << now.getHours() << ":" << now.getMinutes();
}

void testTimeSimplify(){
  Time myTime(36, 61, 61);
  Time myOtherTime(-1,-1,-1);
  cout << myTime.getDays() << " " << myTime.getHours() << ":" << myTime.getMinutes() << " " << myTime.getSeconds();
  cout << endl;

  myTime.simplify();

    cout << myTime.getDays() << " " << myTime.getHours() << ":" << myTime.getMinutes() << " " <<  myTime.getSeconds();
}

void testTimesAddition(){
  Time now(9,20,20);
  Time dinner(1,10,10);
  Time later = now + dinner;
  cout << later.getDays() << " " << later.getHours() << ":" << later.getMinutes() << " " << later.getSeconds();
}

void testTimeSubtraction(){
  Time now(9,20,20);
  Time dinner(1,10,10);
  Time later = now - dinner;
  cout << later.getDays() << " " << later.getHours() << ":" << later.getMinutes() << " " << later.getSeconds();
}

void testTimePlusPlus(){
  Time now(11,24,59);
  for (int i = 0; i < 100; i++){
      cout << now.getDays() << " " << now.getHours() << ":" <<now.getMinutes() << " " << now.getSeconds() << endl;
    now++;
  }
}

void TestTimeMinusMinus(){
  Time now(11,24,59);
  now--;
  cout << now.getDays() << " " << now.getHours() << ":" <<now.getMinutes() << " " << now.getSeconds();
}


void testTimeRelationalOperators(){
  Time now(11,59);
  Time later(1,1,1,1);

  cout << (now > later) << endl;
  cout << (now < later) << endl;
}


void testTimeExtractionOperator(){
  Time now(0,12,17,32);
  cout << now;
}

void testTimeIntegerConversion(){
  Time tomorrowsClass(1,9,40,0);
  cout << static_cast<int> (tomorrowsClass) << endl;
}

