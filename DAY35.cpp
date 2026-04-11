/*Circular Queue Using Array - Implement using linked list with dynamic memory allocation.*/
#include <iostream>
using namespace std;
class CircularQueue {
    int* arr;
    int front, rear, size;
public:
    CircularQueue(int s) : size(s), front(-1), rear(-1) {
        arr = new int[size];
    }
    ~CircularQueue() {
        delete[] arr;
    }
    void enqueue(int value) {
        if ((rear + 1) % size == front) {
            cout << "Queue is full!" << endl;
            return;
        }
        rear = (rear + 1) % size;
        arr[rear] = value;
        if (front == -1) front = rear; // First element
    }
    void dequeue() {
        if (front == -1) {
            cout << "Queue is empty!" << endl;
            return;
        }
        if (front == rear) { // Only one element
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }
    void display() {
        if (front == -1) {
            cout << "Queue is empty!" << endl;
            return;
        }
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};
int main() {
    CircularQueue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
    q.enqueue(60);
    q.display();
    return 0;
}