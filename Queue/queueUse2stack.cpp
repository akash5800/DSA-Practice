#include<iostream>
#include<stack>
using namespace std;

class Queue {
    stack<int> s1;
    stack<int> s2;

public:
    void push(int data) {
        // Step 1: Move everything from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        // Step 2: Push the new data into s1
        s1.push(data);

        // Step 3: Move everything back from s2 to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    void pop() {
        if (s1.empty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        s1.pop();
    }

    int front() {
        if (s1.empty()) return -1;
        return s1.top();
    }

    bool empty() {
        return s1.empty();
    }
}; // Added missing semicolon

int main() {
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    } // return 0 moved outside the loop

    return 0;
}