#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
  cout << "Enter a list of integers to sort, and any negative integer to end the list.\n";
  vector<int> list;
  int number;
  while(true){
    cin >> number;
    if(!cin){
        while(!cin){
	    string garbage;
	    cin.clear();
	    cin>>garbage; //Used to clean up bad user input.
	}
        cout<<"Invalid input."<<endl;
	continue;
    }
    if(number < 0) break;
    list.push_back(number);
  }
  sort(list.begin(), list.end()); //sorting the vector
  for(int i : list){
    cout << i << " ";
  }
  cout << endl;
}

