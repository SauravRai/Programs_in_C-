#include<iostream>
using namespace std;
class integer
  {
  int m,n;
  public:
    integer(int,int); //Constructor declaration  
    void display()
     {
      cout<<"The value of m is: "<<m<<endl;      
      cout<<"The value of n is: "<<n<<endl;      
     }        
  }; 

integer :: integer(int a,int b)
  {
   m = a;
   n = b;
  }

int main()
  {
    integer inti(1,2); //Constructor called implicitly
    integer intii = integer(3,4); //Constructor called explicitly
    inti.display();
    intii.display();
   return 0; 
  }
 
