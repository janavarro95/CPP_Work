#include <iostream>
using namespace std;

int main(){
  bool x = true;
  bool y = false;

  if(x && y)
    cout << "X and Y are true!\n";
  if(x || y)
    cout << "X and/or Y is true!\n";
  if(x != y)
    cout << "X or Y is true!\n";
}

