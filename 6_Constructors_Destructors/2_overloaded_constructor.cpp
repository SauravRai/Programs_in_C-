#include<iostream>
using namespace std;

class Complex
  {
    float real;
    float imag;
    public:
    Complex() {}; //constructor with no argument
    Complex(int val)
     {real = imag = val;}
    Complex(int a , int b)
     {
       real = a; 
       imag = b;
     }     
     
    friend Complex sum(Complex,Complex);
    friend void show(Complex);
  };

 Complex sum(Complex c1,Complex c2)
  {
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;   
   return c3;
  }

  void show(Complex c)
  {
   cout<<"The complex number is: "<<c.real<< "j+" <<c.imag<<endl;
  } 

 int main()
   {
    Complex c3;
    Complex c1(1); //will invoke constructor with one argument
    Complex c2(3,4); //will invoke constructor with two arguments
    show(c1);
    show(c2);
    c3 = sum(c1,c2);
    cout<<"The sum of the two complex numbers is: "<<endl;
    show(c3);
   return 0;    
   } 
