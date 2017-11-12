#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

class EllysSubstringSorter {
  public:
    string getMin(string, int);
};


string EllysSubstringSorter::getMin(string S, int L) {
  int i,j;
  string t1,t2,o;

  t1 = S.substr(0,L);
  sort(t1.begin(), t1.end());
  t2 = t1 + S.substr(L);
  o = t2; 
  
  for(i=1; i+L-1 < S.size(); i++) {

    t1 = S.substr(i,L);
    sort(t1.begin(), t1.end());
    t2 = S.substr(0,i) +t1 + S.substr(i+L);
    if (t2 < o) o = t2;
  }

  return o;

}

