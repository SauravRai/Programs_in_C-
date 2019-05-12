#include<iostream>
#include<string.h>
using namespace std;

class person
   {
    char name[30];
    int age; 
    public:
     person(char *s, int b)
        { 
          strcpy(name,s);
          age = b; 
        }
   
     person & greater(person & x)
       {
         if(x.age>age)
           return x;
        else 
           return *this;
       }
      
      void display()
       {
        cout<<"The person name and age are: "<<name<<" and "<<age<<endl; 
       }   
    };
 
 int main()
  {
    person P1("Saurav",25);
    person P2("Lakpa",24);
    person P3("Srawan",23);
    person P = P1.greater(P2);  
    P.display();    
    person p = P2.greater(P3);  
    p.display();    
   return 0;
  } 

