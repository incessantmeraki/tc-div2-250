#include <iostream>
#include <vector>
#include <set>

using namespace std;

class SimpleGuess {
  public:
    int getMaximum(vector <int>);
};


int SimpleGuess::getMaximum(vector <int> hints) {
  int i, x, y, output;
  set<int> hintSet;
  
  output = -1;

  for (i=0; i<hints.size(); i++)
    hintSet.insert(hints[i]);

  for (x=1; x<=100; x++){
    for (y=1; y<x; y++) {
      if(hintSet.find(x+y) != hintSet.end() &&
          hintSet.find(x-y) != hintSet.end() &&
          (x*y) > output)
        output = (x*y);
    }
  }

  return output;
}
