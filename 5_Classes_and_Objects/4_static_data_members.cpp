#include<iostream>
using namespace std;
class Stat{
      static int count;
      int number;
      public:
         void getdata(int);
         void getcount();  
     };

void Stat::getdata(int a)
  {
  number = a;
  count++;
  }

void Stat::getcount()
 {
  cout<<"The count is"<<count<<endl;
 }

int Stat:: count;
int main()
 {
  Stat s1,s2,s3;
  cout<<"Before calling getdata count is"<<endl;
  s1.getcount();
  s2.getcount();
  s2.getcount();
  
  cout<<"After calling getdata count is"<<endl;
  s1.getdata(1);
  s2.getdata(2);
  s2.getdata(3);

  s1.getcount();
  s2.getcount();
  s2.getcount();
 return 0;
 }
