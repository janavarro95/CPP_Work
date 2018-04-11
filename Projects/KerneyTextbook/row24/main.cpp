#include <iostream>

using namespace std;

int main() {
    /* This is a `cout` statement. It lets us print things to the screen.
    Notice the 2 double-left arrows. Those are required.
    In between two pairs of those double-left arrows is the value we want to print out.
    At the end, we have an `endl`, which is basically moving the cursor down a line, kinda like
    pressing `Enter` in a word processor. */
    cout << "Hello World!" << endl;  // Output: Hello World!
    /* We can concatenate values together, which basically means smashing them end-to-end.
    We'll do this by putting another double-left arrow between the two values we wish to
    concatenate. */
    cout << "Hello " << "World!" << endl;  // Output: Hello World!
    /* We can do the same thing with variables. For example... */
    string x = "Hello ";
    string y = "World";
    cout << x << y << "!" << endl;  // Output: Hello World!
    /* We can do the same with numbers! */
    int a = 1;
    float b = 3.1415;
    cout << a << " " << b << endl;  // Output: 1 3.1415
    /* In all these examples, we've injected spaces into the values. What if we omitted them? */
    cout << "Hello" << "World!" << endl;  // Output: HelloWorld!
    /* What if we put a bunch of `endl`s? */
    cout << "Hello" << endl << "World" << endl << "!" << endl;
    /*
    Output (for above):
    Hello
    World
    !
    */
    /* What if we want quotes in quotes? Use backslashes!
    Backslashes allow us to "escape" the quotes, basically telling the compiler that we mean for
    the quotes to be an actual PART of the string. */
    cout << "\"Hello World!\"" << endl;  // Output: "Hello World!"
    return 0;
}

