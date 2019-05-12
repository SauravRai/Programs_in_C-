#include<iostream>
using namespace std;

template<class T1, class T2>

class test
    {
     T1 a;
     T2 b;
     public:
       test(T1 x , T2 y)
          {
            a = x;
            b = y; 
          } 
       void display()   
          {
           cout<<"The value of a :"<<a<<" and b "<<b<<endl; 
          }
    };
    
 int main()
    {
      test<int,float> t1(45,45.8); 
      test<int,char> t2(45,'W'); 
      t1.display();
      t2.display();

    return 0; 
    }
