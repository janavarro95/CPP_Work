#include <iostream>
using namespace std;
class age {

    public:
        int age = 0;
        int months(){
            return age * 12;
        }
        int weeks(){
            return age*52;
        }
        int days() {
            return age *365;
        }
};

int main() {
  age count;
   cout << "How old are you?" << endl;
   cin >> count.age;
   if(!cin){
   	cout<<"Invalid input!"<<endl;
	return 0;
   }
   cout << "You are " << count.months() << " months old." << endl;
   cout << "You are " << count.weeks() << " weeks old." << endl; 
   cout << "You are " << count.days() << " days old." <<endl;

}
