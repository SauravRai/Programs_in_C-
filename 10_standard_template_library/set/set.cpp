//g++ -std=c++17 set.cpp "The compiler will automatically set the version 11 , 14 or 17"
#include<iostream>
#include<set>
#include <iterator> 
#include <bits/stdc++.h> 
using namespace std;

int main()
  {
   //empty set container
   //set<int , greater<int> > set1;
   set<int>  set1;
   // insert elements in random order 
    set1.insert(40); 
    set1.insert(70); 
    set1.insert(90); 
    set1.insert(30); 
    set1.insert(20); 
    set1.insert(10); 
    set1.insert(10); 
    set1.insert(10); 
    set1.insert(50); 

    set <int, greater <int> > :: iterator itr;     
    cout<<"first way"<<endl;
     for (itr = set1.begin(); itr != set1.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
    cout << endl; 

    
    for(auto i=0;i<3;i++)
        cout<<"Sairam";
    for (auto it = set1.begin(); it != set1.end(); it++) 
      {        
        cout<<"second way"<<endl;
        cout << *it << " "; 
      
      }
    

   // assigning the elements from gquiz1 to gquiz2 
    set <int> set2(set1.begin(), set1.end()); 
    cout<<"set2"<<endl;
     for (itr = set2.begin(); itr != set2.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
   
    // remove all elements up to 30 in set2 
    cout << "\nset2 after removal of elements less than 30 : "; 
    set2.erase(set2.begin(), set2.find(30)); 
    for (itr = set2.begin(); itr != set2.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    }     

    int num; 
    num = set2.erase (50); 
    cout << "\nset2.erase(50) : "; 
    cout << num << " removed \t" ; 
    for (itr = set2.begin(); itr != set2.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    }    
  
    return 0;

  }

 //funtions learnt in set is (find, erase, begin,end,iterator,)
