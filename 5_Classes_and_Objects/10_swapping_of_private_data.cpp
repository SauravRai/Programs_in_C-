//This program illustrates the use of friend function to swap private data between two classes
#include<iostream>
using namespace std;

class class_2; //forward declaration

class class_1
  {
   int a; 
   public:
      void getdata(int m)
       {
         a = m; 
       }
     
      void display()
       {
        cout<<"The value is: "<<a;
       } 
    friend void swap(class_1 & , class_2 &);
  };

class class_2
  {
   int b; 
   public:
     void getdata(int m)
       {
         b = m; 
       }   
      void display()
       {
        cout<<"The value is: "<<b;
       }
   friend void swap(class_1 & , class_2 &);
  };
 
 void swap(class_1 & c1, class_2 & c2)
   {
     int temp;
     temp = c1.a;
     c1.a = c2.b;
     c2.b = temp;    
   } 
 int main()
  {
   class_1 c1;
   class_2 c2;
   c1.getdata(22);
   c2.getdata(11);
   cout<<"Before swapping:"<<endl;
   c1.display();
   cout<<endl;
   c2.display();
   swap(c1,c2);
   cout<<"After swapping:"<<endl;
   c1.display();
   cout<<endl;
   c2.display();
  return 0;   
  }
 
