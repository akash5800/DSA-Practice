#include<bits/stdc++.h>
using namespace std;

class Graph {
    int v; // Private member (lowercase)
    list<int> *l;

public:
    Graph(int V) {
        this->v = V;
        l = new list<int>[V];
    }

    void addEdge(int u, int v_edge) { // Renamed param to avoid shadowing
        l[u].push_back(v_edge);
        l[v_edge].push_back(u);
    }

    void print() {
        // Changed V to v to match the class member
        for(int u = 0; u < v; u++) { 
            cout << u << ": ";
            for(int neighbor : l[u]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph graph(5);
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);
    graph.addEdge(2, 4);

    graph.print();  
    return 0;
}