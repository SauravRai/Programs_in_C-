#include<iostream>
using namespace std;

class sample
 {
  int m , n;
  public:
    void setvalue(int a , int b)
      { 
        m = a;
        n = b;
      }  
    friend float mean(sample);
 };

 float mean(sample s) //defined like a normal function , object is passed as an argument
  {
    return (float(s.m+s.n)/2.0);
  }

 int main()
  {
   sample s;
   s.setvalue(2,4);
   //Friend function cannot be called using a object of a class.
   //It is called like a normal function 
   cout<<"The mean of the two numbers is "<<mean(s)<<endl;
  return 0; 
  }
