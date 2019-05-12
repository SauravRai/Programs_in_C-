#include<iostream>
using namespace std;

inline float mul(float a, float b)
  {
    return (a*b) ;
  }


 inline float div(float a, float b)
  {
    return (a/b); 
  }
int main()
{
  float a = 2.1;
  float b = 3.3;
  cout<<"Multiplcation is:"<<mul(a,b)<<endl;
  cout<<"Division is:"<<div(a,b)<<endl;
 return 0;
}
