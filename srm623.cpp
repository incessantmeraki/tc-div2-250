#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

class CatchTheBeatEasy {
  public:
    string ableToCatchAll(vector <int>, vector <int>);
};


string CatchTheBeatEasy::ableToCatchAll(vector <int> x, vector <int> y) {
  int i;
  multimap <int,int> Points;
  multimap <int,int>::iterator pit;

  int cx, cy;
  int x_dist, y_dist;
  
  for (i=0; i<x.size(); i++) Points.insert(make_pair(y[i], x[i]));
  
  cx = 0;
  cy = 0;

  for (pit = Points.begin(); pit != Points.end(); pit++) {
    y_dist = pit->first - cy;
    x_dist = pit->second - cx;

    if (x_dist < 0) x_dist = -x_dist;

    if (x_dist > y_dist) return "Not able to catch";

    cy = pit->first;
    cx = pit->second;
  }
  return "Able to catch";
}
