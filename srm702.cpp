#include <iostream>
#include <vector>
#include <set>

using namespace std;

class TestTaking {
  public:
    int findMax(int, int, int);
};


int TestTaking::findMax(int questions, int guessed, int actual) {
  int output;
  int t,f;
  output = 0;
  
  t = actual;
  f = questions - actual;

  if (guessed <= actual)  {
    output = output + guessed + f; 
  } else {
    output =  actual + (questions - guessed);
  }

  return output;
}

