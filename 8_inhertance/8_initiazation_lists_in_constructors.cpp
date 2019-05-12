#include<iostream>
using namespace std;

class alpha
    {
      int x;
      public:
         alpha(int i)
          {
           x = i;
          }
        void display()
          {
           cout<<"The value of the x is: "<<x<<endl;
           cout<<"alpha initialized"<<endl;
          }
    };

class beta
    {
      int p , q;
      public:
         beta(int a,int b):p(a) , q(p+b)
          {
           cout<<"beta initialized"<<endl;
          }
        void show()
          {
           cout<<"The value of the p is: "<<p<<endl;
           cout<<"The value of the q is: "<<q<<endl;
          }
    };
 
 class gamma : public alpha ,public beta
  {
   int m , n;
   public:
     gamma(int a ,int b, int c ,int d):alpha(a) , beta(c,c) , m(a) //inilisation section
      {
        n = d; // assignment section
        cout<<"gamma initialized"<<endl;
      }     
     void display_gamma();
  };
 
 void gamma::display_gamma()
  {
    cout<<"The value of m is: "<<m<<endl;
    cout<<"The value of n is: "<<n<<endl;
  }
 
 int main()
  {
   gamma g(5,3,2,1);
   g.display();
   g.show();
   g.display_gamma();
   return 0;  
   }  
