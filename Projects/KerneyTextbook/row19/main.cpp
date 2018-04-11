#include <iostream>
using namespace std;

int add(int x, int y){
  return x + y;
}
int main(){
  cout << "Enter value for x: ";
  int x = 0;
  int y = 0;
  cin >> x;
  if(!cin){
      cout<<"Invalid input!"<<endl;
      return 0;
  }
  cout << "Enter value for y: ";
  cin >> y;
  if(!cin){
      cout<<"Invalid input!"<<endl;
      return 0;
  }
  cout << "Sum of x and y is " << add(x, y) << ".\n";
}

