#include <iostream>
#include <string>
using namespace std;

class student           
{
    public:             
        string name;
        int id;
};

int main()
{
    student a;          
    student b;
    a.name = "Bill";
    a.id = 114;
    b.name = "Andrew";
    b.id = 137;
    
    cout << "Student Name\t" << "Student Id" << endl;
    cout << a.name << "\t\t" << a.id << endl;
    cout << b.name << "\t\t" << b.id << endl;
    
    return 0;
}
