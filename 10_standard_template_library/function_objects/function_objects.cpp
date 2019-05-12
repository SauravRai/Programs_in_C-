#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

int main()
  {
    int x[] = {10,50,90,80,45,35}; 
    int y[] = {30,20,80,40,63}; 
    sort(x,x+6,greater<int>()); //fuction objects is used here 
    sort(y,y+5);
    //display the elements in x
    for(int i = 0;i<6;i++)
         cout<<x[i]<<" "; 
    cout<<"\n";
    for(int j = 0;j<5;j++)
         cout<<y[j]<<" "; 
         
   cout<<"\n";
   int z[11];
   
   merge(x,x+6,y,y+5,z);
   for(int j = 0;j<11;j++)
         cout<<z[j]<<" "; 
   sort(z,z+11);
   cout<<"After sorting"; 
   for(int j = 0;j<11;j++)
         cout<<z[j]<<" "; 
   cout<<"\n";      
   return 0;
  }

 
//functions learnt sort , merge , function objects 
