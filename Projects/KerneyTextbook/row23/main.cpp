#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ofstream new_file;
  cout << "Name of file: ";
  string file_name;
  cin >> file_name;
  new_file.open(file_name);
  cout << "Word to put in file: ";
  string word;
  cin >> word;
  new_file << word << endl;
  new_file.close();
}
