#include <iostream>
using namespace std;
int main(){
  int z;
  cout<<"This is z: "<<z+z<<endl;
  int y;
  int x = x + y;
  cout << x << endl;
  int b;
  int a;
  int c;
  cout<<a<<endl<<b<<endl<<c<<endl<<a+b+c<<endl;
}

//a) Crash because x and y have not been initialized.
//b) Print out 0 because if the programmer has not set a number, the compiler makes it 0.
//c) Prints out an address because since the integers where not initialized, then they simply point to an address in memory.
//d) Prints out a number in the range of the possible size of an int.
