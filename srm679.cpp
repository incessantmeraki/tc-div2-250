#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class ListeningSongs {
  public:
    int listen(vector <int>, vector <int>, int, int);
};


int ListeningSongs::listen(vector <int> durations1, vector <int> durations2, int minutes, int T) {
  int i,j,k;
  int s;
  vector <int> remaining,t;


  minutes = minutes * 60;
  s=0;
  k=0;

  sort(durations1.begin(), durations1.end());
  sort(durations2.begin(), durations2.end());
  
  if (durations1.size() < T || durations2.size() < T) return -1;

  for(i=0; i<T; i++) {
    s += durations1[i] + durations2[i];
  }

  if (s>minutes) return -1;

  for (j=T; j <durations1.size(); j++) remaining.push_back(durations1[j]);
  for (j=T; j <durations2.size(); j++) remaining.push_back(durations2[j]);

  sort(remaining.begin(), remaining.end());

  for (k=0; k<remaining.size() && s <= minutes; k++) {
    t.push_back(remaining[k]);
    s += remaining[k];
  }


  if (s > minutes) 
    return 2*T + t.size() - 1;
  else
    return 2*T + t.size();
}
