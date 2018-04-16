#include <iostream>
using namespace std;

int adding(int value)
{
    int new_number;
    new_number = value + 1;
    return new_number;
}


int main()
{
    int user_input = 0, results = 0;

    cout << "Enter an integer: ";
    cin >> user_input;
    if(!cin){
        cout<<"Invalid input!"<<endl;
        return 0;
    }
    results = adding(user_input);

    cout << user_input << " + 1 = " << results << ".\n";
    
    return 0;
}

