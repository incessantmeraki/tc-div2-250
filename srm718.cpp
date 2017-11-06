#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

class RelativeHeights {
  public:
    int countWays(vector <int>);
};


int RelativeHeights::countWays(vector <int> h) {
  int i,j;
  vector<int> v;
  set<string> ss;
  map <int,int> m;
  map <int,int>::iterator mit ;

  for(i=0; i<h.size(); i++)
    m[h[i]] = 0;

  i=m.size();
  for(mit=m.begin(); mit!=m.end(); mit++) {
    m[mit->first] = i;
    i--;
  }

  for (j=0; j<h.size(); j++) {
    h[j] = m[h[j]];
  }

  for(i=0; i<h.size(); i++) {
    string s;
    s.clear();
    for(j=0;j<h.size();j++) {
      if (j==i) continue;
      if (h[j] > h[i])
        s.push_back((h[j]-1)+'0');
      else
        s.push_back(h[j]+'0');
    }
    ss.insert(s);
  }

  return ss.size();

}

