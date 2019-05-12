#include<iostream>
#include<map>
#include<string>

using namespace std;

typedef map<string,int> phoneMap;

int main()
   {
    string name;
    int phoneno;
    phoneMap phone;
    //Enter the elements in the phone
    for(int i =0;i<3;i++)
      { 
        cout<<"Enter the key: ";
        cin>>name;
        cout<<"Enter the phone number: ";
        cin>>phoneno;
        phone[name] = phoneno;
      }         

    //add element in the mao
    phone["Jacob"] = 222;
    
    //other way to add
    
    phone.insert(pair<string,int> ("Sravan",4560));
   
    int n = phone.size();
    cout<<"The size is: "<<n<<endl;
    phoneMap :: iterator p;
    for(p = phone.begin(); p != phone.end(); p++)  
      {
        cout<<" key "<<(*p).first <<" name "<<(*p).second<<endl;  
      }   

    cout<<"Enter the name of whose you wish to find the number: "<<endl;
    cin>>name;
    phoneno = phone[name];
    cout<<"The phone number is: "<<phoneno<<endl;
    return 0;
   }
