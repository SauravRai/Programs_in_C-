//This program illustrates that functions cannot only receive objects but also can return objects;
#include<iostream>
using namespace std;

class Complex
   {
    float real;
    float imag;
    public:
    void getdata(float a,float b)
       {
         real = a;
         imag = b;
       }
    friend Complex complex_add(Complex ,Complex);

    void showdata();
   };

 void Complex::showdata()
  {
  cout<<"The complex number is "<<real<<"+j"<<imag<<endl;
  }

 Complex complex_add(Complex c1, Complex c2)
  {
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
   return c3;
  }

int main()
 {
  Complex c1,c2,c3;
  c1.getdata(1.1,2.3); 
  c2.getdata(2.0,1.0);
  cout<<"Before adding c1: "<<endl;
  c1.showdata();
  cout<<"Before adding c2: "<<endl;
  c2.showdata();
  c3 = complex_add(c1,c2);
  cout<<"After adding c3 is: "<<endl;
  c3.showdata();
 return 0; 
 }
 
