#include <iostream>

using namespace std;

int main() {
    string input1, input2, input3;
    int i = 3;
    
    /* Standard output (cout)
     * Form:
     *      cout << (value);
     *           ^ notice direction (arrows point with the flow of information
     *             i.e. value's information is put to standard output)
     * Multiple things can be adjoined in a single statement
     *      cout << (value1) << (value2) << ... << (valueN) << endl;
     * The newline character '\n' can be used instead of endl
     * The tab character '\t' can be used for formatting
     * Any expressions will be evaluated and printed, not printed literally (unless "" is used)
     */
    cout << "Speak your mind.\n";
    cout << "Speak\t" << "your\t" << " mind.\n";
    cout << "Speak your mind " << i << " times." << endl;
    cout << "Speak your mind " << i + (2*i - i) * 0 << " times." << endl;
    
    /* Standard input (cin)
     * Form:
     *      cin >> (variable);
     *           ^ notice direction (arrows still point with the flow of information
     *             i.e. standard input's information is entered into variable)
     * Many inputs can be done in a row
     *      cin >> var1 >> var2 >> ... >> varN;
     *      //is equivalent to:
     *      cin >> var1;
     *      cin >> var2;
     *      //...
     *      cin >> varN;
     * NOTICE: cin only takes in all characters before the first instance of whitespace (i.e. cin takes in one "word" at a time).
     *         So, cin sees "foo bar baz" as three inputs, not one. 
     */
    cin >> input1 >> input2 >> input3; //Takes in three inputs...
    
    cout << endl << input1 << endl << input2 << endl << input3 << endl; //... and spits them back out.    
}

