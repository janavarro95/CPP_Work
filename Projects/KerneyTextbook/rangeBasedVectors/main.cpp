/*this code will lower case a word...why is this useful? Suppose you want to match a user input with a list of items available (all lowercase). Because strings are case sensitive, if the user accidentally hits the caps lock while inputting, we will not find a match for what he was looking for even if the two strings being compared are the same word!*/

#include <iostream>
#include <string>

using namespace std;

int main() {
      string word; 
      cout << "Please enter a word: "; //prompts the user 
      cin >> word; //reads in what user entered
      for(int i = 0; i < word.length(); i++) { //iterates over word
            word.at(i) = tolower(word.at(i)); //lowercases all characters 
      }
      cout << "Your word lowercased is: " << word << endl;
}
