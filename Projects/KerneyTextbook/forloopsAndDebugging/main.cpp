#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

vector<int> list;

//prompts the user to put numbers into a list
void store_numbers(){
    bool valid = false;
    int size;
    while(!valid) {
        cout << "Enter how many integers to store in the vector: "; cin >> size;
        if(!cin){
            cout << "Invalid dimension!\n";
            cin.clear();
            cin.clear();
	    string s; //Need to have a garbage variable to clear the cin stream.
            cin>>s;
        } else valid = true;
    }
    for(int i = 0; i < size; i++) {
        cout << "Enter an integer to store into the vector\n";
        int num; cin >> num;
        if(!cin){
            cout << "Invalid input!\n";
            cin.clear();
            cin.ignore();
        } else {
            list.push_back(num);
        }
    }
}

int main(){
    store_numbers();
    sort(list.begin(), list.end()); //sorts the vector from smallest to largest
    int min_index = 0, max_index = list.size() - 1; //stores the smallest and biggest indices of the elements in the list
    cout << "Enter an integer for the computer to guess: "; int target; cin >> target; //prompts user to enter number for computer to guess
    while(!cin){ 
	cout << "Invalid input!\n";
        cin.clear();
        cin.ignore();
	string garbage; //Need to have a garbage variable to clear the cin stream.
	cin>>garbage;
	cout << "Enter an integer for the computer to guess: ";  cin >> target;
    }
    bool guessed = false; //flag for whether or not computer has guessed the target
    int count = 0; //stores how many times the computer has guessed
    while(!guessed) { //if the guess isn't the target number
        if(min_index > max_index) break; //the target isn't in the list
        count++; //increase the number of guesses the computer has made
        int guess_index = (min_index + max_index)/2; //stores the guess index with the average of the smallest and biggest indices
        int guess_value = list.at(guess_index); //stores the guess value of the computer
        cout << "my guess is " << guess_value << endl;
        if(guess_value > target) { //if guess is greater than the target...
            max_index = guess_index - 1; //then set the biggest index possible to one less than the guess index
        } else if(guess_value < target){ //if guess is smaller than the target...
            min_index = guess_index + 1; //then set smallest index possible to one more than the guess index
        } else {
            guessed = true; //number has been found
        }
    }
    if(guessed) cout << "It took " << count << " times to guess the correct number!\n";
    else cout << target << " was not in the list!\n";
}
