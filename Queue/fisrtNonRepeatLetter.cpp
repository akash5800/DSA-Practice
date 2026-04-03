#include <iostream>
#include <queue>
#include <string> // Better to include string explicitly
using namespace std;

void nonRepeatChar(string str) {
    queue<char> q;
    int freq[26] = {0};

    for (int i = 0; i < str.size(); i++) {
        char ch = str[i];

        // 1. Log the arrival of the character
        q.push(ch);
        freq[ch - 'a']++;

        // 2. The "Filter": Remove characters from the front of the queue 
        // if they have become duplicates anywhere in the stream.
        while (!q.empty() && freq[q.front() - 'a'] > 1) {
            q.pop();
        }

        // 3. The current front of the queue is the EARLIEST unique character
        if (q.empty()) {
            cout << "-1" << "\n";
        } else {
            cout << q.front() << "\n";
        }
    }
}

int main() {
    // Standardizing the input string to lowercase for your freq[26] logic
    string str = "aabccxb";
    nonRepeatChar(str);
    return 0;
}