#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    vector<string> info;
    ifstream input("test.txt");
    if(input.is_open()){
        cout << "file is open!\n";
    } else {
        cout << "file not found!\n";
        exit(0);
    }
    while(input){
        string temp;
        input >> temp;
        info.push_back(temp);
    }
    for(int i = 0; i < info.size(); i++) cout << info.at(i) << endl;
}
