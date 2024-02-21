#include <iostream>
using namespace std;

// Node class to represent a node in the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// LinkedList class to represent the singly linked list
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Create a new linked list
    void create(int value) {
        head = new Node(value);
    }

    // Insert a new node at the end of the linked list
    void insert(int value) {
        if (head == nullptr) {
            create(value);
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }

            temp->next = new Node(value);
        }
    }

    // Delete a node with a specific value from the linked list
    void remove(int value) {
        if (head == nullptr) {
            cout << "Linked list is empty. Cannot delete from an empty list." << endl;
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;

        // If the node to be deleted is the head
        if (temp != nullptr && temp->data == value) {
            head = temp->next;
            delete temp;
            cout << "Node with value " << value << " deleted from the list." << endl;
            return;
        }

        // Search for the node to be deleted
        while (temp != nullptr && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        // If the node with the value is not found
        if (temp == nullptr) {
            cout << "Node with value " << value << " not found in the list." << endl;
            return;
        }

        // Unlink the node from the linked list
        prev->next = temp->next;
        delete temp;
        cout << "Node with value " << value << " deleted from the list." << endl;
    }

    // Display the elements of the linked list
    void display() {
        Node* temp = head;

        if (temp == nullptr) {
            cout << "Linked list is empty." << endl;
        } else {
            cout << "Linked list elements: ";
            while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main() {
    LinkedList linkedList;

    linkedList.create(5);
    linkedList.insert(10);
    linkedList.insert(15);
    linkedList.insert(20);

    cout << endl;

    linkedList.display();

    cout << endl;

    linkedList.remove(10);
    linkedList.display();

    cout << endl;

    linkedList.remove(22); // This will result in a message indicating that the node is not found

    return 0;
}
