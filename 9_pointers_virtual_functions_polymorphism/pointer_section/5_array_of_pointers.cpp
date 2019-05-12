//Each element of the pointer array points to an item in the data array
//array of pointers
#include<iostream>
#include<string.h>
#include<cstring>

using namespace std;

int main()
  {
    const char *ptr[10] = {
                     "Saurav",
                    "Dhoni",
                    "Kohli",
                    "Yuvraj",
                    "Raina" 
                   };
   char str[25];
   cout<<"\nEnter your favourite cricketer";
   cin>>str;
   int i;

   cout<<"The string in the poniter are: ";
   for(int j =0;j<5;j++)
    {
      cout<<endl;
      cout<<"*(ptr+j)"<<*(ptr+j)<<endl;
      cout<<"ptr[j]"<<ptr[j]<<endl;
      cout<<"*ptr[j]"<<*ptr[j]<<endl;
      cout<<"(ptr[j])"<<(ptr[j])<<endl;
      cout<<"(ptr+j)"<<(ptr+j)<<endl;
      cout<<endl;
    } 
   
   for(i=0;i<5;i++) 
    {
      if(!strcmp(str, ptr[i]))
       {
         cout<<"The cricketer is present in the list"<<endl;
         cout<<endl;
         break;
       }
    
      if(i==4)
        cout<<"Not present";
        cout<<endl;
     }
 return 0;
}
