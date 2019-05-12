//THE PROGRAM BEHAVES THE INTERACTIVE MACHINE IN A SHOPPING MALL

#include<iostream>
#include<iomanip>
using namespace std;

class ITEM
  {
   int itemCode[50];
   float itemPrice[50];
   int count;
   public:
   void CNT(void) //Sets the count value to the 0
     {count =0;} 
   void getitem(void);
   void displaySum(void);
   void remove(int);
   void displayItems(void);  
  };

void ITEM::getitem(void)
  {
    cout<<"Enter the itemCode"<<endl;
    cin>>itemCode[count];
    cout<<"Enter the itemPrice"<<endl;
    cin>>itemPrice[count];
    count++;
  }

void ITEM::displaySum(void)
  {
   float total_sum = 0;
   for(int i=0;i<count;i++)
     {
      total_sum += itemPrice[i];
     }   
   cout<<"The total sum is"<<total_sum<<endl; 
    
  }

void ITEM::remove(int a)
 {
   for(int i = 0;i<count;i++)
    {  
      if(itemCode[i]==a)
        itemPrice[i] =0;
      else
       cout<<"NOT PRESENT IN THE LIST";
    }
}

void ITEM::displayItems(void)
 {
  for(int i = 0;i<count;i++)
   {
    cout<<"Item: "<<itemCode[i]<<setw(10)<<"Price: "<<itemPrice[i]<<endl;
   }
 } 


int main()
{
  int a;
  ITEM item;
  item.CNT();
  do{
     cout<<"WELCOME TO THE SHOPPING MALL"<<endl;
     cout<<"Enter from the following option"<<endl;
     cout<<"CASE 1: ENTER THE ITEMS"<<endl;   
     cout<<"CASE 2: DISPLAY THE TOTAL SUM"<<endl;   
     cout<<"CASE 3: REMOVE AN ITEM"<<endl;   
     cout<<"CASE 4: DISPLAY THE TOTAL ITEMS"<<endl;   
     cout<<"CASE 5: QUIT"<<endl;   
    
     cin>>a;
     
     switch(a)
         {
           case 1: item.getitem(); 
                   break;
           case 2: item.displaySum();
                   break;
           case 3: cout<<"Enter the item you wish to remove";  
                   cin>>a;
                   item.remove(a);
                   break;
           case 4: item.displayItems();
                   break; 
           case 5: break;
           default : cout<<"Error in entry try again"<<endl;                   
          } 
   }while(a!=5);   

 return 0;
}

