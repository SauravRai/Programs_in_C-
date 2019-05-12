//Implementation of vector is like and array
#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v)
  {
    for(int i = 0;i<v.size();i++)
      {
       cout<<v[i]<<endl;
      }
  } 

int main()
  {
    vector<int> v;
    int x;
    cout<<"Enter the five elements in the vector: ";

    for(int i =0;i<5;i++)
      {
          cin>>x;
          cout<<endl;
          v.push_back(x);   
      }  
    cout<<"The size of the vector is: "<<v.size()<<endl;       
    display(v);

    //inserting elements through iterator
    vector<int> :: iterator itr = v.begin();
    itr = itr+3;
    v.insert(itr,1,9);
     
    display(v);
    //remove 4th and 5th element
    v.erase(itr,itr+2);
    display(v);
   return (0);   
  }

