#include <iostream>
using namespace std;

int main(){
  cout << "Enter first word: ";
  string word1, word2;
  cin >> word1;
  if(!cin){
 	cout<<"Invalid Input!"<<endl;
	return 0;
  }
  cout << "Enter second word: ";
  cin >> word2;
  if(!cin){
      cout<<"Invalid Input!"<<endl;
      return 0;
  }
  cout << "Together they are: " << word1 + word2 << endl;
}




