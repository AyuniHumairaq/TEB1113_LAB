/*
Name = Wan Ayuni Humairaq binti Wan Name
ID = 22012029
*/

#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string name;
    Node* next_ptr;

    Node(string name) {
        this->name = name;
        this->next_ptr = nullptr;
    }
};

class Queue {
public:
    Node* front;
    Node* rear;

    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Enqueue operation
    void enqueue(string name) {
        Node* new_node = new Node(name);

        if (front == nullptr) {
            front = new_node;
            rear = new_node;
            rear->next_ptr = front; // Circular link
        } else {
            rear->next_ptr = new_node;
            rear = new_node;
            rear->next_ptr = front; // Maintain circularity
        }
    }

    // Dequeue operation
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty." << endl;
            return;
        }

        if (front == rear) { // Only one node
            cout << "Dequeued: " << front->name << endl;
            delete front;
            front = rear = nullptr;
        } else {
            Node* temp = front;
            cout << "Dequeued: " << temp->name << endl;
            front = front->next_ptr;
            rear->next_ptr = front; // Maintain circularity
            delete temp;
        }
    }

    // Display queue
    void display_queue() {
        if (front == nullptr) {
            cout << "Queue is empty." << endl;
            return;
        }

        Node* current = front;
        do {
            cout << current->name << " -> ";
            current = current->next_ptr;
        } while (current != front);
        cout << "(back to " << front->name << ")" << endl;
    }
};

int main() {
    Queue queue;
    queue.enqueue("Ali");
    queue.enqueue("Alice");
    queue.enqueue("Ahmed");

    cout << "Queue after enqueues: ";
    queue.display_queue();

    queue.dequeue();
    cout << "Queue after one dequeue: ";
    queue.display_queue();

    return 0;
}



