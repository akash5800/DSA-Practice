#include<iostream>
using namespace std;
class Parent{
  public:
  virtual void hello(){
    cout<<"parent class\n";
  }
};
class Child:public Parent{
  public:
  void hello(){
    cout<<"child class\n";
  }
};

int main(){
Child child1;
Parent *ptr;
ptr=&child1;
ptr->hello();
return 0;
}