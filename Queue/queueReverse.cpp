 #include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Function to reverse the queue using a stack
void reverseQueue(queue<int>& q) {
    stack<int> s;

    // 1. Move all elements from Queue to Stack
    // Queue is FIFO, Stack is LIFO
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    // 2. Move all elements back from Stack to Queue
    // This effectively reverses the order
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

int main() {
    queue<int> q;

    // Fill the queue with 1, 2, 3, 4, 5
    for (int i = 1; i <= 5; i++) {
        q.push(i);
    }

    // Reverse the queue
    reverseQueue(q);

    // Print the reversed queue
    // Using a while loop is safer than a fixed for loop
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;
    return 0;
}