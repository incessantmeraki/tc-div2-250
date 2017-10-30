#include <iostream>

using namespace std;

class Problem {
  public:
    void solver();
};


void Problem::solver() {
  cout<<"this is where implementation goes"<<endl;
}

//Check 

int main() {
  Problem p;
  p.solver();
  return 0;
}
