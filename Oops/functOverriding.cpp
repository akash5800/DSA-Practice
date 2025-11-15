#include<iostream>
using namespace std;
class Parent{
  public:
  void show(){
    cout<<"parent class\n";
  }
};
class Child:public Parent{
  public:
  void show(){
    cout<<"this is child class\n";
}
};

int main(){
Child obj1;
obj1.show();
return 0;
}