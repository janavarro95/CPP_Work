#include <iostream>
#include <string>

using namespace std;

int main() {
    
    //Always in the form: (type) (name) = (value);
    
    int wholeNum = 42;
    double decimal = 3.14;
    char singleCharacter = 'v'; //notice single quotes ' '
    string stringOfSeveralCharacters = "hello world"; //notice double quotes " "
    bool TorF = true; //the keywords true or false may be used or 1's (true) and 0's (false)
    
    //After creation, variables will be referred to only by name (i.e. don't include the type)
    cout << wholeNum << endl
         << decimal << endl
         << singleCharacter << endl
         << stringOfSeveralCharacters << endl
         << TorF << endl;
    //Notice that the print statement can be written more cleanly on several lines because C++ doesn't care about whitespace.
    
    //WRONG: cout << int wholeNum << endl;
    //                ^
}

