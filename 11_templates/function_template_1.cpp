//Program illustrating the use of function template

#include<iostream>
using namespace std;

template<class T>

void swap(T *a , T *b)
   {
      T temp = *a;
      *a = *b;
      *b = temp;
   } 


void fun(int x, int y, int a, int b)
   {
    cout<<"Before Swapping the functions are: "<<x<<" and "<<y<<endl;     
    cout<<"After swapping: "<<endl;
    swap(&x,&y);  
    cout<<x<<y<<endl;     
    
    cout<<"Before Swapping the functions are: "<<a<<" and "<<b<<endl;     
    cout<<"After swapping: "<<endl;
    swap(&a,&b);  
    cout<<a<<b<<endl;     
    
     
   }
 
 int main()
   {
    fun(10,20,30,40);     
    return 0;
   }  
