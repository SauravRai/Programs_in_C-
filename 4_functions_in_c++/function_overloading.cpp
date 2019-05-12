//The function  defines the function overloading 
#include<iostream>

using namespace std;

// Declaratiions of all the functions
int volume(int); //cube
double volume(double,int); //cylinder
long volume(long l , int a  ,int b); //rectangle

int main()
 {
  cout<<"Volume of cube is:"<<volume(10)<<endl;
  cout<<"Volume of cylinder is:"<<volume(2.5,8)<<endl;
  cout<<"Volume of Rectangular is:"<<volume(100L,75,15)<<endl;
  
 return 0; 
 }

 int volume(int s)
  {
    return(s*s*s);
  }
 
  double volume(double r , int h)
  {
    return(3.14519*r*r*h);
  }
  
  long volume(long l , int a , int b)
  {
    return(l*a*b);
  }
