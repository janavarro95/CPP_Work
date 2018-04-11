#include <iostream>
#include <vector>  // Needed in order to use vectors!

using namespace std;

int main() {
    // Vectors are simple. Think of them as a list of items.
    // We can add items, remove items, and change items in vectors!
    // Declare a vector like so:
    vector<int> my_vector;
    // In the angled brackets, we define the datatype that the vector holds.
    // Note that vectors can only hold one datatype!
    // After that, we declare the name of the vector.
    // Now, let's take a look at some basic operations.
    // We can add stuff to a vector with `push_back`, which appends the value to the vector's end.
    my_vector.push_back(3);
    // Use the `.size()` method to find out how many items are in the vector!
    cout << my_vector.size() << endl;  // Output: 1
    my_vector.push_back(7);
    cout << my_vector.size() << endl;  // Output: 2
    // You can access the elements of a vector through the `.at(index)` method.
    // Note that vectors begin indexing at 0, so `.at(1)` is the second element.
    cout << my_vector.at(1) << endl;  // Output: 7
    // Removing items from a vector by index.
    // `.begin()` is an iterator that points to the beginning of the vector.
    // Iterators will be explained in a different chapter; for now, just trust this.
    int index_to_remove = 1;
    my_vector.erase(my_vector.begin() + index_to_remove);  // Removes `7` from the vector.
    cout << my_vector.size() << endl;  // Output: 1
    // We can change the value of an item in a vector through the `.at()` method.
    cout << my_vector.at(0) << endl;  // Output: 3
    my_vector.at(0) = 9001;
    cout << my_vector.at(0) << endl;  // Output: 9001
    // We can clear all the elements from the vector via `.clear()`.
    my_vector.clear();
    cout << my_vector.size() << endl;  // Output: 0
    // We can also do something special... called a "range-based for-loop".
    // Like the rest of the operations it's best explained through example. Let's take a look.
    my_vector.push_back(6);
    my_vector.push_back(5);
    my_vector.push_back(4);
    my_vector.push_back(3);
    my_vector.push_back(2);
    my_vector.push_back(1);
    // This is the syntax for a "range-based for-loop".
    // You have to declare a placeholder variable that will represent the values across the loop.
    // In this case, it's `int i`.
    // You then have a colon, and then the name of the vector.
    // Think of this as: "For each value inside the vector, do something."
    // In this case, we're simply printing the values to the screen.
    for (int i : my_vector) {
        cout << i << endl;
        /*
        Output:
        6
        5
        4
        3
        2
        1
        */
    }
    // Range-based for-loops don't allow us to play around with indices, though.
    // This means we can't use methods like `.at()` since they rely on indices.
    // We'll instead use a classical for-loop.
    for (int i = 0; i < my_vector.size(); i++) {
        my_vector.at(i) *= 2;  // Equivalent of `my_vector.at(i) = my_vector.at(i) * 2`
        cout << my_vector.at(i) << endl;
        /*
        Output:
        12
        10
        8
        6
        4
        2
        */
    }
    return 0;
}

