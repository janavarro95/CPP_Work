#include <iostream>
using namespace std;

int main(){
  //this is a legacy c++ feature that should not be used, but still here for teaching
  int loop_total = 5;
  int loop_count = 0;
 loop_point:
  cout << "Hello World!\n";
  loop_count++;
  if(loop_count < loop_total) goto loop_point;
}

