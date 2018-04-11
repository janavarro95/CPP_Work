#include <iostream>

int CBVadd(int,int);
int CBRadd(int&,int&);

using namespace std;

int main()
{
    int a = 10, b = 20;
    cout << "a = " << a << " b = " << b << endl;
    cout << "This is what happens when you do the operation a = a + ab using call by value: "<< CBVadd(a,b) << endl;
    cout << "And the value of a after the function call is: " << a << endl;
    cout << "Here is what the same operation using call by reference: " << CBRadd(a,b) << endl;
    cout << "And the value of a after the function call is: " << a << endl;
    
}
int CBVadd(int a,int b)
{
    a = a+a*b;
    return a;
}

int CBRadd(int &a, int &b)
{
    a = a+a*b;
    return(a);   
}
