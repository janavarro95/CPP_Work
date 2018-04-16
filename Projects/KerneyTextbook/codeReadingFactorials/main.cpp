#include <iostream>

using namespace std;

int factorial(int integer) {
    // What happens if a function calls itself, over and over?
    // In most cases, that'll probably just mean an eternal loop.
    // But with recursion, what happens is that we have a "base condition".
    // As we continue to run the function, we head towards that base condition.
    // An excellent example is the "factorial" in mathematics, which does this:
    // Given a number, multiples it by all the numbers before it down to 1.
    // We use N! as the notation, where N is the number. Let's see an example.
    // 5! = 5 x 4 x 3 x 2 x 1
    // 3! = 3 x 2 x 1
    // 6! = 6 x 5 x 4 x 3 x 2 x 1
    // N! can also be N x (N - 1)!
    // 5! = 5 x 4! = 5 x 4 x 3 x 2 x 1
    // 3! = 3 x 2! = 4 x 3 x 2 x 1
    // 6! = 6 x 5! = 6 x 5 x 4 x 3 x 2 x 1
    // Note that factorials can only be done on integers >= 1.
    // See the pattern? Let's see how this ties into recursion.
    if (integer < 1) {
        cout << "ERROR: Cannot do factorial of integer below 1." << endl;
    }
    if (integer == 1) {
        return 1;
    } else {
        return integer * factorial(integer - 1);
    }
    // When we call the above code with an integer, let's say 5, we'll get a result via recursion.
    // The first `if` statement simply checks to ensure we're doing a valid mathematical factorial.
    // The next `if` statement will check if we're at the base condition. We're starting at 5, so
    // we're not there yet.
    // The `else` statement will actually perform the recursion.
    // Here's a good way to think about what's going on here:
    // We're doing 5 x 4!, but in order to find 4!, we have to call the function again.
    // That will yeild us 4 x 3!. So now we have 5 x 4 x 3!. But we need to find 3! now.
    // Calling the function again will get us 3 x 2! for 3!. Now we have 5 x 4 x 3 x 2!.
    // 2! is simply 2 x 1!. Now we have 5 x 4 x 3 x 2 x 1!. And 1! is what? It's just 1.
    // So we end up with: 5 x 4 x 3 x 2 x 1. That's it!
}

int main() {
    // What will the output of this code be?
    int result = factorial(5);
    cout << result << endl;
    // It should be 120.
    return 0;
}

