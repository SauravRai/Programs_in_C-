//This program finds all the even in the range of numbers
#include<iostream>

using namespace std;

int main()
 {
  int numbers[50] , *ptr;
  int count;
  cout<<"Enter the count of elements"<<endl;
  cin>>count;

  cout<<"Enter the elements"<<endl;  
  ///enter the elements in the array
  for(int i = 0;i<count;i++)
       cin>>numbers[i];
  
  int sum = 0; 

  ptr = numbers; 
  for(int i= 0;i<count;i++)
    {
     if(*ptr%2==0)
        sum = sum + 1;
     ptr++;
    }   
    
 cout<<"The total count of the even numbers is: "<<sum<<endl;
 return 0;
 }
