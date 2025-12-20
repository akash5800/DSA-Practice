#include <bits/stdc++.h>
using namespace std;
string countSort(string str)
{
  vector<int> freq(26, 0); // size 26 and start index=0

  // storing frequency of every character in string
  for (int i = 0; i < str.length(); i++)
  {
    int index = str[i] - 'a';
    freq[index]++;
  }
  // create our sorted string
  int j = 0;
  for (int i = 0; i < 26; i++)
  {
    while (freq[i]--)
    {
      str[j++] = i + 'a';
    }
  }

  return str;
}
int main()
{
  string str = "cbadfe";
  cout << "original string: " << str << endl;
  string sortedStr = countSort(str);
  cout << "sorted string: " << sortedStr << endl;
  return 0;
}