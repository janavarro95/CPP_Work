#include <iostream>
using namespace std;

int factorial(int x){
  if(x == 1) return 1;
  int y = 0;
  y = x * factorial(x - 1);
  return y;
}


int main(){
  cout << "Welcome to the factorial calculator.\nEnter a number: ";
  int x = 0;
  cin >> x;
  if(!cin){ 
     cout<<"Invalid input!"<<endl;
     return 0;
  }
  factorial(x);
  cout << "The answer is: " << factorial(x) << endl;
}
