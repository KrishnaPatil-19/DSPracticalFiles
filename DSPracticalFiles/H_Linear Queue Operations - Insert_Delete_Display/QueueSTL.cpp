#include <iostream>
#include <queue>
using namespace std;

// Function to display elements of a queue
void displayQueue(queue<int> q) {
    cout << "Queue elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    // Creating a queue of integers
    queue<int> myQueue;

    // Enqueue elements into the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Displaying the front element of the queue
    cout << "Front element of the queue: " << myQueue.front() << endl;

    // Dequeue elements from the queue
    myQueue.pop();
    myQueue.pop();

    // Displaying the size of the queue
    cout << "Size of the queue: " << myQueue.size() << endl;

    // Checking if the queue is empty
    if (myQueue.empty()) {
        cout << "Queue is empty\n";
    } else {
        cout << "Queue is not empty\n";
    }

    // Displaying the elements of the queue using the displayQueue function
    displayQueue(myQueue);

    return 0;
}
