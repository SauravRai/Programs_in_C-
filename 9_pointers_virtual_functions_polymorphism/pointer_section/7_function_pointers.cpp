//using function pointer to allow a c++ program to select a function dynamically at run time
//pointers to functions
#include<iostream>
using namespace std;

typedef void(*Funcptr) (int , int);

void add(int a ,int b)
 {
   cout<<"The addition of the numbers is"<<a+b<<endl;
 }
void sub(int a ,int b)
 {
   cout<<"The addition of the numbers is"<<a-b<<endl;
 }


int main()
  {
   Funcptr ptr;
   ptr = &add;
   ptr(3,5);
   cout<<endl;
   ptr = &sub;
   ptr(3,5);
  return 0;
  }
