#include <iostream>
#include <vector>
#include <set>

using namespace std;

class ThreeIncreasing {
  public:
    int minEaten(int a, int b, int c);
};


int ThreeIncreasing::minEaten(int a, int b, int c) {
  int output = 0;
  int eat = 0;
  
  if (a >=b) {
    eat = a-b+1;
    a = a-eat;
    output += eat;
    if (a == 0) return -1;
  }

  if (b>=c) {
    eat = b-c+1;
    b = b-eat;
    output += eat;

    if (a > b) {
      eat = a-b+1;
      a = a-eat;
      output += eat;
      if (a==0) return -1;
    }

    if (b ==0) return -1;
  }
  return output;
}
