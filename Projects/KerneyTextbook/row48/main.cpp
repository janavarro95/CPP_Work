#include <iostream>
#include <stdlib.h>
using namespace std;

void doCoolStuff() {
    //Don't worry about this ;)
}

int main() {
    //These two loops do the same thing. Neato!
    int whileCounter = 0;
    while(whileCounter < 10) {
        cout << whileCounter;
        whileCounter++;
    }
    cout << endl;
    for(int forCounter = 0; forCounter < 10; forCounter++)
        cout << forCounter;
    
    //Which seems better to you? For this kind of thing, a for-loop is generally preferred
    cout << endl << endl;
    //So where might a while loop be used?
    bool isBorked = false;
    int i = 0;
    while(!isBorked) {
        doCoolStuff();
        doCoolStuff();
        //...
        i = rand() % 10;
        cout << i << endl;
        if(i > 8) //This could be some definition of a broken state that gets checked each loop
            isBorked = true;
    }
    //Runs as long as (pseudo-) random number generator (between 1 and 10) is less than or equal to 8
}

