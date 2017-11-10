#include <iostream>
#include <vector>
#include <set>

using namespace std;

class NiceTable {
  public:
    string isNice(vector <string> t);
};


string NiceTable::isNice(vector <string> t) {
  int x, y, r, c, ok, a, b;

  for (x=0; x < (1 << t.size()); x++) {
    for (y=0; y <(1 << t[0].size()); y++) {
      ok = 1;
      for (r=0; r < t.size(); r++) {
        a = (x & (1 << r)) ? 1 : 0;
        for (c=0; c <t[0].size(); c++) {
          b = (y & (1 << c)) ? 1 : 0;
          if (t[r][c] != '0'+ (a ^ b)) ok = 0;
        }
      }
      if (ok) return "Nice";
    }
  }
  return "Not nice";
}
