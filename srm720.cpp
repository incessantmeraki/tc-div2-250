#include <iostream>
#include <vector>
#include <set>

using namespace std;

class DistinctGridEasy {
  public:
    string checkGrid(int, int, vector<int>);
};


string DistinctGridEasy::checkGrid(int n, int k, vector <int> grid) {
  vector < vector <int> > v;
  int i,j,l;
  set<int> s;
  
  v.resize(n);
  l=0;

  for(i=0; i<n; i++) {
    v[i].resize(n);
    for (j=0; j<n; j++) {
      v[i][j] = grid[l];
      s.insert(grid[l]);
      l++;
    }
    if (s.size() != k)
      return "Bad";
    else
      s.clear();
  }

  s.clear();

  //check for columns
  for(i=0;i<n;i++) {
    for(j=0; j<n; j++) {
      s.insert(v[j][i]);
    }
    if (s.size() != k)
      return "Bad";
    else
      s.clear();
  }

  return "Good";
}

