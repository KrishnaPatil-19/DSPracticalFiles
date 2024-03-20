#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1; // Initialize top as -1 to indicate an empty stack
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow - Cannot push more elements.\n";
            return;
        }
        arr[++top] = value;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow - Cannot pop from an empty stack.\n";
            return;
        }
        top--;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return -1; // Return a default value indicating an empty stack
        }
        return arr[top];
    }

    bool isEmpty() {
        return (top < 0);
    }

    bool isFull() {
        return (top >= MAX_SIZE - 1);
    }

    int size() {
        return top + 1;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Stack elements:\n";
        for (int i = top; i >= 0; --i) {
            cout << arr[i] << "\n";
        }
    }
};

int main() {
    Stack stack;

    stack.push(5);
    stack.push(10);
    stack.push(15);
    stack.push(20);

    cout << endl;

    stack.display();

    cout << endl;

    stack.pop();
    stack.display();

    cout << endl;

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop(); // This will result in an stack underflow.

    return 0;
}
