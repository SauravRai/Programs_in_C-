//Program illustrating multilevel inheritance
#include<iostream>

using namespace std;

class M
   {
    protected:
     int m; 
    public:        
     void get_m(int); 
     void display()
         {
          cout<<"Base Class M"<<endl;
         }
   };

void M::get_m(int a)
  {
   m = a;
  }

class N 
   {
    protected:
      int n;
    public: 
      void get_n(int);      
      void display()
         {
          cout<<"Base Class N"<<endl;
         }
       
   };

void N::get_n(int b)
  {
   n = b;
  }

class P : public M , public N
  { 
    public: 
     void display();   
  };

 void P::display()
  {
    cout<<"m :"<<m<<endl;       
    cout<<"n :"<<n<<endl;       
    cout<<"m*n :"<<m*n<<endl;       
  } 

  int main()
   {
    P p;
    //M m;
    //N n;
    p.get_m(5);
    p.get_n(6);
    p.display();
    //m::display() 
   return 0; 
   }

