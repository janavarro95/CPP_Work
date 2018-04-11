#include <iostream>
#include <fstream> //include this

using namespace std;

//This program assumes the existence of a text file in the same folder called "text.txt"

int main() {
    //ifstream ("inputfilestream"): used for reading
    ifstream inputfile; //inputfile represents the file from which to input
    inputfile.open("text.txt"); //stores the data of text.txt in inputfile
    int n1 = 0, n2 = 0;

    inputfile >> n1 >> n2; //use the >> operator to read from the file (think cin >> ...) and assign the first line's value to n1 and the second line's to n2
    cout << n1 << endl << n2 << endl;
    inputfile.close(); //good practice: close the file when you're done using it

    //ofstream ("outputfilestream"): used for writing
    ofstream outputfile;
    outputfile.open("text.txt", ios::app); //ios::app means "app"end to the file, other options exist such as ios::beg to start writing at the beginning
    outputfile << "hello\n world\n"; //use << operator to write (think cout << ...)
    outputfile.close(); //good practice: close the file when you're done using it
}

