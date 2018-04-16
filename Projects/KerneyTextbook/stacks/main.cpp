/*
Of the following mental-models, which best fits a stack? The following code may help:

stack<int> my_stack;
for (int i = 0; i < 10; i++) {
    my_stack.push(i);
}
int last_item_added = my_stack.top();
my_stack.pop();

a. A stack is like a stack of dishes. You place a dish on the table, and then you place more dishes
   on top. So when you want to retrieve something from the stack, you start with the last dish that
   you put in the stack—the one on top; you end with the first dish you put in the stack—the one on
   the bottom.
b. A stack is like a bookshelf. You can place books on the bookshelf in any order you want, and you
   can retrieve books from the bookshelf in any order you want as well.
c. A stack is like a treasure-chest. You just smash stuff into the chest, and when you want to retrieve
   something, you have to go looking through the chest until you find the thing you want.
d. A stack is like a mountain. You have the smallest items up top, and the biggest items down below,
   so it forms a sort of mountain-like shape. When you want to retrieve something, you have to start
   with the smallest items first—the ones at the top. Then, you go for the biggest items, which are
   at the bottom.
*/
