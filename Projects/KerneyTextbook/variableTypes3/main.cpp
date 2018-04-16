
/*
Your best friend, Bob, dreams of becoming a professional programmer. However, he has trouble when
it comes to looping over vectors. In the following code, Bob intends to double each value inside a
vector.
*/
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main(){
vector<int> vec;
vec.push_back(1);
vec.push_back(2);
vec.push_back(3);
for (int i : vec) {
    //vec.at(i) *= 2;
    i*=2;
    cout << i << endl;
}


//Bob even adds in a `cout` statement to "prove" that he doubled the value! Yet somehow the values
//inside the vector haven't actually changed! This is demonstrated in another for-loop directly after
//the one shown above:

for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << endl;
}
return 0;
}
/*
The output of this for-loop is:
1
2
3
...rather than:
2
4
6
...which is what Bob wants!

-------------------------------------------

What in the world is going on here?

a. In the first for-loop, Bob should've done `i = i * 2` instead of `i *= 2`.
b. The second for-loop is the one at fault -- it's printing all the indices of the vector, but not
   the actual contents. The correct way would be to do `cout << i << endl;` instead of the
   `cout << vec.at(i) << endl;` that is shown.
c. The first loop isn't actually changing the value inside of the vector. It reads the value and
   copies it into the placeholder variable `i` and doubles it, but leaves the actual value inside
   the vector unchanged. He should've done something like `vec.at(index) *= 2` for each index. That
   would've correctly changed the actual values in the vector.
d. This is a trick question. The first for-loop should've doubled all the values correctly.
e. None of the above.
*/
