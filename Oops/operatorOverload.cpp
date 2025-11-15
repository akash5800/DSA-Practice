// Operator overloading is also a type of compile time polymorphism
#include <iostream>
using namespace std;
 
class Complex{
  int real;
  int img;
  public:
  Complex(int r,int i){
    real=r;
    img=i;
  }
  void showNum(){
    cout<<real<<"+"<<img<<"i\n";
  }
  Complex operator+(Complex &c2){
    int real=this->real + c2.real;
    int img=this->img + c2.img;
    Complex c3(real,img);
    return c3;
  }
  
};
int main(){
 Complex c1(1,2);
 Complex c2(3,4);
 c1.showNum();
 c2.showNum();

  Complex c3=c1+c2;
 c3.showNum();
  return 0;
}