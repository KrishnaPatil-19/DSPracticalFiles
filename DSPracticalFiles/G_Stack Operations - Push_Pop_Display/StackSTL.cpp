#include <iostream>
#include <stack>
using namespace std;

// Function to display the elements of a stack
void display(stack<int> stk) {
    cout << "Stack elements:\n";
    while (!stk.empty()) {
        cout << stk.top() << "\n";
        stk.pop();
    }
}

int main() {
    // Declare a stack of integers
    stack<int> stack;

    // Push elements onto the stack
    stack.push(10);
    stack.push(20);
    stack.push(30);

    // Display the stack elements
    display(stack);

    // Access the top element
    cout << "Top element: " << stack.top() << endl;

    // Pop an element
    stack.pop();

    // Access the top element after pop
    cout << "Top element after pop: " << stack.top() << endl;

    // Check if the stack is empty
    cout << "Is stack empty? " << (stack.empty() ? "Yes" : "No") << endl;

    // Get the size of the stack
    cout << "Size of stack: " << stack.size() << endl;

    return 0;
}
