//This program illustrates the arithmetic operation on pointers like + , - , ++ and --

#include<iostream>

using namespace std;
int main()
  {
   int a[] = {10,20,30,40,50};
   //print the value of the array
   
   for(int i = 0;i<5;i++)
     {
       cout<<a[i];
     }
  
   cout<<endl;   
   int *ptr;
   ptr = a;
   cout<<"The element in the pointer is: "<<*ptr; //it should give me the first pointer value       
   cout<<"\n";   
   ptr++;
   //after incrementing
   
   cout<<"The element in the pointer is: "<<*ptr; //it should give me the first pointer value       
   cout<<"\n";   

   ptr--;
   //after incrementing
   
   cout<<"The element in the pointer is: "<<*ptr; //it should give me the first pointer value       
   cout<<"\n";   
 
   ptr = ptr+2; 
   cout<<"The element in the pointer after ptr+2 is: "<<*ptr; //it should give me the first pointer value       
   cout<<"\n";   

  return 0;

  }



