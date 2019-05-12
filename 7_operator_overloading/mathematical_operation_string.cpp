//Mathematical operations using the overloaded functions
#include<iostream>
#include<string.h>

using namespace std;

class String
  {
   char *p;
   int len;
   public:
     String() {len = 0; p =0;} //null constructor
     String(const char *s); //create from the array
     String(String &s); //copy constructor   
     ~String() {delete p;} //destructor
     //overloaded functions
     friend String operator +(String &,String &);
    
     friend int operator <=(String & , String &);
   
     friend void display(const String s);      
  };

 String :: String(const char *s)
   {
    len = strlen(s);
    p = new char[len+1];
    strcpy(p,s);
   } 

 String :: String(String & s)
   {
    len = s.len;
    p = new char[len+1];
    strcpy(p,s.p);
   } 


 String operator +(String & a,String & b)
   {
     String temp;
     temp.len = a.len + b.len;
     temp.p = new char[temp.len+1];
     strcpy(temp.p,a.p);
     strcat(temp.p,b.p);
     return (temp);
   }
  
 int operator <=(String & a,String & b)
   {
     int len1 = strlen(a.p); 
     int len2 = strlen(b.p);
     if (len1<=len2)
       return(1);
     else
       return(0);
   }
 void display(const String s)
   {
    cout<<s.p;
   } 
  
int main()
  {
  char *first = "Saurav";
  char *second = "Rai";
 
  String s1(first); //calls the constructor 1;
  String s2(second); //  here also 
  //String s1,s2; 
  //s1 = t1;
  //s2 = t2;
  //s2(t2); //copy constructor
  display(s1);
  display(s2); 
  String s3;
  s3 = s1 + s2;
  display(s3); 
  if(s1<=s2)
   {
    display(s2);
    cout<<"is larger than"<<endl;
    display(s2);   
   }
  else
   {
    display(s1);
    cout<<"is larger than"<<endl;
    display(s2);   
   } 
  return 0;
  }


