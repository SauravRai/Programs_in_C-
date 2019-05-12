#include<iostream>
using namespace std;
class ABC; //forward declaration

class XYZ	
 {
  int m;
  public:
    void setvalue(int a)
      { 
        m = a;
      }  
    friend void max(XYZ,ABC);
 };

class ABC	
 {
  int n;
  public:
    void setvalue(int b)
      { 
        n = b;
      }  
    friend void max(XYZ,ABC);
 };

 void max(XYZ x, ABC y)
  {
    if(x.m>y.n)
       cout<<"Maximum element is :"<<x.m<<endl;
    else
       cout<<"Maximum element is :"<<y.n<<endl;
  }

 int main()
  {
  
   XYZ xyz; 
   ABC abc;
   xyz.setvalue(90);
   abc.setvalue(78);
   max(xyz,abc);
   return 0; 
  }
