#include <iostream>
#include <string>
using namespace std;

int change_x_by_reference(int &x){
  cout << "Enter new value of x: ";
  int new_x;
  cin >> new_x;
  if(!cin){
      cout<<"Invalid input. Keeping x as it was."<<endl;
      string garbage; //Used to clean up bad user input such as entering a word instead of an integer.
      cin.clear();
      cin>>garbage;
      return x=x;
  }
  x = new_x; //now x in main is equal to new_x
  cout << "Value of x in external function is " << x << ".\n";
}

int change_x_by_value(int x){
  cout << "Enter new value of x: ";
  int new_x;
  cin >> new_x;
  if(!cin){
      cout<<"Invalid input. Output will be original x value."<<endl;
      string garbage; //Used to clean up bad user input such as entering a word instead of an integer.
      cin.clear();
      cin>>garbage;
      return new_x=x;
  }
  x = new_x; // x in main is NOT equal to new_x
  cout << "Value of x in external function is " << x << ".\n";
}

int main(){
  cout << "Enter value for x: ";
  int x;
  cin >> x;
  if(!cin){
      cout<<"Invalid input."<<endl;
      return 0;
  }
  cout << "x is now " << x << ".\n";
  change_x_by_reference(x);
  cout << "X in main is now " << x << ".\n";
  change_x_by_value(x);
  cout << "X in main is still " << x << ".\n";
}

