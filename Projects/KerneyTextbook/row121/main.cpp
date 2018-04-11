#include <iostream>

using namespace std;

void swap_file(int& first_number, int& second_number);

int main()
{
  int a = 0, b = 0;
 
  cout << "Enter a number: ";
  cin >> a;
  if(!cin){
      cout<<"Invalid input!"<<endl;
      return 0;
  }
  cout << "Enter another number: ";
  cin >> b;
  if(!cin){
      cout<<"Invalid input!"<<endl;
      return 0;
  }
  cout << "\nYou entered " << a << ", " << b << ".\n";
  swap_file(a, b);
  cout << "After calling our swap function, their order is now " << a << ", " << b << "."<<endl;
}


void swap_file(int& first_number, int& second_number)
{
	int temp = first_number;
	first_number = second_number;
	second_number = temp;
}

