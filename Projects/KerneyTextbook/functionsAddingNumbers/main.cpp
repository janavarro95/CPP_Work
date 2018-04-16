#include <iostream>
using namespace std;

class measure{

    public:
        int length=0;
        int width=0;
        int height=0;
        int area(){
            return length*width;
        }
        int volume(){
            return length*width*height;
        }
};
int main() {
        cout << "Please input an integer for length, width, and height (in that order) to get the area and volume of a rectangular shaped object." << endl;
        measure pool;
        cin>>pool.length;
	if(!cin){
	    cout<<"Invalid input!"<<endl;
	    return 0;
	}
        cin>>pool.width;
        if(!cin){
            cout<<"Invalid input!"<<endl;
            return 0;
        }
	cin>>pool.height;
	if(!cin){
            cout<<"Invalid input!"<<endl;
            return 0;
        }
	cout <<"The area is: "<<pool.area() << endl;
        cout <<"The volume is: "<<pool.volume() << endl;
}
