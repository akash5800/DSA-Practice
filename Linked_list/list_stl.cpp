// push_front and push_back in STL list
// size(), empty(), front(), back(), pop_front(), pop_back()
#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void printList(list<int>ll){
list<int>::iterator itr; 
for(itr=ll.begin();itr!=ll.end();itr++){
  cout<<(*itr)<<"->";
}
cout<<endl;
}
int main(){
list<int>ll;
ll.push_front(2);// inserting 2 at front
ll.push_front(1);// inserting 1 at front before 2
ll.push_back(3);// inserting 3 at back
printList(ll);
cout<<ll.size()<<endl; // gives size
cout<<ll.front()<<endl;// gives first element
cout<<ll.back()<<endl;// gives last element
ll.pop_front(); // removes first element
ll.pop_back(); // removes last element
printList(ll);
return 0;
}

