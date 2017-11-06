#include <iostream>
#include <vector>
#include <set>

using namespace std;

class SquareFreeString {
  public:
    string isSquareFree(string s);
  private: 
    bool isSquare(string s);
};


string SquareFreeString::isSquareFree(string s) {
  int i,j;
  string t;

  for (i=0; i<s.size(); i++) {
    for (j=2; (j+i-1) < s.size(); j+=2) {
      t  = s.substr(i,j);
      if (isSquare(t)) return "not square-free";
    }
  }
  return "square-free";
}

bool SquareFreeString::isSquare(string s) {
  int l = s.size();
  return (s.substr(0,l/2) == s.substr(l/2,l/2));
}

