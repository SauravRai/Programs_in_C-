#include<iostream>
using namespace std;

class Complex
   {
   float real;
   float imag;
   public:
   Complex() {}; //Empty constructor
  Complex(float a , float b)
    {
     real = a;
     imag  = b;
    }
   Complex operator +(Complex);   
   void display(); 
   };


void Complex:: display()
 {
  cout<<"The complex number is :"<<real<<" j+ "<<imag<<endl;
 }
 
Complex Complex::operator +(Complex a)
  {
   Complex temp;
   temp.real = a.real + real;
   temp.imag = a.imag + imag;
   return temp;    
  }

int main()
  {
   Complex c1(1.2,3.4);
   Complex c2(3.2,1.4);
   c1.display();
   c2.display();
   Complex c3;
   c3 = c1+c2;
   c3.display();
  return 0;
  }
