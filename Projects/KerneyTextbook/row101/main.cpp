#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
vector<int> v = {9,4,7,2,3};
sort(v.begin(),v.end());
for(int i : v)
	cout<<i<<endl;
}
