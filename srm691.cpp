#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Plusonegame {
  public:
    string getorder(string s);
};


string Plusonegame::getorder(string s) {
  int i,plusCount;
  vector <int> digitCount(10,0);
  string output;

  plusCount=0;

  for(i=0; i<s.size(); i++) {
    if (s[i]=='+')
      plusCount++;
    else
      digitCount[s[i]-'0']++;
  }

  for(i=0; i<digitCount.size(); i++){
    while (digitCount[i]--)
      output.push_back('0'+i);
    if (plusCount){
      output.push_back('+');
      plusCount--;
    }
  }

  while(plusCount--)
    output.push_back('+');

  return output;
}

