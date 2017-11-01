#include <iostream>
#include <vector>
#include <set>

using namespace std;

class SuperUserDo {
  public:
    int install(vecotr<int>, vector<int>);
};


int SuperUserDo::install(vector <int> A, vector <int> B) {
  set<int> collection;
  int i,j;

  for (i = 0; i < A.size() ; i++) {
    for (j=A[i]; j<=B[i]; j++) collection.insert(j);
  }
  return collection.size();
}
