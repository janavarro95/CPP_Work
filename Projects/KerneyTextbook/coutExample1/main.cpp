#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> list = {4, 3, 1, 6, 7, 3, 5, 1, 5, 0, 9, 8, 7, 6};
  for(auto i = list.begin(); i != list.end(); i++)
    cout << *i << endl;
}

