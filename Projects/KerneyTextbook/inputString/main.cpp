#include <iostream>
using namespace std;

int main(){
  cout << "Enter a number: ";
  int x, y;
  cin >> x;
  if(!cin){
  cout<<"Invalid input!\n";
  return 0;
  }
  cout << "Enter a second number: ";
  cin >> y;
  if(!cin){
  cout<<"Invalid input!\n";
  return 0;
  }
  cout << "The sum is " << x + y << ".\n";
}

