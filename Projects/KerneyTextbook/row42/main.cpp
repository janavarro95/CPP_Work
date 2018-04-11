#include <iostream>

using namespace std;

int main() {
        /* 
         * DIRECTIONS: Grab some physical paper (or MS paint if you fancy) and draw a flowchart
         * of the following if-statement that represents every possible outcome.
         * 
         * Then, using the given booleans, determine which pieces of code actually run,
         * and draw a line from the beginning of the tree to the eventual outcome.
         *
         * What is the final value of counter?
         *
         * EXAMPLE FLOWCHART:
         * ........................................................
         * int counter = 0;
         * bool grassIsRed = false, skyIsGreen = false;
         * if(grassIsRed)
         *                 counter++;
         * else {
         *                 if(skyIsGreen)
         *                         counter += 2;        
         *                 else
         *                         counter--;
         * }
         *
         * ........................................................
         *
         *                          counter = 0;
         *                                   |
         *                                   |
         *         ----Is grassIsRed true?----
         *         |                                              |        
         *         Yes                                                  No
         *         |                                                  |
         *         Add 1          ----Is skyIsGreen true?----
         *                        |                         |
         *                 Yes                       No
         *                 |                         |
         *                 Add 2                     Subtract 1
         * 
         */

        bool gravityExists = true, moonIsCheese = false, santaExists = false, fooBarBaz = true;
        int counter = 0;
        
        if(!gravityExists)
                counter = 0;
        else if(moonIsCheese && fooBarBaz)
                counter = 10;
        else if(!(!gravityExists || santaExists) || moonIsCheese) {
                counter++;
                if(santaExists)
                        counter++;
        } else if(fooBarBaz)
                if(moonIsCheese)
                        counter = 100;
                else
                        counter = 25;
        else
                counter = -1;
        cout << counter << endl; 

}

