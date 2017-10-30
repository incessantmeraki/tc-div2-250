#include <iostream>
#include <string>

using namespace std;

class OneDimensionalRobotEasy {
  public:
    int finalPosition(string , int, int);
};


int OneDimensionalRobotEasy::finalPosition(string commands, int A, int B) {
  int i,pos;
  pos = 0;
  for (i = 0; i < commands.size(); i++) {
    if (commands[i] == 'R' && pos != B)
      pos++;
    if (commands[i] == 'L' && pos != -A)
      pos--;
  }
  return pos;
}

