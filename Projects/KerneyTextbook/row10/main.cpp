//This code will show the difference between call by value and call by reference


#include <iostream>
#include <vector>

using namespace std;

void subtractByValue(int num){
    num--;
}

void subtractByReference(int& num){
    num--;
}

int main(){
    int number1 = 5;
    subtractByValue(number1); //call by value
    cout << number1<<endl;
    
    int number2 = 5;
    subtractByReference(number2); //call by reference
    cout << number2<<endl;
}
