#include <iostream>
#define MAX_SIZE 100

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
            std::cout << "Queue Overflow\n";
            return;
        }
        if (isEmpty()) // If queue is empty, move front to 0
            front = 0;
        rear++; // Increment rear pointer
        arr[rear] = x; // Insert element at rear
        std::cout << "Inserted " << x << " into the queue\n";
    }

    void dequeue() {
        if (isEmpty()) { // Check if queue is empty
            std::cout << "Queue Underflow\n";
            return;
        }
        std::cout << "Deleted " << arr[front] << " from the queue\n";
        if (front == rear) { // If only one element in the queue
            front = -1; // Reset front pointer
            rear = -1;  // Reset rear pointer
        } else {
            front++; // Increment front pointer
        }
    }

    int peek() const {
        if (isEmpty()) {
            std::cout << "Queue is empty\n";
            return -1; // Return -1 for an empty queue (assuming -1 is not a valid element)
        }
        return arr[front]; // Return element at front without removing it
    }

    void display() const {
        if (isEmpty()) {
            std::cout << "Queue is empty\n";
        } else {
            std::cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                std::cout << arr[i] << " ";
            }
            std::cout << std::endl;
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

    std::cout << "Front element: " << q.peek() << std::endl; // Peek at the front element

    q.dequeue();
    q.dequeue();

    q.display(); // Display the updated queue elements

    return 0;
}
