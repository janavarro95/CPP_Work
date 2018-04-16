#include <iostream>
#include <vector>

using namespace std;

//example of printing the elements of a vector
int main(){
    vector<string> fruits = {"apple", "banana", "cherry", "peach", "strawberry"};
    for(int i = 0; i < fruits.size(); i++){
        cout << fruits.at(i) << endl;
    }
}
