// type of compile time polymorphism
// same function name with different parameters
#include <iostream>
using namespace std;
class Print{
  public:
  void show(int x){
    cout<<"Int"<<x<<endl;
  }
  void show(string str){
    cout<<"String:"<<str<<endl;
  }
};
int main(){
  Print obj1;
  obj1.show(25);
  obj1.show("hello akash");
  return 0;
}