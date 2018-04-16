#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<string> shopping_list = {"banana", "apple", "orange", "spinach", "tofu", "chips", "beef", "rice", "bagels", "cake"}; //list of items
    cout << "enter an item: "; //prompts user
    string item; cin >> item; //reads user input
    bool item_found = false; //flag to determine if the item has been found
    for(int i = 0; i < shopping_list.size(); i++){ //iterate through the list
        if(item == shopping_list.at(i)) { 
             item_found = true; //set the found flag to true
             break; //why keep searching through the list if item has been found?
        }
    }
    if(item_found) cout << item << " is on your shopping list!\n";
    else cout << item << " is not on your shopping list!\n";
}
