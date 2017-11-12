#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class TriangleEasy {
  public:
    int find(int, vector <int>, vector <int>);
};


int TriangleEasy::find(int n, vector <int> x, vector <int> y) {
  int i, j, k;
  vector < vector <int> > A;
  int edges; 

  A.resize(n);
  for (i=0; i < A.size(); i++) A[i].resize(n,0);


  for (i=0; i < x.size(); i++) {
    A[x[i]][y[i]] = 1;
    A[y[i]][x[i]] = 1;
  }

  edges= 0;

  for (i=0; i<A.size(); i++) {
    for (j=i+1; j<A.size(); j++) {
      for (k=j+1; k<A.size(); k++) {
        edges = max (edges, A[i][j]+A[j][k] + A[k][i])
      }
    }
  }
  return 3 - edges;
}


