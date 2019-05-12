
#include<iostream>
#include<list>
#include<cstdlib> //for using rand function

using namespace std;

void display(list<int> &lst) 
   {
     list<int> :: iterator p;
     for(p = lst.begin(); p!= lst.end(); p++)
        {
          cout<<"The values in the list is: ";
          cout<<*p;
          cout<<endl;
        }
   }

  int main()
    {
     list<int> lst1; //Empty list
     list<int> lst2(5); //list of 5 values 
     //Insert the elements in the list 1
     
     for(int i=0;i<3;i++) 
       {
         lst1.push_back(rand()/100); 
       }    
     cout<<"The list1 is"<<endl;
     display(lst1);
   
     //Insert the elements in the list 2 using pointer
    
     list<int> :: iterator p;
     for(p = lst2.begin(); p!= lst2.end();p++)
       {
          *p = rand()/100;
       }  
     cout<<"The list2 is"<<endl;
     display(lst2);
      
     //add two elements in the end of the lst1
     lst1.push_back(100);  
     lst1.push_back(200);  
     cout<<"The list1 is"<<endl; 
     display(lst1);
     
     //pop an element from the lst2 
         
     lst2.pop_front();  
     cout<<"The list2 is"<<endl;
     display(lst2);
     //create two more lists

     list<int> listA ,listB;
     listA = lst1; 
     listB = lst2; 
     
     lst1.merge(lst2);
     cout<<"After merging the lst1 is";  
     display(lst1);
     
     cout<<"After sorting and merging the listA is: "<<endl;
     listA.sort();     
     listB.sort();     
     listA.merge(listB);
     display(listA);
     cout<<"After reversing the listA:" <<endl;
     listA.reverse();
     display(listA);

     return 0;   

    }
//function used are push_back , pop_front , begin() , end() , merge , sort ,reverse
