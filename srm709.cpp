#include <vector>
#include <iostream>
using namespace std;


class Robofactory {
  public:
    int reveal(vector <int> query, vector <string> answer);
};

int Robofactory::reveal(vector <int> query, vector <string> answer)
{
  int i;
  int could_be_corrupted;

  for (i = 0; i < query.size(); i++) {
    if (query[i] %2 == 0 && answer[i] == "Odd") return i;
    if (query[i] %2 == 1 && answer[i] == "Even") return i;
  }

  could_be_corrupted = 0;
  
  for (i = 0; i < query.size(); i++) {
    if (i == 0 || query[i-1]%2 == 0) could_be_corrupted++;
  }

  if (could_be_corrupted == 1) return 0;

  return -1;
}
