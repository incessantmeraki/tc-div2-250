#include <iostream>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

class BearNSWE {
  public:
    double totalDistance(vector <int>, string);
};


double BearNSWE::totalDistance(vector <int> a, string dir) {
  int x, y;
  int i;

  double total = 0;
  x=y=0;
  for (i = 0; i < dir.size(); i++) {
    total += a[i];
    if (dir[i] == 'N') y += a[i];
    if (dir[i] == 'S') y -= a[i];
    if (dir[i] == 'E') x += a[i];
    if (dir[i] == 'W') x -= a[i];
  }
  total += sqrt((x*x + y*y));
  return total;
}

