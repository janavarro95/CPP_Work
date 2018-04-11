#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
     vector<int> vec;
     sort(vec.begin(), vec.end());
     for( int i : vec)
          cout << i << endl;
}

//a) The algorithm library doesn't contain sort
//b) The vector library wasn't included
//c) There was nothing in the vector to sort
//d) There was nothing in the vector to print
