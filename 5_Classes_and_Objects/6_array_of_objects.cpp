#include<iostream>
using namespace std;

class employee
    { 
     char name[30];
     float age;
     public:
        void getdata(void);  
        void showdata(void);  
    };
void employee:: getdata()
 {
  cout<<"Enter the name of the employee"<<endl;
  cin>>name;
  cout<<"Enter the age of the employee"<<endl;
  cin>>age;
 }

void employee:: showdata()
 {
  cout<<"The name of the employee: "<<name<<endl;
  cout<<"Enter the age of the employee: "<<age<<endl;

 }

const int size = 3;
int main()
 {
   int count =1;
   int countt =1;
   employee manager[size];
   for(int i=0;i<size;i++)
    {
     cout<<"Fill the details of the manager is "<<count<<endl;
     manager[i].getdata();
     count++;
    } 
   cout<<endl;
   for(int i=0;i<size;i++)
    {
     cout<<"The details of the manager is "<<countt<<endl;
     manager[i].showdata();
    countt++;
    } 
  return 0;
 } 
