#include <iostream>
#include <vector>

using namespace std;

class RangeEncoding {
  public:
    int minRanges(vector <int>);
};


int RangeEncoding::minRanges(vector <int> arr) {
  int i, output = 1;
  for (i = 1; i < arr.size() ; i++) {
    if (arr[i] == arr[i-1] + 1)
      continue;
    else
      output++;
  } 
  return output
}
