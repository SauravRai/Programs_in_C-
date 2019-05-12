//This program illustrates to accces string from array and pointers

#include<iostream>
#include<string.h>
using namespace std;

int main()
 {
  char str[] = "Test";
  char strr[10];
  int len = strlen(str);  
  //cout<<"The length of the string is: "<<len;
  //accesing the string
  /**
  for(int i=0;i<len;i++)
    {
      cout<<"str: "<<str<<endl;
      cout<<"str[i]: "<<str[i]<<endl;
      cout<<"istr[]: "<<i[str]<<endl;
      cout<<"*(str+i): "<<*(str+i)<<endl;
      cout<<"*(i+str): "<<*(i+str)<<endl;
    } 
  **/
  cout<<"The reverse of the string is: "<<endl;
  int i;
  for(i =0;i<len;i++)
     //cout<<str[len-1-i]<<endl;
      strr[i] = str[len-1-i];
  cout<<"First way"<<strr<<endl; 

  for(int j;j<len;j++)
     str[i] = str[i] + str[len-1-i];
     str[len-1-i] = str[i] - str[len-1-i]; 
     strr[i] = str[i] - str[len-1-i]; 
  cout<<"second way"<<strr<<endl;
  return 0; 
  
 }
