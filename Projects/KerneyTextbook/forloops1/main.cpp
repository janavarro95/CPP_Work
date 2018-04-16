#include <iostream>
#include <vector>

using namespace std;

void subtract_money(double& money, double price){ //subtracts money using a reference variable 
    money -= price;
}

int main(){
    vector<string> available_items = {"eraser", "pencil", "pen", "sharpie", "highlighter", "marker", "stapler", "paper"}; //stores the items available for sale
    vector<double> prices = {1.25, .56, 1.56, 2.31, 3.21, 2.75, 5.45, 2.35}; //stores the prices of the items
    cout << "Enter how much money you have: "; //prompts user
    double cash; cin >> cash; //reads how much money the user has
    if(!cin){
    cout<<"Sorry, but the value you entered for the amount of money you have is invalid.\n";
    return 0;
    }
    cout << "Enter the item you wish to buy: ";
    string item; cin >> item;
    if(!cin){
    cout<<"Invalid input!\n";
    return 0;
    }
    double item_price;
    bool item_found = false; //flag for storing whether or not the item the user wants is valid
    for(int i = 0; i < available_items.size(); i++){ //checks to make sure the item the user wants is available in the shop (searches through the list for the item)
        if(item == available_items.at(i)) { //if item is found
            item_found = true;
            item_price = prices.at(i); //the item's price is stored
            break;
        }
    }
    if(item_found) { //if item entered is valid
        cout << "You have bought " << item << " for " << item_price << " dollars. ";
        subtract_money(cash, item_price); //call by reference
        cout << "Now you have " << cash << " dollars left\n";
    } else cout << "Sorry, we do not have " << item << " here!\n";
}
