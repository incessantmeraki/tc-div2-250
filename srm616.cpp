#include <iostream>
#include <vector>

using namespace std;

class WakingUpEasy {
  public:
    int countAlarms(vector <int>, int);
};


int WakingUpEasy::countAlarms(vector <int> volume, int S) {
  int i,output;
  output = 0;
  for (i = 0; i < volume.size(); i++) {
    if (S <= 0) return output;
    
    S = S - volume[i];
    output++;
    if ( i == volume.size() -1 ) i = -1;
  }
}

