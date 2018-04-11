//What will the following block of code do?
#include <iostream>

using namespace std;

int main(){
    cout << "Enter an integer: ";
    int num; cin >> num;
    if(!cin){
	cout<<"Invalid input!"<<endl;
	return 0;
    }
    for(int i = 0; i <= num; i++){
        if(i % 2) {
            cout << i << " is odd!\n"; 
        } else cout << i << " is even!\n";
    }
}




