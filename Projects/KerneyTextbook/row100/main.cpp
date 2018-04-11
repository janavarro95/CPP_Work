#include <iostream>
using namespace std;



int add_1(int x, int y){
  return x + y;
}

void add_2(int x, int y, int &z){
  z = x + y;
}

int main(){
  cout << "Enter two digits to add: ";
  int x, y, z;
  cin >> x >> y;
  if(!cin){
  cout<<"Error, invalid input"<<endl;
  return 0;
  }
  cout << "With the returnable function, the sum is : " << add_1(x, y) << endl;
  add_2(x, y, z);
  cout << "With the void function, the sum is : " << z << endl;
}
