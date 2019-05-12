#include<iostream>

using namespace std;

int main()
  {
    int a = 10;
    int *ptr;
    ptr =&a; //so now *ptr is deferencing the value of the ptr and it will contain the value in a
    cout<<"The value of a is: "<<a;
    *ptr = (*ptr)/2;
    cout<<"The value of a is: "<<a;   
    
   return 0; 
  }
