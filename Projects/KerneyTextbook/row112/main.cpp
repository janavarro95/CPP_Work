#include <iostream>
using namespace std;

int even_odd(int &a) {
    if (a%2==0) a=a*a;
    else if (a%3==0) a=a*3;
    return a;
}
int main() {
        int input = 0;
	cout<<"This program will multiply a number multiplied by itself (if even) or by 3 (if odd) until that number is greater than or equal to 1000."<<endl;
        cout<<"Please input an integer that is not 0 or 1 and is less than 1000."<<endl;
	cin >> input;
	if(!cin){
	cout<<"Invalid input! Input was not a valid number."<<endl;
	return 0;
	}
	if(input==0 || input==1){
	    cout<<"Sorry but I asked for an integer that was not 0 or 1."<<endl;
	    return 0;
	}
	if(input>=1000) {
	    cout<<"Sorry but I asked for an integer that was smaller than 1000."<<endl;
            return 0;
	}
        while (input<1000){
            cout << even_odd(input) << endl;
        }
}
