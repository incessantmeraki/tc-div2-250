#include <iostream>
#include <vector>
#include <set>

using namespace std;

class LongLiveZhangzj {
  public:
    int donate(vector <string>, vector <string>);
};


int LongLiveZhangzj::donate(vector <string> speech, vector <string> words) {
  int i,j, output;
  output = 0;
  set <string> wordsset;

  for (i=0; i<words.size(); i++) wordsset.insert(words[i])

  for (j=0; j<speech.size(); j++) {
    if (wordsset.find(speech[j]) != wordsset.end())
      output++;
  }
  return output;
}

