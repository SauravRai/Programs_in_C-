#include<iostream>
using namespace std;

template <class X>

void display(X a)
 {
   cout<<"The value of a: "<<a<<endl;
 }

void display(int b)
 {
   cout<<"The value of b: "<<b<<endl;
 }

 int main()
   {
    display(12);
    display(11.89);
    display('C');
     
    return 0;
   }
 
