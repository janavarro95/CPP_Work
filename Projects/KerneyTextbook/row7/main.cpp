//What will this block of code print? (Assuming all necessary includes and namespaces are declared)
#include <iostream>
#include <string>
using namespace std;
int main() {
      string word = "BueNo";
      for(int i = 0; i < word.length(); i++) {
            if(i % 2) word.at(i) = tolower(word.at(i));
      }
    cout<<word<<endl;
}
