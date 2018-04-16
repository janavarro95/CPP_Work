#include <iostream>
using namespace std;

int main(){
  cout << "Enter value for x: ";
  int x;
  int y;
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
  if(x == y){
    cout << "x and y are the same!\n";
  }
  else if(x > y){
    cout << "x is larger than y!\n";
  }
  else {
    cout << "y is larger than x!\n";
  }
}

