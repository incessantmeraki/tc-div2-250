#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Xylophone {
  public:
    int countKeys(vector<int> keys);
};


int Xylophone::countKeys(vector <int> keys) {
  set <int> notes;
  int i;
  
  for(i=0; i<keys.size(); i++) {
    notes.insert((keys[i] -1) % 8);
  }
  return notes.size();
}

