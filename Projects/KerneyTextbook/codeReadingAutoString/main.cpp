#include <iostream>
using namespace std;

int main(){
int x=3;
int y=9;
cout<<"This is x"<<x<<endl;
cout<<"This is y"<<y<<endl;
//......
if(x = y){      //assume x & y are the same type
//.......
}
cout<<"This is x"<<x<<endl;
cout<<"This is y"<<y<<endl;
}
//a) If statements in this fashion are not in the C++ language
//b) If statements should not be used in this situation, switch-case is preferred
//c) You cannot compare two variables of the same type
//d) You are not comparing variables, you are setting x equal to y, which always comes out as true

