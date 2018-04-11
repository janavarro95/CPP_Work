#include <iostream>

void menu();

using namespace std;

int main()
{
    int choice=1;
    do
    {
        menu();
        cin >> choice;//<- doesn't work in online console :(
        switch(choice)
        {
            case 1:
                cout << "Hello\n";
                break;
            case 2:
                cout << "Bill\n";
                break;
            case 3:
                cout << "Goodbye\n";
                break;
            default:
                choice = 4;
                break;
        }
        //choice++;
    }while(choice != 4);
        
    
    return 0;
}

void menu()
{
    cout << "Menu:\n" << endl;
    cout << "1. Print: Hello" << endl;
    cout << "2. Print: Bill" << endl;
    cout << "3. Print: Goodbye" << endl;
    cout << "4. Quit" << endl<<endl;
}
