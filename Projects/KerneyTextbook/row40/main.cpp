#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> list1 = {1, 2, 3, 4, 5};
  vector<int> list2 = {6, 7, 8, 9, 10, 11};

  cout << "Vector 1: ";
  for(int i : list1)
    cout << i << " ";
  cout << endl;

  cout << "Vector 2: ";
  for(int i : list2)
    cout << i << " ";
  cout << endl;

  list1.insert(list1.end(), list2.begin(), list2.end());
  cout << "Vector 1 + Vector 2: ";
  for(int i : list1)
    cout << i << " ";
  cout << endl;
}
