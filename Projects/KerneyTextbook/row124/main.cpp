#include <iostream>

using namespace std;

int fibonacci(int input);

int main()
{
	int number = 0;

	cout << "Enter a positive number of digits to display in the Fibonacci sequence (between 1 and 40): ";
	cin >> number;
	if ((!cin) || (number < 1) || (number > 40)){
		cout << "BAD INPUT.";
		return 0;
	}
	else{
		for (int i = 1; i <= number; i++){
			cout << "Fibonacci digit " << i << " is " << fibonacci(i) << endl;
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

