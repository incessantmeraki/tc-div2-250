#include <iostream>
#include <vector>
#include <set>

using namespace std;

class UpDownHiking {
  public:
    int maxHeight(int, int, int);
};


int UpDownHiking::maxHeight(int N, int A, int B) {
  int Day, Up, Down, Min, Best;

  Up = 0;
  Down = N*B;
  Best = 0;

  for (Day = 1; Day <= N; Day++) {
    Up += A;
    Down -= B;
    Min = (Up < Down) ? Up : Down;
    Best = (Min > Best) ? Min : Best;
  }
  return Best;
}
