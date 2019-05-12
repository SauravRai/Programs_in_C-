#include<iostream>
#include<string>
using namespace std;

int main()
   {
    int N;
    int T; 
    string S, newS;
    cout<<"Input T"<<endl;
    cin>>T;
    for(int i;i<T;i++)
       { 
         cout<<"Input N"<<endl;
         cin>>N;
         if(S[i]=='E')
            newS.append("S"); 
         else if(S[i]=='S')
            newS.append("E");     
       }
     cout<<"The new string is: "<<newS;
    return 0;
   }
 

