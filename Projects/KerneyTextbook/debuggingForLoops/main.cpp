#include <iostream>

using namespace std;

int fibonacci(int input);

int main()
{
	int number = 0;

	cout << "Enter a positive number of digits to display in the Fibonacci sequence (1 to 40): ";
	cin >> number;
	if ((!cin) || (number < 1) || (number > 40)){
		cout << "BAD INPUT.";
		return 0;
	}
	else{
		for (int i = number; i > 0; i--){
			cout << "Fibonacci digit " << number << " is " << fibonacci(number) << endl;
			number--;
		}
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

