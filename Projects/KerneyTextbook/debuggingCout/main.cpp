//Why will the following code not work?

#include <iostream>

int main() {
    cout >> "Hello, World!" >> endl;
    return 0;
}
/*
a. The `cout` double-arrows are pointing the wrong way.
b. The lines should be ended with commas, not semicolons.
c. There's no `using namespace std`.
d. `int main()` should be `void main()` and there should be no `return` statement.
e. Both a and c.
*/
