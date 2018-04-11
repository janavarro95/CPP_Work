#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//function prototypes
void largerThanN(int [], const int, int);
void popArray(int[], const int);
void endProgram();

const int        SIZE = 10,                        //size of array
                MIN_VALUE = 1,                        //min rand value
                MAX_VALUE = 100;                //max rand value

int main()
{
  int                n;                                //int var
  
  int                 array[SIZE];                        //int array
  
  unsigned         seed = time(0);                        //get system time
  
  srand(seed);                                        //seeds rng
  
  //displays program name 
  cout << "                   " << endl
       << "*******************" << endl
       << "*  Larger Than N  *" << endl
       << "*******************" << endl;
  
  //sets n to a random number between 1 and 100
  n = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
  
  //calls the popArray function and sends array and size as arguments
  popArray(array, SIZE);
 
  //calls the largerThanN function and send array, size, and n as arguments
  largerThanN(array, SIZE, n);
  
  return 0;
}

/*********************************************************************************
 * This function has no return and has the parameters of int, const int. It will *
 * give random numbers to each element of the array between 1 and 100.           *
 *********************************************************************************/
void popArray(int array[], const int SIZE)
{
  for(int i = 0; i < SIZE; i++)
    array[i] = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
}
/*********************************************************************************
 * This function has no return and has the parameters of int, const int, and int *
 * it will display all of the numbers in the array that are greater than n.      *
 *********************************************************************************/
void largerThanN(int array[], const int SIZE, int n)
{
  //go through each element of the array and determines which are larger than n
  for(int i = 0; i < SIZE; i++)
  {
      if(array[i] > n)
      {
        //displays all numbers in the array greater than n
        cout << array[i] << " ";
      }
  }
    //line return for formatting
    cout << endl;
}
