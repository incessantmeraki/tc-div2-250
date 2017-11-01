#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

class SwapAndArithmetic {
  public:
    string able(vector <int>);
};


string SwapAndArithmetic::able(vector<int> x) {
  int i,d;
  sort(x.begin(), x.end());
  
  d=x[1]-x[0];
  
  for(i=1; i<x.size(); i++){
    if(x[i] != x[i-1] +d) {
      return "Impossible";
    }
  }
  return "Possible";
}

