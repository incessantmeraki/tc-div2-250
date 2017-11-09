#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class LittleElephantAndDouble {
  public:
    string getAnswer(vector <int>);
};


string LittleElephantAndDouble::getAnswer(vector <int> A) {
  int i,j;

  sort(A.begin(), A.end());

  for(i=0; i<A.size()-1; i++) {
    while (A[i] < A[i+1])
      A[i] *=2;
    if (A[i] != A[i+1]) return "NO";
  }
  return "YES";
}


