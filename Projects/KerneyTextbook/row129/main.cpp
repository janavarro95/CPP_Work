/*
Of the following mental-models, which best fits a vector? The following code may help:

vector<int> vec;
for (int i = 0; i < 10; i++) {
    vec.push_back(i);
}
vec.erase(vec.begin() + 0);  // Relatively inefficient.

a. A vector is like a stack of dishes. You place a dish on the table, and then you place more dishes
   on top. So when you want to retrieve something from the stack, you start with the last dish that
   you put in the stack—the one on top; you end with the first dish you put in the stack—the one on
   the bottom.
b. A vector is like a grocery list. You can add items to a vector, and you can delete items from a
   vector. Each item will have a number called an index which helps you keep track of which items you
   want to deal with. Adding to the end of the grocery list is easy—you just write something on the next line!
   But if you add to the beginning, it's more time-consuming, since you have to shift everything
   down a line to make room for the additional item.
c. A vector is like a treasure-chest. You just smash stuff into the chest, and when you want to retrieve
   something, you have to go looking through the chest until you find the thing you want.
d. A vector is like a mountain. You have the smallest items up top, and the biggest items down below,
   so it forms a sort of mountain-like shape. When you want to retrieve something, you have to start
   with the smallest items first—the ones at the top. Then, you go for the biggest items, which are
   at the bottom.
*/
