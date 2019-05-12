//A copy constructor is a member function which initializes an object using another object of the same class. A copy constructor has the following general function prototype:

//ClassName (const ClassName &old_obj); 

#include<iostream>
using namespace std;

class code
   {
    int id;
    public:
      code () {}; //Empty Constructor defined
      code (int a)
         {
          id  = a ;
         }
      code (code & x) 
         { 
           id = x.id; //copy constructor
         } 
      void display()
        {
        cout<<"The value of the id is: "<<id<<endl ;
        }
   };

  int main()
   {
    code A(100);
    code B(A); //copy constructor

    code C = A; //copy constructor
    code D; //D is created and not initialized;
    D = A;  //Copy constructor not called
    A.display();
    B.display();
    C.display();
    D.display(); //Even though it will give the same value as above it doesnot call copy constructor
 
    return 0;
   } 
