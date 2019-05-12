#include<iostream>

using namespace std;

class base 
   {
     public:
       void display()
         {
          cout<<"At display of the base class"<<endl;
          }
       virtual void show()
         {
          cout<<"At show of the base class"<<endl;
          }
   };

class derived : public base
       {
       public:
        void display()
         {
          cout<<"At display of the derived class"<<endl;
          }
        void show()
         {
          cout<<"At show of the derived class"<<endl;
          }
   };

int main()
  {
   base *bptr;
   base b;  
   bptr = &b;
   bptr->show();  
   bptr->display();  
   derived d;
   bptr = &d;
   bptr->show();  
   bptr->display();   
  return 0;
  }
