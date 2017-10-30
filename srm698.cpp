#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <sstream>

using namespace std;

class Initials {
  public:
    string getInitials(string name);
};


string Initials::getInitials(string name) {
  string word, output;
  istringstream is;

  is.clear();
  is.str(name);
  
  while (is >> word) {
    output.push_back(word[0]);
  }
  return output;
}

