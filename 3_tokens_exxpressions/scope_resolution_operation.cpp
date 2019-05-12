#include<iostream>
using namespace std;

int m =10; //global m
int main()
{
 int m = 20; //here m is redefined , local to m
   {
    int k =m;
    int  m = 30;
     cout<<"We are in the inner block:"<<endl;
     cout<<"The value of k is:"<<k<<endl;
     cout<<"m is:"<<m<<endl;
     cout<<"The value of ::m is"<<::m<<endl;
   }
    
     cout<<"We are in the outter block:"<<endl;
     //cout<<"The value of k is:"<<k; K is not declared in this scope
     cout<<"m is:"<<m<<endl;
     cout<<"The value of ::m is"<<::m<<endl;
 return 0;

}
