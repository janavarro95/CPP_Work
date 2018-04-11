#include <iostream>
using namespace std;

class Player{
public:
  int health;
  int y_axis;
  int x_axis;
};

int main(){
  Player player1;
  player1.health = 100;
  player1.x_axis = 10;
  player1.y_axis = -5;
  cout << "Player health is: " << player1.health << ".\nPlayer coordinates are: (" << player1.x_axis << "," << player1.y_axis << ").\n";
}



