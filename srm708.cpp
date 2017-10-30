#include <iostream>
#include <vector>
#include <set>

using namespace std;

class SafeBetting {
  public:
    int minRounds(int, int, int);
};


int SafeBetting::minRounds(int a, int b, int c) {
  int output = 0;

  while ( b < c) {
    int betAmount = b - a;
    b += betAmount;
    output++;
  }
  return output;
}

