#include <iostream>
#include <stack>  // You need to do this in order to use a stack.

using namespace std;

int main() {
    // What are stacks? Stacks are sometimes referred to as dumbed-down vectors.
    // A stack is analgous to a stack of plates.
    // The last plate you add to the stack is the first plate that comes out when you want to
    // retrieve things.
    // The first plate that you add to the stack is the last plate that comes out when you want to
    // retrieve things.
    // In other words, "Last in, first out!"
    // Let's check out a stack:
    stack<int> my_stack;
    for (int i = 0; i < 10; i++) {
        my_stack.push(i);  // Adding items on top of the stack with `.push()`.
    }
    int first_to_come_out = my_stack.top();  // `.top()` returns a copy of the last item added.
    my_stack.pop();  // `.pop()` actually removes the last item added.
    cout << first_to_come_out << endl;  // What will `first_to_come_out` be?
    // It should be 9, which was the last item added to the stack.
    // If we keep doing `.pop()`, eventually we'll be left with the first item, and then nothing.
    // Let's try doing `.pop()` one more time.
    int second_to_come_out = my_stack.top();
    my_stack.pop();
    cout << second_to_come_out << endl;  // What will this be?
    // It should be 8. See the pattern?
    return 0;
}

