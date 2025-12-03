// push_front adds at staarting
#include <bits/stdc++.h>
using namespace std;

class Node {
public:   // <-- make members accessible
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;
public:
    List() {
        head = NULL;
        tail = NULL;
    }
    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void print() {   // helper to check correctness
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    List ll;   // ✅ object, not function
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.print();   // Output: 1 2 3
    return 0;
}
