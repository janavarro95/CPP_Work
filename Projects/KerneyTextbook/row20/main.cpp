#include <iostream>

using namespace std;

/*
Below, we've declared a function.
- Note that functions must be declared ABOVE the `main` function.

There are several components to a function:

- First off, we have to declare the datatype that it returns.
  In this case, we've declared it as a `float`.
- Second, we need to name the function. It's good practice to have clear and concise naming.
  The name of this function is `decimal_to_percentage`, which is clear and concise.
- Third, we need to indicate if the function takes any inputs. We call these inputs "parameters".
  In this case, we have one parameter called `decimal`, which is a float. The parameters are put
  directly after the function's name in parentheses, with commas to distinguish multiple parameters
  if we want the function to take in multiple things.
  -- Note that the actual value we pass into the parameter `decimal` is called an "argument". So if
     we passed 0.3675 into the function when we called it, 0.3675 would be the argument passed into
     the parameter `decimal`.
- Fourth, note that functions are contained within braces as shown.
- Fifth, unless the function returns no datatype (in which case we'd declare the function with
  `void`), we have to eventually have a `return` statement, which exits and outputs a value of the
  datatype that we declared in the beginning.

But enough of the structure. Let's get hands-on so we can actually understand the content.
Let's take a trip down into the `main` function at the very bottom, where we'll show some examples
of using functions, this one included!
*/
float decimal_to_percentage(float decimal) {
    // Take the argument passed into `decimal`, and multiply by 100 to yield a percentage.
    float percentage = decimal * 100;
    return percentage;
}

// Here's another function. Notice there's no `return`. Why do you think this is?
void hello_there(string name) {
    cout << "Hello there, " << name << "!" << endl;
    cout << "I will now show you what your grade is!" << endl;
}

// Another function.
void percentage_to_letter(float percentage) {
    if (percentage < 60.0) cout << "You got an F! Try harder next time!" << endl;
    else if (percentage < 70.0) cout << "You got a D! You could've done better!" << endl;
    else if (percentage < 80.0) cout << "You got a C! Congratulations, you're average." << endl;
    else if (percentage < 90.0) cout << "You got a B! Not bad!" << endl;
    else if (percentage < 100.0) cout << "You got an A! Good job!" << endl;
    else if (percentage >= 100.0) cout << "You aced the class! Amazing!" << endl;
}

// This function has no parameters!
void goodbye() {
    cout << "We hope you're satisfied with your grade. See you later!" << endl;
}

int main() {
    // Reading the name of the user from the keyboard.    
    cout << "What is your first name?" << endl;
    string name;
    cin >> name;
    // Calling the `hello_there` function with `name`.
    hello_there(name);
    float grade = 0.88;
    /*
    Here, we're "calling" the function that we declared, and setting its value to
    `grade_percentage`.
    */
    float grade_percentage = decimal_to_percentage(grade);
    // Now we print `grade_percentage` to the screen.
    cout << "Your grade is: " << grade_percentage << "%" << endl;
    /*
    Now we convert that to a letter-grade and report it using the `percentage_to_letter`
    function.
    */
    percentage_to_letter(grade_percentage);
    /*
    Now we say goodbye to the user with the `goodbye` function. We call it without passing any
    arguments, and that's because `goodbye` has no parameters declared! So we simply call it with
    an empty parentheses.
    */
    goodbye();
    return 0;
}

