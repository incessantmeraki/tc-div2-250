#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Ropestring {
  public:
    string makerope(string);
};


string Ropestring::makerope(string s) {
  multiset<int> e,o;
  multiset<int>::reverse_iterator mit;
  int dots,rl,i,j;
  string rv;

  s.push_back('.');
  dots = -1;
  rl=0;

  for (i=0; i<s.size(); i++) {
    if (s[i] == '-') {
      rl++;
    }
    else {
      if (rl>0) {
        if (rl % 2 == 0)
          e.insert(rl);
        else
          o.insert(rl);
        rl = 0;
      }
      dots++;
    }
  }

  rv.resize(s.size() - 1, '.');
  i=0;

  for(mit=e.rbegin(); mit != e.rend(); mit++) {
    rl = *mit;
    for(j=0; j<rl; j++) rv[j+i] = '-';
    i += (rl+1);
  }

  for(mit=o.rbegin(); mit != o.rend(); mit++) {
    rl = *mit;
    for(j=0; j<rl; j++) rv[j+i] = '-';
    i += (rl+1);
  }


}

