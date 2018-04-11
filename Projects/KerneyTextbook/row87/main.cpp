#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> list(10);
  for(int i = 0; i < list.size(); i++)
    list.at(i) = i;
  for(int i = 0; i < list.size(); i++)
    cout << "Index(" << i << "): " << list.at(i) << endl;
}
