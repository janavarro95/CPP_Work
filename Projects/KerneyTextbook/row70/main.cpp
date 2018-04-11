#include <iostream>

using namespace std;

int main(){
    cout << "Enter an integer: "; 
    int num; cin >> num;
    if(!cin){ //checks if an integer is entered
        cout << "Invalid input!"<<endl;
        cin.clear(); //clears the cin buffer
        cin.ignore();
    }
    else{
    	cout<<"The number you entered is: "<<num<<endl;
    }
}
