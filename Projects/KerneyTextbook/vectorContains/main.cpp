#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream output("test.txt"); //creates a txt file called "test"
    output << "hello!"; //writes the word hello! to the file
}

