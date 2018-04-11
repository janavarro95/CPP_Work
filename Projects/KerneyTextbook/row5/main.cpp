//Making a 2d map for a game for array practice...

#include <iostream>

using namespace std;

const int WIDTH = 10, HEIGHT = 10; //dimensions of the map
char map[WIDTH][HEIGHT]; //2d array of map

/*function init() initializes all possible spots of the map to a '.' (dot). This is done by iterating over every element of the map array and setting each value to a '.', although the programmer can set each space to anything that's a character, ie a space*/
void init() {
      for(int i = 0; i < WIDTH; i++) {
            for(int j = 0; j < HEIGHT; j++) {
                  map[j][i] = '.';
            }
      }
}

/*function draw() prints out the current state of this map, which is done by iterating over the map array and printing each element. Note that this function prints the elements in the first row and then moved to the next row and etc*/
void draw() {
      for(int i = 0; i < WIDTH; i++) { //number of columns
            for(int j = 0; j < HEIGHT; j++) { //number of rows
                   cout << map[j][i]; 
            }
            cout << " \n";
      }
}

int main() {
       //function calls
      init();
      draw();
      /*further tasks include using a char to represent a player and making the 
      player move and updating the map after every step*/
}
