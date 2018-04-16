#include <iostream>
#include <climits> //For INT_MAX

using namespace std;

int main() {
    //You may notice that cin's may interfere with each other
    //Try to enter three words into the first input (e.g. something like "foo bar baz")
    /*
    string s1, s2, s3;
    cout << "\nPlease enter three phrases.\nThe first:\n\t";
    cin >> s1;
    cout << "The second:\n\t";
    cin >> s2;
    cout << "And the third:\n\t";
    cin >> s3;
    cout << "Here they are:\n\n" << s1 << endl << s2 << endl << s3 << endl << endl;
    */
    /*
     What happened? It seemed that cin "saved" the three words and didn't ask for any more.
     * It can make read-ins somewhat troublesome. There are two common cases:
     * 1)   You intended the phrase "foo bar baz" to just take the first word "foo"
     *   or
     * 2)   You intended to take the phrase as a whole
     *
     * For the first case, use cin.ignore(INT_MAX, '\n') after your intended cin.
     * (i.e. ask "cin" to "ignore" everything ("INT_MAX", a really big number) before the newline ('\n'))
     * 
     * For the second case, use getline(cin, variableName)
     * (i.e. "get" a "line" from "cin" and put it into the variable called "variableName")
     */
    
/*    
    //Try this, instead! (Comment the others out)
    string s1, s2, s3;
    cout << "\nPlease enter three phrases.\nThe first:\n\t";
    cin >> s1;
    cin.ignore(INT_MAX, '\n');
    cout << "The second:\n\t";
    cin >> s2;
    cin.ignore(INT_MAX, '\n');
    cout << "And the third:\n\t";
    cin >> s3;
    cin.ignore(INT_MAX, '\n');
    cout << "Here they are:\n\n" << s1 << endl << s2 << endl << s3 << endl << endl;
  */  
    
    //Or this! (Comment the others out)
    string s1, s2, s3;
    cout << "\nPlease enter three phrases.\nThe first:\n\t";
    getline(cin, s1);
    cout << "The second:\n\t";
    getline(cin, s2);
    cout << "And the third:\n\t";
    getline(cin, s3);
    cout << "Here they are:\n\n" << s1 << endl << s2 << endl << s3 << endl << endl;
    
}

