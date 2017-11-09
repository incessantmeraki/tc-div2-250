#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

class TheKingsArmyDiv2 {
  public:
    int getNumber(vector <string>);
};


int TheKingsArmyDiv2::getNumber(vector <string> state) {
  int i,j;
  bool one = false;

  for (i=0; i<state.size(); i++) {
    if (state[i].find("HH") != string::npos) return 0;
    if (state[i].find("H") != string::npos) one = true;
  }

  if (!one) return 2;

  for(i=1; i<state.size(); i++) {
    for (j=0; j<state[i].size(); j++) {
      if (state[i][j] == 'H') {
        if (state[i-1][j] == 'H') {
          return 0;
        }
      }
    }
  }

  return 1;
}

