#include <iostream>
#define MAX_SIZE 100
using namespace std;

class LinearQueue {
private:
    int front, rear;
    int arr[MAX_SIZE];

public:
    LinearQueue() {
        front = -1; // Initialize front pointer
        rear = -1;  // Initialize rear pointer
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow\n";
            return;
        }
        if (isEmpty()) // If queue is empty, move front to 0
            front = 0;
        rear++; // Increment rear pointer
        arr[rear] = x; // Insert element at rear
        cout << "Inserted " << x << " into the queue\n";
    }

    void dequeue() {
        if (isEmpty()) { // Check if queue is empty
            cout << "Queue Underflow\n";
            return;
        }
        cout << "Deleted " << arr[front] << " from the queue\n";
        if (front == rear) { // If only one element in the queue
            front = -1; // Reset front pointer
            rear = -1;  // Reset rear pointer
        } else {
            front++; // Increment front pointer
        }
    }

    int peek() const {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1; // Return -1 for an empty queue (assuming -1 is not a valid element)
        }
        return arr[front]; // Return element at front without removing it
    }

    void display() const {
        if (isEmpty()) {
            cout << "Queue is empty\n";
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    bool isEmpty() const {
        return front == -1;
    }

    bool isFull() const {
        return rear == MAX_SIZE - 1;
    }
};

int main() {
    LinearQueue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    q.display(); // Display the queue elements

    cout << "Front element: " << q.peek() << endl; // Peek at the front element

    q.dequeue();
    q.dequeue();

    q.display(); // Display the updated queue elements

    return 0;
}
