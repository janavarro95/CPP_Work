#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    vector <int> power;
    int input = 0;
    cout<<"Please input an integer."<<endl;
    cin >> input;
    if(!cin) {
	cout<<"Invalid input!"<<endl;
	return 0;
    }
	for (int i = 0; i  < 5; i++){
        int temp = 0;
        temp = pow(input, i+1);
        cout <<  temp << endl;
        power.push_back(temp);
    }

    for (int i=1; i <=power.size(); i++){
        cout << power.at(power.size()-i) << endl;
    }
}

