#include <iostream>
#include <vector>
#include <set>

using namespace std;

class ChessFloor {
  public:
    int minimumChanges(vector <string> );
};


int ChessFloor::minimumChanges(vector <string> floor) {
  int i, j, b, w;
  int best, nc;

  best = floor.size() * floor.size() +1;

  for (b='a'; b<='z'; b++) {
    for (w='a'; w<='z'; w++) {
      if (b != w) {
        nc = 0;
        for (i=0; i<floor.size(); i++) {
          for (j=0; j<floor.size(); j++) {
            if ((i+j)%2 == 0 && floor[i][j] !=b) nc++;
            if ((i+j)%2 == 1 && floor[i][j] !=w) nc++;
          }
        }
        if (nc < best) best = nc;
      }
    }
  }
  return best;
}
