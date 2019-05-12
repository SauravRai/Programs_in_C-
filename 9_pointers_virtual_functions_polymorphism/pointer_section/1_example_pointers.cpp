//Program showing an example for pointers
#include<iostream>
using namespace std;


int main()
  {
   int a ,*ptr1, **ptr2;
   ptr1 = &a;
   ptr2 = &ptr1;
   
   cout<<"The address of a is: "<<ptr1<<endl; 
   cout<<"The address of ptr1 is: "<<ptr2<<endl;
   
   ptr1 += 2;
   ptr2 += 2;                      
   cout<<"After incrementing: ";
   
   cout<<"The address of a is: "<<ptr1<<endl;   
   cout<<"The address of ptr1 is: "<<ptr2<<endl;   

   return 0;
  }
