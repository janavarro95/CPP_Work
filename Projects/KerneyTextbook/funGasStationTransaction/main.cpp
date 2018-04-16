#include <iostream>
using namespace std;

float convert(float);


int main() {
    
	float fah = 0, cel = 0;    
	cout << "Enter the temperature in Fahrenheit: ";
	cin >> fah;
	if(!cin){
        cout<<"Invalid input!"<<endl;
        return 0;
        }
	cel = convert(fah);
	cout << "\nThe temperature is " << cel << " celcius.\n";
    
}


float convert(float fah) {
	float cel;
	cel = ((fah - 32) * 5) / 9;
	return cel;
}

