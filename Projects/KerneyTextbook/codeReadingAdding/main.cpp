#include <iostream>
using namespace std;
class Human{
  public:
  int age;
  int height_cm;
  int arms;
  int legs;
  int total_fingers_toes;
  int children;
  Human(){
    age = 20;
    height_cm = 255;
    arms = 2;
    legs = 2;
    total_fingers_toes = 20;
    children = 0;
  }
};

int main(){
Human H;
cout<<H.age<<endl;
}

