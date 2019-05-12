#include<iostream>
using namespace std;

class Stat_func{
      int code;
      static int count;
      public:
         void setcode();
         void showcode();  
         static void showcount();  
     };


void Stat_func::setcode()
  {
   code = ++count;
  }

void Stat_func::showcode()
 {
  cout<<"The code for each object is"<<code<<endl;
 }

void Stat_func::showcount()
 {
  cout<<"The count is"<<count<<endl; //able to access only the static members of the class
 }

int Stat_func:: count;

int main()
 {
  Stat_func s1,s2,s3;

  s1.setcode();
  s2.setcode();
  
  Stat_func ::showcount(); //The static member function should be expilictly defined here
  
  s3.setcode();
     
  Stat_func ::showcount();
  
  //Now Each object no is 
  s1.showcode();
  s2.showcode();
  s3.showcode();
 return 0;
 }
