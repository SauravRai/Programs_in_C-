#include<iostream>
using namespace std;

class item
  {
  int number;
  float cost;
  public:
  void getdata(int , float);
  void display(void)
   {
    cout<<"The number is"<< number<<endl;
    cout<<"The cost is"<< cost<<endl;
   }   
  };

 void item :: getdata(int a, float b)
   { 
      number = a;
      cost = b;
   }

int main()
 {
   item t;
   t.getdata(12,67.9);
   t.display();
 return 0;
 }
