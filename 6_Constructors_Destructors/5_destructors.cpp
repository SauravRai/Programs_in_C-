#include<iostream>
#include<cstring>

using namespace std;

int count = 0;
class alpha
  {
  public:
  alpha() //alpha constructor
    {
     count++;
     cout<<"No of object created"<<count<<endl; 
    }
  ~alpha() //alpha constructor
    {
     cout<<"No of onject destroyed"<<count<<endl; 
     count--;
    }
  }; 

int main()
 {
 cout<<"ENTER THE MAIN PROGRAM"<<endl; 
 alpha a1,a2,a3;
 {
 cout<<"Enter the block 1"<<endl;
 alpha a4;
 }

 {
 cout<<"Enter the block 2"<<endl;
 alpha a5;
 }

 cout<<"EXIT FROM THE MAIN PROGRAM"<<endl; 

 return 0; 
 }
