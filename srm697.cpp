#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class TriangleMaking {
  public:
    int maxPerimeter(int, int, int);
};


int TriangleMaking::maxPerimeter(int a, int b, int c) {
  vector <int> sides;
  sides.push_back(a);
  sides.push_back(b);
  sides.push_back(c);  
  
  sort(sides.begin(), sides.end())

  if ((sides[0] + sides[1]) <= sides[2])
    sides[2]  = (sides[0] + sides[1]) - 1;
  
  return (sides[0] + sides[1]) + sides[2]);
  

}

