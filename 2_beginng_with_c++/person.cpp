//	CLASS EXAMPLE CODE
#include<iostream>
using namespace std;

class person{
            char name[30];
            int age;
            public:
                void getdata(void);
                void display(void);
            };

void person :: getdata(void)
{
 cout<<"Enter the name of the person"<<endl;
 cin>>name;
 cout<<"Enter the age of the person"<<endl;
 cin>>age;
}

void person :: display(void)
{
 cout<<"The name of the person"<<name<<endl;
 cout<<"The age of the person"<<age<<endl;
}

int main()
{
 person p1, p2;
 p1.getdata();
 p1.display();

 p2.getdata();
 p2.display();
return 0;
}
