#include <iostream>
#include <vector>
#include <set>

using namespace std;

class ParenthesesDiv2Easy {
  public:
    int getDepth(string s);
};


int ParenthesesDiv2Easy::getDepth(string s) {
  int i,depth,tracker;
  depth = 0;
  tracker = 0;

  for (i=0;i<s.size();i++) {
    if (s[i] == '(') {
      tracker ++
      if (tracker > depth) depth = tracker;
    }
    else {
      tracker--;
    }
  }
  return depth;

}

