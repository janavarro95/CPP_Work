#include <iostream>

using namespace std;

class Point {
    public:
    double x = 0;
    double y = 0;
    
    //Default constructor--this is usually assumed by the compiler    
    Point() {
        
    }
    //Overloaded constructor (i.e. same function name, but different parameters)
    Point(double xCoor, double yCoor) {
        x = xCoor;
        y = yCoor;
    }
    
    //Class's functions (sometimes called methods)
    void set(double xCoor, double yCoor) {
        x = xCoor;
        y = yCoor;
    }
}; //REMEMBER THIS SEMICOLON

int main() {
    //Now we can make variables of type "Point"
    Point pt1;
    Point pt2(1,2);
    cout << "Point 1: (" << pt1.x << "," << pt1.y << ")\n";
    cout << "Point 2: (" << pt2.x << "," << pt2.y << ")\n";
}

