//Overloading operators using friend
#include<iostream>

using namespace std;
const int size =3;
class vector
   {
    int v[size];
    public:
       vector(); //empty constructor
       vector(int *x); //passing a array using pointer
       friend vector operator*(int , vector);
       friend vector operator*(vector , int);
       void display(); 
   };

 vector :: vector()
   {
    for(int i =0;i<size;i++)
      v[i] =0;
  } 

 vector :: vector(int *x)
   {
    for(int i =0;i<size;i++)
      v[i] =x[i];
   }

  vector operator*(int a , vector b)
   {
     vector c;
     for(int i = 0;i<size;i++)
        c.v[i] = a * b.v[i]; 
     return c;  
   } 

  vector operator*(vector a , int b)
   {
     vector c;
     for(int i = 0;i<size;i++)
        c.v[i] = a.v[i]*b; 
     return c;  
   }

  void vector::display()
   {
    for(int i = 0;i<size;i++)
       cout<<v[i]<<endl;
   }

  int x[size]={1,2,3};
  int main()
   {
    vector m; //empty vector;
    vector n = x;
    m.display();
    n.display();
    vector p,q;
    p = 2*n;
    p.display();
    q = n*2;
    q.display();
    cout<<"Sairam";
    return 0;
   }









    
