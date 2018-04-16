#include <iostream>
using namespace std;

int main(){
  int* x = new int; //heap memory                                                                                                                     
  int y = 0; //stack memory                                                                                                                           
  *x = 0;
  cout << "X is " << *x << endl << "Y is " << y << endl;
}




