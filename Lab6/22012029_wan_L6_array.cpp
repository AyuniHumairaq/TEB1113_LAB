/*
Name = Wan Ayuni Humairaq binti Wan Name
ID = 22012029
*/

#include <iostream>
using namespace std;

class Queue {
private:
    int size;
    int front;
    int rear;
    string* arr;

public:
    // Constructor
    Queue(int size) {
        this->size = size;
        front = -1;
        rear = -1;
        arr = new string[size];
    }

    // Enqueue operation
    void enqueue(string name) {
        if (rear == size - 1) {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }

        if (front == -1) {
            front = 0;
        }

        rear++;
        arr[rear] = name;
        cout << name << " enqueued to the queue." << endl;
    }

    // Dequeue operation
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }

        cout << arr[front] << " dequeued from the queue." << endl;
        front++;
    }

    // Display queue
    void display_queue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " -> ";
        }
        cout << "NULL" << endl;
    }

    // Destructor
    ~Queue() {
        delete[] arr;
    }
};

int main() {
    Queue queue(5);  // Size of queue is 5

    queue.enqueue("Ali");
    queue.enqueue("Alice");
    queue.enqueue("Ahmed");

    queue.display_queue();

    queue.dequeue();
    queue.display_queue();

    return 0;
}
