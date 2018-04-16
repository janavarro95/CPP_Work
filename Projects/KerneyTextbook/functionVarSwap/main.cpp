#include <iostream>
using namespace std;

bool leap_year(int year);



int main() {
    
	int input;
    
	cout << "Enter a year to determine if it is a leap year: ";
	cin >> input;  
	if(!cin){
	cout<<"Invalid input!"<<endl;
	return 0;
	}
	if (leap_year(input) == true)
    	cout << input << " is a leap year.\n";
    
	else
    	cout << input << " is not a leap year.\n";

}



bool leap_year(int year) {
    
	if (year % 4 == 0) {
    	if (year % 100 == 0) {
        	if (year % 400 == 0)
            	return true;
        	else
            	return false;
    	}
    	else
        	return true;
	}
	else
    	return false;
    
}

