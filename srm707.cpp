#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Cross {
  public:
    string exist(vector <string>);
};


string Cross::exist(vector <string> board) {
  int i,j;
  for (i=0; i<board.size(); i++) {
    for (j=0; j<board[0].size();j++) {
      if (i != 0 && i != board.size()-1){
        if (j != 0 && j != board[0].size()-1){
          if (board[i][j] == '#') {
            char n = board[i-1][j];
            char s = board[i+1][j];
            char e = board[i][j+1];
            char w = board[i][j-1];
            if (n=='#' && s=='#'  && e=='#' && w=='#') 
              return "Exist";
          }
        }
      }
    }
  }
  return "Does not exist";
}

