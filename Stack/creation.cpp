#include <iostream>
#include <vector>
using namespace std;
// creating stack using vector
class Stack
{
  vector<int> vec;

public:
  void push(int val)
  {
    vec.push_back(val);
  }

  void pop()
  {
    if (isEmpty())
    {
      cout << "stack is empty\n";
      return;
    }
    vec.pop_back();
  }
  int top()
  {
    if (isEmpty())
    {
      cout << "stack is empty\n";
      return -1;
    }
    int lastIdx = vec.size() - 1;
    return vec[lastIdx];
  }
  bool isEmpty()
  {
    return vec.size() == 0;
  }
};
int main()
{
  Stack st;
  st.push(3);
  st.push(2);
  st.push(1);
  while (!st.isEmpty())
  {
    cout << st.top() << " ";
    st.pop();
  }
  return 0;
}