#include <iostream>
#include <vector>
#include <set>
#include <deque>
#include <algorithm>

using namespace std;

class PingPongQueue {
  public:
    vector <int> whoPlaysNext(vector <int>, int, int);
};


vector <int> PingPongQueue::whoPlaysNext(vector <int> skills, int N, int K) {
  int p1,p2,i,winner,loser,nWins;
  deque<int> queue;
  vector <int> result;

  p1 = skills[0];
  p2 = skills[1];
  winner=loser=-1;
  nWins = 0;

  for(i=2; i<skills.size(); i++) {
    queue.push_back(skills[i]);
  }

  for(i=1; i < K; i++) {
    if (max(p1,p2) != winner) {
      nWins =0;
    }
    nWins++;

    winner = max(p1,p2);
    loser = min(p1,p2);

    queue.push_back(loser);
    p1 = queue.front();
    queue.pop_front();
    
    if(nWins ==N) {
      queue.push_back(winner);
      p2 = queue.front();
      queue.pop_front();
    } else {
      p2 = winner;
    }
  }

  result.push_back(p1);
  result.push_back(p2);
  sort(result.begin(), result.end());
  return result;
}



