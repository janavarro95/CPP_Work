#include<iostream> //Allows us to print to the screen.
#include<cstdlib> //Include the c standard library. Not always used but is good to have around.

using namespace std; //That way we don't have to do std::cout every time we want to use that bit of code.


int add(int num1, int num2){

	return num1 + num2;
}



//In C++ all of our functions have to go above main unless we use a function delcaration!

int main(){

	int number1;
	int number2;

	cout<<"Enter two numbers to add!"<<endl; //Print a basic message to the screen.
	cin>>number1; //Take user input for both numbers;
	cin>>number2;
	cout<<"You entered: "<<number1<<" and "<<number2<<endl;
	cout<<"Your final result is: "<<add(number1,number2)<<endl;
	return 0; //returns an error message incase something goes wrong.
}
