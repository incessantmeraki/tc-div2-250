#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>

using namespace std;

class BearSong {
  public:
    int countRareNotes(vector <int>);
};


int BearSong::countRareNotes(vector <int> notes) {
  int i;
  map <int,int> tracker;
  map<int,int>::iterator it;
  int output = 0;
  
  for(i=0; i<notes.size(); i++) {
    tracker[notes[i]]++;
  }

  for(it=tracker.begin(); it != tracker.end(); it++){
    if (it->second == 1) output++;
  }

  return output;
}

