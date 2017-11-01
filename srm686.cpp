#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

class TreeAndVertex {
  public:
    int get(vector <int>);
};


int TreeAndVertex::get(vector <int> tree) {
  map<int, set<int>> tracker;
  map<int, set<int>>::iterator it;
  vector <int> rv;
  int i;

  for (i=0; i<tree.size(); i++){
    tracker[tree[i]].insert(i+1);
    tracker[i+1].insert(tree[i]);
  }

  for(it=tracker.begin(); it!= tracker.end(); it++){
    rv.push_back(tracker[it->first].size());
  }

  sort(rv.begin(), rv.end());
  return rv[rv.size() -1];
}

