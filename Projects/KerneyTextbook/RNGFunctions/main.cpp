#include <iostream>

void countRecursive(int);
int factorial(int);

using namespace std;

int main()
{
    int x;
    x =11;
    cout << "this is what a factorial looks like: x!\nthe way they work is you multiply the numbers from x to 1\nso ";
    cout << x << "! means ";
    countRecursive(x);
    cout << " which equals " << factorial(x);
    
 
 return 0;           
}
    
void countRecursive (int num)
{
    if(num == 1)
    {
        cout << num;
        return;
    }
    else
    {
        cout << num << " * ";
        countRecursive(num-1);
    }
}

int factorial(int num)
{
    if(num == 1)
        return 1;
    else
        return (num*factorial(num-1));
}
