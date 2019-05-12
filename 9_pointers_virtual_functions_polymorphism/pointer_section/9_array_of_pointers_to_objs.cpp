//THIS PROGRAM ILLUSTRATES THE ARRAY OF (object) POINTERS TO OBJECTS
#include<iostream>
#include<string.h>

using namespace std;

class city
  {
   protected:
   char *name; 
   int len;
   public:
   city() //city constructor
    {
     len = 0;
     name = new char[len+1]; 
    }
  
   void get_name(void) 
     {
      char *s;
      s = new char[30]; 
      cout<<"Enter the string"<<endl;
      cin>>s;      
      len =  strlen(s); 
      name = new char[len+1]; 
      strcpy(name,s);
     }

    void display(void)
     {
      cout<<name; 
     }   
 }; 

 int main()
   {
   int option;
   int n =1;
   city *cptr[10]; //array of pointers
   do{
      cptr[n] = new city;
      cptr[n]->get_name();
      n++;
    cout<<"Enter 1 or continue or 0 for discontinue"<<endl;
    cin>>option;
    }while(option);
   
   //now display all the elements ponited by the pointer
   for(int i=1;i<=n;i++)  
      {
      cptr[i]->display();
      }    
         
   return 0;  
   } 





