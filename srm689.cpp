#include <iostream>
#include <vector>
#include <set>

using namespace std;

class SimilarUserDetection {
  public:
    string haveSimilar(vector <string> handles);
};


string SimilarUserDetection::haveSimilar(vector <string> handles) {
  set <string> s;
  int i,j;

  for(i=0; i<handles.size(); i++){
    for(j=0; j<handles[i].size(); j++) {
      if (handles[i][j] == '0')
        handles[i][j] = 'O';
      if (handles[i][j] == 'l' || handles[i][j] == 'I')
        handles[i][j] = '1';
    }
    s.insert(handles[i]);
  }

  if (s.size() == handles.size())
    return "Similar handles not found";
  else
    return "Similar handles found";
}

