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
           cout<<"The value of the x is: "<<x;
           cout<<"alpha initialized"<<endl;
          }
    };

class beta
    {
      int y;
      public:
         beta(int j)
          {
           y = j;
          }
        void show()
          {
           cout<<"The value of the y is: "<<y;
           cout<<"beta initialized"<<endl;
          }
    };
 
 class gamma : public alpha ,public beta
  {
   int m , n;
   public:
     gamma(int a ,int b, int c ,int d):alpha(a) , beta(b)
      {
        m = c;
        n = d;
        cout<<"gamma initialized"<<endl;
      }     
     void display_gamma();
  };
 
 void gamma::display_gamma()
  {
    cout<<"The value of m is: "<<m;
    cout<<"The value of n is: "<<n;
  }
 
 int main()
  {
   gamma g(5,3,2,1);
   g.display();
   g.show();
   g.display_gamma();
   return 0;  
   }  
