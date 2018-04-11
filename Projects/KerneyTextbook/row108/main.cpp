#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream myFile;
    
    myFile.open("filename.txt");
    
    if(!myFile)
        cout << "Error in opening file";
    else {
        cout<<"Opened the file!"<<endl;
        //Do something with the file now that it is open.
    }        
    myFile.close();
    
    return 0;
}
