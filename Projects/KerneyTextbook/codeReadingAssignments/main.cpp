#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec(10,0);
    for(unsigned int i = 0; i <=vec.size()-1; i++) {
        vec.at(i) = i;
        cout << vec.at(i);
    }
}

