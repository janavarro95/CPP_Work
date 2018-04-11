#include <iostream>

using namespace std;

int main() {
    // Sometimes in programming, we want to do something only if a certain condition is met.
    // That's why we have the `if` statement.
    // Observe.
    bool hello = true;
    if (hello) {
        cout << "Hello, World!" << endl;
    }
    // Since the bool `hello` is true, the if-statement executes.
    // Will this code execute?
    int a = 1;
    if (a == 0) {  // Note the double-equal sign, which is used for comparison instead of assignment.
        cout << "Hello, World!" << endl;
    }
    // No, it won't! Since `a` doesn't equal 0, the code doesn't execute.
    // We can chain conditions together using `&&` and `||`, which represent `and` and `or` respectively.
    // Observe.
    int b = 2;
    bool c = true;
    if (b == 2 && c) {
        cout << "Hello, World!" << endl;
    }
    // The code above will run since both conditions are true, `b == 2` and `c` is `true`.
    // What about this one?
    int d = 12;
    bool e = false;
    if (d == 12 || e) {
        cout << "Hello, World!" << endl;
    }
    // The above code will indeed run. When it comes to `||` (or), the only thing that matters is
    // that at least one of the conditions is true. If so, then it runs.
    // It logically follows that if all of the conditions are true, then it will still run, since
    // `||` only requires that one condition is true.
    // This is different than the "exclusive or" used in English, where it's "either this or that".
    // Observe.
    int f = 10;
    bool g = false;
    bool h = false;
    if (g || h || f == 10) {
        cout << "Hello, World!" << endl;
    }
    // The above code will run, since one of the conditions is true.
    return 0;
}

