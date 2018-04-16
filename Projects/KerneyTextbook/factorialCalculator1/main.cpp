#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> numbers){
    for(int i: numbers){
        cout << i << endl;
    }
}

int main(){
    vector<int> numbers = {17, 38, 21, 19, 0, 54, 2, 6};
    cout << "Original List: " << endl;
    printVector(numbers);
    sort(numbers.begin(), numbers.end());
    cout << "Sorted list: " << endl;
    printVector(numbers);
}
