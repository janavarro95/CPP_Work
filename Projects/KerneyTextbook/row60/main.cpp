#include <iostream>
using namespace std;

int main(){
  cout << "This is the modulus calculator\nEnter a modulus numerator: ";
  int x;
  cin >> x;
  if(!cin){
  cout<<"Invalid input!"<<endl;
  return 0;
  }
  cout << "Enter a modulus denominater: ";
  int y;
  cin >> y;
  if(!cin){
  cout<<"Invalid input!"<<endl;
  return 0;
  }
  cout << x << " % " << y << " = " << x % y << endl;
}




