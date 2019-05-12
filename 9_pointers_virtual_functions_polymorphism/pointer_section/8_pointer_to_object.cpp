//This program illustrates the pointers to objects

#include<iostream>
using namespace std;

class item
   {
     int code;
     float price;
     public:
       void getdata(int a, float b)
          {
             code =a;
             price =b; 
          } 
       void show()
          {
           cout<<"The code and price are"<<code<<endl;
           cout<<price<<endl;  
          }
   };

  const int size = 2;
  int main()
    {
      item *ptr = new item[size]; //ptr is a pointer to an object.
      item *d = ptr;
      int x;
      float y;
      for(int i =0;i<size;i++)
        {
         cout<<"Enter the code and the price of the item"<<endl;
         cin>>x>>y;
         ptr->getdata(x,y); 
         ptr++; 
        }
                     
      for(int i =0;i<size;i++)
        {
         cout<<"The code and the price of the item"<<endl;
         d->show();
         d++;
        }
      
     return 0;
    } 
