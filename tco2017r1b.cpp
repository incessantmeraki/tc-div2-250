#include <iostream>
#include <vector>
#include <set>

using namespace std;

class WaterAndOxygen {
  public:
    double maxDays(int, int, int, int);
};


double WaterAndOxygen::maxDays(int remainH2O, int remainO2, int costH2O, int costO2) {
  double Y,W,X,Z,B,A,Days_W,Days_O;

  W = remainH2O;
  X = remainO2;
  Y = costH2O;
  Z = costO2;

  B= W / Y - X / Z;
  A = B * (2.0 * Z * Y) / (Y + 2.0 *Z);

  if (A>W) A=W;
  if (A<0) A=0;

  Days_W = (W-A)/Y;
  Days_O = (X+A/2.0)/Z;
  return (Days_O < Days_W) ? Days_O : Days_W;
}

