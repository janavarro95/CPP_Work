#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <unistd.h>
#include <vector>

using namespace std;


void quit() {   					 // Default message if user quits
    cout << "Avast, ye swab! Ye be a scurvy quitter!\n\n";
    exit(EXIT_FAILURE);
}

void die() {   					 // Player killed by skeleton
    cout << "Ye be killed by a skeleton.  Dead men tell no tales.\n\n";
    exit(EXIT_FAILURE);
}

void win() {   					 // Player wins
    cout << "Yaaarrrrr! You found all the treasure and avoided Blackbeard's lieutenants!  YOU WIN!\n\n";
    exit(EXIT_SUCCESS);
}

void clipping() {   				 // Player clipping (leaving boundaries)
    cout << "Avast, ye swab! Ye were warned about boundaries! Thar be no clipping allowed here!\n\n";
    exit(EXIT_FAILURE);
}

void nearby() {   					 // Warning generated when player is one move away from a skeleton
    cout << "Caution, matey!  Thar be a skeleton nearby!\n";
}

int main() {

    srand(time(0));    			 // seeds the rand function

    int x = (rand() % 10) + 1, y = (rand() % 10) + 1; 	 // initializes your number of moves to zero
    // and drops you at a random x, y coordinate

    int trea1_x = (rand() % 10) + 1, trea1_y = (rand() % 10) + 1; // initializes and randomizes the locations
    int trea2_x = (rand() % 10) + 1, trea2_y = (rand() % 10) + 1; // of all four treasures when the game starts
    int trea3_x = (rand() % 10) + 1, trea3_y = (rand() % 10) + 1;
    int trea4_x = (rand() % 10) + 1, trea4_y = (rand() % 10) + 1;

    int skel1_x = (rand() % 10) + 1, skel1_y = (rand() % 10) + 1; // intializes and randomizes the locations
    int skel2_x = (rand() % 10) + 1, skel2_y = (rand() % 10) + 1; // of Blackbeard's skeletal lieutenants
    int skel3_x = (rand() % 10) + 1, skel3_y = (rand() % 10) + 1; //when the game starts
    int skel4_x = (rand() % 10) + 1, skel4_y = (rand() % 10) + 1;

    int numOfTrea = 4; // sets the initial number of treasures to 4

    bool t1unfound = true;  // initializes all four treasure
    bool t2unfound = true;  // as unfound.  Value changes to
    bool t3unfound = true;  // false once they are found so
    bool t4unfound = true;  // cannot be looted more than once

    vector<int> vec_x;   	 // tracks x coord
    vector<int> vec_y;   	 // tracks y coord
    vector<char> vec_m;   	 // tracks directional moves

    cout << "\nWelcome, matey, to BLACKBEARD'S COVE!\n\n";   		 // wordy intro
    cout << "Ye be standing in a random spot in a 10x10 cave.\n";
    cout << "Thar be loot to pilfer but be warned, matey...\n";
    cout << "Four of Blackbeard's skeletal lieutenants be here with ye.\n";
    cout << "Step into one of their spaces and it be down Davy Jones locker with ye!\n\n";
    cout << "Find all four chests wihout bumping into a skeleton and ye be a WINNARRRRRRRR!\n\n";
    cout << "Move N, S, E, or W. Press B to review yer moves or H for further instructions.\n";
    cout << "Enter any other key to be a quittin' scallywag.\n";
    cout << "Mind yer coordinates.  If ye attempt to move below one or above ten, ye'll get the boot!\n\n";


    while (true) {   					 // starts the games and prompts user to move
   	 char m = ' ';
   	 cout << "Ye be at " << x << ", " << y << endl; // displays current coordinates

   	 vec_x.push_back(x);   			 // stores x coord movement in vector
   	 vec_y.push_back(y);   			 // stores y coord movement in vector

   	 cout << "Make yer move, matey: ";
   	 cin >> m;
   	 m = toupper(m);   				 // uppercasifies user input

   	 if (m == 'N' || m == 'S' || m == 'E' || m == 'W') {
   		 vec_m.push_back(m);   		 // stores N, S, E, & W choices in vector
   	 }

   	 if (m == 'N') y++;   			 // moves 1 space up
   	 else if (m == 'S') y--;   		 // moves 1 space down
   	 else if (m == 'E') x++;   		 // moves 1 space to the right
   	 else if (m == 'W') x--;   		 // moves 1 space to the left
   	 else if (m == 'H') {   		 // displays expanded help menu
   		 cout << "1) This be an open map, not a maze, matey.\n";
   		 cout << "2) You have an unlimited number of moves.\n";
   		 cout << "3) If you come within one move of a skeleton, ye'll get a warning that thar be one near ye!\n";
   		 cout << "4) If ye really need it, ye can enter L to reveal the locations of all skeletons and treasure.\n";
   	 } else if (m == 'L') {   		 // displays positions of treasures and skeletons
   		 cout << "Ye be cheatin, but here ya go:\n\n";
   		 cout << "skeleton 1: " << skel1_x << ", " << skel1_y << endl;
   		 cout << "skeleton 2: " << skel2_x << ", " << skel2_y << endl;
   		 cout << "skeleton 3: " << skel3_x << ", " << skel3_y << endl;
   		 cout << "skeleton 4: " << skel4_x << ", " << skel4_y << endl << endl;
   		 cout << "treasure 1: " << trea1_x << ", " << trea1_y << endl;
   		 cout << "treasure 2: " << trea2_x << ", " << trea2_y << endl;
   		 cout << "treasure 3: " << trea3_x << ", " << trea3_y << endl;
   		 cout << "treasure 4: " << trea4_x << ", " << trea4_y << endl << endl;
   	 }    else if (m == 'B') {   	 // choice to enable vector output
   		 if (vec_m.size()  == 0) {    // displays message if user has not moved yet
   			 cout << "Ye haven't gone anywhere yet.\n";
   		 } else {   				 // outputs directional choices and former positions
   			 cout << "Ye have made " << vec_m.size() << " moves.  Not too adventureous but at least yer not dead.  Yet.\n";
   			 for (unsigned int i = 0; i < vec_m.size(); i++) {
   				 cout << "Move " << i << " was " << vec_m.at(i) << " from " << vec_x.at(i) << ", " << vec_y.at(i) << endl;
   			 }
   		 }
   	 }

   	 else {   						 // quits if user enters anything other than N, S, E, W, H, B, or L
   		 quit();
   	 }

   	 if (x < 1 || x > 10 || y < 1 || y > 10) {     // kicks the user for clipping (moving through walls) if their
   		 clipping();   							 // x or y coords go below 1 or above 10
   	 }

   	 if (x == trea1_x && y == trea1_y && t1unfound == false) { // checks to see if treasure 1 is looted
   		 cout << "Ye already looted that treasure, ya scurvy dog." << endl;
   	 }

   	 if (x == trea1_x && y == trea1_y && t1unfound == true) {  // awards treasure 1
   		 numOfTrea--;
   		 cout << "Ye found one of the treasures! " << 4 - numOfTrea << " down and " << numOfTrea << " to go!\n";
   		 t1unfound = false;   								   // changes treasure 1 to looted
   	 }

   	 if (x == trea2_x && y == trea2_y && t2unfound == false) { // checks to see if treasure 2 is looted
   		 cout << "Ye already looted that treasure, ya scurvy dog." << endl;
   	 }

   	 if (x == trea2_x && y == trea2_y && t2unfound == true) {  // awards treasure 2
   		 numOfTrea--;
   		 cout << "Ye found one of the treasures! " << 4 - numOfTrea << " down and " << numOfTrea << " to go!\n";
   		 t2unfound = false;   								   // changes treasure 2 to looted
   	 }

   	 if (x == trea3_x && y == trea3_y && t3unfound == false) { // checks to see if treasure 3 is looted
   		 cout << "Ye already looted that treasure, ya scurvy dog." << endl;
   	 }

   	 if (x == trea3_x && y == trea3_y && t3unfound == true) {  // awards treasure 3
   		 numOfTrea--;
   		 cout << "Ye found one of the treasures! " << 4 - numOfTrea << " down and " << numOfTrea << " to go!\n";
   		 t3unfound = false;   								   // changes treasure 3 to looted
   	 }
   	 if (x == trea4_x && y == trea4_y && t4unfound == false) { // checks to see if treasure 4 is looted
   		 cout << "Ye already looted that treasure, ya scurvy dog." << endl;
   	 }

   	 if (x == trea4_x && y == trea4_y && t4unfound == true) {  // awards treasure 4
   		 numOfTrea--;
   		 cout << "Ye found one of the treasures! " << 4 - numOfTrea << " down and " << numOfTrea << " to go!\n";
   		 t4unfound = false;   								   // changes treasure 4 to looted
   	 }

   	 if (x == skel1_x && y == skel1_y) {
   		 die();   			   // death by skeleton 1

   	 }

   	 if (x == skel2_x && y == skel2_y) {
   		 die();              	// death by skeleton 2

   	 }
   	 if (x == skel3_x && y == skel3_y) {
   		 die();              	// death by skeleton 3

   	 }
   	 if (x == skel4_x && y == skel4_y) {
   		 die();              	// death by skeleton 4

   	 }

   	 if (x == skel1_x && (y == skel1_y + 1 || y == skel1_y - 1)) { // proximity warnings
   		 nearby();
   	 }

   	 if (y == skel1_y && (x == skel1_x + 1 || x == skel1_x - 1)) {
   		 nearby();
   	 }

   	 if ((x == skel1_x + 1 || x == skel1_x - 1) && y == skel1_y) {
   		 nearby();
   	 }

   	 if ((y == skel1_y + 1 || y == skel1_y - 1) && x == skel1_x) {
   		 nearby();
   	 }

   	 if ((x == skel2_x + 1 || x == skel2_x - 1) && y == skel2_y) {
   		 nearby();
   	 }

   	 if ((y == skel2_y + 1 || y == skel2_y - 1) && x == skel2_x) {
   		 nearby();
   	 }

   	 if ((x == skel3_x + 1 || x == skel3_x - 1) && y == skel3_y) {
   		 nearby();
   	 }

   	 if ((y == skel3_y + 1 || y == skel3_y - 1) && x == skel3_x) {
   		 nearby();
   	 }
   	 if ((x == skel4_x + 1 || x == skel4_x - 1) && y == skel4_y) {
   		 nearby();
   	 }

   	 if ((y == skel4_y + 1 || y == skel4_y - 1) && x == skel4_x) {
   		 nearby();

   	 }

   	 if (numOfTrea == 0) {    // When number of treasures left = 0, player wins
   		 win();

   	 }
    }
}


