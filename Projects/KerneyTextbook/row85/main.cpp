#include <iostream>
using namespace std;

void change_x(int &x, int new_x){
  x = new_x;
}


int main(){
  int x;
  cout << "Enter value for x: ";
  cin >> x;
  if(!cin){
  cout<<"Invalid input!\n";
  return 0;
  }
  cout << "X is " << x << endl;
  cout << "Enter new value for x.\n";
  int new_x;
  cin >> new_x;
  if(!cin){
  cout<<"Invalid input!\n";
  return 0;
  }
  change_x(x, new_x);
  cout << "X is now: " << x << endl;
}
