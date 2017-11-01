#include <iostream>
#include <vector>
#include <set>

using namespace std;

class DevuAndGame {
  public:
    string canWin(vector<int>);
};


string DevuAndGame::canWin(vector <int> nextLevel) {
  int count,i;
  count =0;
  i=0;

  while (true) {
    i = nextLevel[i]; 
    count++;
    if (i == -1)
      return "Win"

    if (count == nextLevel.size())
      break;
  }
  return "Lose"
}

