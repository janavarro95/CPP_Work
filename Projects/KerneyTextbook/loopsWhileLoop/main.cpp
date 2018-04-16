#include <iostream>

using namespace std;

int fibonacci(int input);

int main()
{
	int number = 0;
    
	cout << "Enter a positive integer from 1 to 40 to print the Fibonacci number at that digit: ";
	cin >> number;
	if ((!cin) || (number < 1) || (number > 40)){
    	cout << "BAD INPUT.";
    	return 0;
	}
	else{
        	cout << "Fibonacci digit " << number << " is " << fibonacci(number) << endl;  
	}
}



int fibonacci(int input)
{
	if (input < 2){
    	return input;
	}
	else{
    	return (fibonacci (input - 1) + fibonacci (input - 2));
	}
}



