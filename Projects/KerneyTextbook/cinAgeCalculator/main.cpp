#include <iostream>
using namespace std;
int main(){
    int x = 0, y = 0, z = 0;
    string choice = " ";
    while (true) {
        if (choice == "yes") x=z;
        else {
            cout << "what is your first number?" << endl;
            cin >> x;
            if(!cin) {
		cout<<"Invalid input!"<<endl;
		return 0;
	    }
	}
        cout << "Input your second number" << endl;
        cin >>y;
	if(!cin) {
            cout<<"Invalid input!"<<endl;
            return 0;
        }
        z = x + y;
        cout << "the sum of those numbers is = " << z << endl;
        cout << " enter yes to do another addition using the last sum as the first number, enter no to use 2 new numbers, and anything else to quit" << endl;
        cin >> choice;
        if (choice == "yes") continue;
        else if (choice == "no"){
            choice = " ";
            continue;
        }
        else {return 0;}
    }
}
