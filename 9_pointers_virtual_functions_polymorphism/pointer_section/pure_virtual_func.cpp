//This program showing the use of the pure virtual function in the program
#include<iostream>
using namespace std;
 
class base
  {
   public:
    virtual void fun_func() =0;
  };

class derived: public base
   {
    public:
     void fun_func()
        {
         cout<<"I am in the derived class"<<endl;
        } 
   };

int main()
  {
   derived d;
   d.fun_func();
  return 0;
  }
