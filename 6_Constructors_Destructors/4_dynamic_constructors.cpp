//Note that string has a pointer and length of the string associated with it.
#include<iostream>
#include<cstring> 
using namespace std;

class String
   {
    char *name;
    int length;
    public:
      String() //empty constructor 
        {
         length = 0;
         name = new char[length+1];
        }
      String(char *s)
        {
          length = strlen(s); 
          name = new char[length+1];    
          strcpy(name,s);
        }
      void display();
      void join(String & , String &);      
   };


 void String::display()
   {
    cout<<"The length of the string is: "<<name<<endl;
   } 

  void String::join(String & a, String & b)
   {
     length = a.length + b.length;
     delete name;
     name  = new char[length+1];
     strcpy(name,a.name);
     strcat(name,b.name);      
   }

 int main()
  {
   String s1 ,s2;
   char *first = "Saurav ";
   String name1(first) , name2("Kumar ") , name3("Rai ");
   name1.display();
   cout<<endl;
   name2.display();
   cout<<endl;
   name3.display();
   cout<<endl;
   s1.join(name1,name2);  
   s1.display();
   cout<<endl;
   s2.join(s1,name3);  
   s2.display();
   cout<<endl;
  return 0;
  }
