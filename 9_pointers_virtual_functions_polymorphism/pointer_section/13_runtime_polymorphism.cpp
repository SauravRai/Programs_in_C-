//This program illustrates the use of virtual function for achieving run time polymorphism
#include<iostream>
#include<string.h>

using namespace std;

class media
   {
    protected:
      char title[30];
      float price;
    public:
      media(char *s , float p)
        {
          strcpy(title,s);
          price = p;  
        }        
      virtual void display() {};  
   };

 class book : public media
   {
    protected:
      int pages;
    public:
       book(char *s, float p, int pg):media(s,p)
         {
            pages = pg; 
         }
     void display()
      {     
       cout<<"The name of the book"<<title<<endl;
       cout<<"The price of the book"<<price<<endl;
       cout<<"The pages of the book"<<pages<<endl; 
      }
   };

  
 class tape : public media
   {
    protected:
      float time;
    public:
       tape(char *s, float p, float t):media(s,p)
         {
            time = t; 
         }
     void display()
      {     
       cout<<"The name of the tape"<<title<<endl;
       cout<<"The price of the tape"<<price<<endl;
       cout<<"The time of the tape"<<time<<endl; 
     }
   };
 int main()
   {
     int pg;
     float tm,pr;
     char str[30];
     //char *str = new char[30];
     cout<<"Enter the following details for book"<<endl; 
     cout<<"Enter the book name"<<endl;
     cin>>str; 
     cout<<"Enter the price of the book"<<endl;
     cin>>pr; 
     cout<<"Enter the pages of the book"<<endl;
     cin>>pg; 
     book b1(str,pr,pg);

     cout<<"Enter the following details for tape"<<endl; 
     cout<<"Enter the tape name"<<endl;
     cin>>str; 
     cout<<"Enter the price of the tape"<<endl;
     cin>>pr; 
     cout<<"Enter the time of the tape"<<endl;
     cin>>tm; 
     tape t1(str,pr,tm);

     media *list[2]; //Here list is a pointers of type media (think about item x ; item *ptr = &x;)
     list[0] = &b1;
     list[1] = &t1;
     cout<<"NOW THE REAL THING";
     cout<<"The info about book: "<<endl;    
     list[0]->display();
     cout<<"The info about tape: "<<endl;    
     list[1]->display();

   return 0;
   }

