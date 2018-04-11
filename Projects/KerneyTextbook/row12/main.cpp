#include <iostream>

using namespace std;

//calculates the factorial of a number
int factorial(int n){
    if(n <= 1) return 1; //factorial of any number <= 1 is 1
    else return n * factorial(n - 1); 
}

int main(){
    cout << factorial(7);
}
