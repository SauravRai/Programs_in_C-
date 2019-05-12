//The program illustrates the use of unary operator 
#include<iostream>
#include<string.h>

using namespace std;

class space
  {
   int x;
   int y;
   int z;
   public:
     void getdata(int a, int b, int c)
        {
          x  = a;
          y  = b; 
          z  = c;
        }
      
     void display()
       {
         cout<<"The values are "<<x<<y<<z<<endl; 
       }
     
      void operator -();
  };

 void space::operator -()
   {
     x = -x; 
     y = -y;
     z = -z;
   }

 int main()
   {
     space s;
     s.getdata(2,4,6);
     s.display();
     -s;
     s.display();     
   return 0;  
   }

