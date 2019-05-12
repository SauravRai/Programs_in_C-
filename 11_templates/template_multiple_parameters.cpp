#include<iostream>

using namespace std;

template <class X, class Y>

void display(X a, Y b)
  {
   cout<<"x"<<a<<"y"<<b<<endl; 
  }

int main()
   {
    display(12,5.9);
    return 0;
   } 
