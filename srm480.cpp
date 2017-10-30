#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Cryptography {
  public:
    long long encrypt(vector<int>);
};


long long Cryptography::encrypt(vector <int> numbers) {
  long long product;
  product = 1;
  int i, pos;

  pos = min_element(numbers.begin(), numbers.end()) - numbers.begin();
  numbers[pos]++;
  
  for(i=0; i<numbers.size(); i++){
    product *= numbers[i];
  }

  return product;
}