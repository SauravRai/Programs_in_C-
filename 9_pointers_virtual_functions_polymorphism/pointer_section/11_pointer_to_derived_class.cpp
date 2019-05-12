#include<iostream>
#include<string.h>

using namespace std;

class BC
  {
   public:
   int b;
    void show()
      {
       cout<<"The value of b is: "<<b<<endl;
      }
  };

class DC : public BC
  {
    public:
    int d;
      void show()
      {
       cout<<"The value of b is: "<<b<<endl;
       cout<<"The value of d is: "<<d<<endl;
      }      
  };

int main()
  {
   BC *bptr;
   DC *dptr;
   BC b;
   DC d;
 
   bptr = &b; 
   bptr->b = 10;
   bptr->show();   

   bptr = &d; 
   //bptr->d = 20; this wont work coz the pointer cannot access the private data
   bptr->b = 20;
   bptr->show();   
   
   dptr = &d;
   dptr->b = 30;
   dptr->d = 40;
   dptr->show(); 

   cout<<"Using ((DC*)bptr)"<<endl;
   ((DC*)bptr)->d = 200;
   dptr->show(); 
    
  return 0;
  }
