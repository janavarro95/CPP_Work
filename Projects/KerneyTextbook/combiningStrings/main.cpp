//What will the code print?

#include <iostream>
#include <vector>

using namespace std;

class Fruits {
    private:
        vector<string> f_names = {"banana", "apple", "pear", "berry"};
        int n_fruits;
    public:
        Fruits(){
            n_fruits = 0;
        }
        Fruits(int n_banana, int n_apple, int n_pear, int n_berry){
            n_fruits = n_banana + n_apple + n_pear + n_berry;
        }
        
        int getNumFruits(){
            return n_fruits;
        }
        
};

int main(){
    Fruits fruits(5,6,7,8);
    cout << fruits.getNumFruits();
}
