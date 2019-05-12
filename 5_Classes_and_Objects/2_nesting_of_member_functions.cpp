#include<iostream>
using namespace std;
class set
  {
  int m,n;
  public:
  void input(int , int);
  void display();
  int largest();
  };
void set::input(int a, int b)
  {
   m = a;
   n = b;
  }

void set:: display()
  {
   cout<<"The vale of the largest is"<<largest()<<endl;
  }

int set::largest()
 {
  int largest;
  if (m>n)
    {
     largest  = m;
    }
  else
    {
     largest  = n;
    }
  return largest;
 }
 int main()
 {
  set s;
  s.input(11,4);
  s.display();
 return 0;  
 }
  


