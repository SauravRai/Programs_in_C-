//example showing the class template
#include<iostream>
using namespace std;

template <class T>
class Vector
    {
        T* v; //type T vector
     public:
       Vector()
         {
           v = new T[3];
           for(int i =0;i<3;i++)
               v[i] =0; 
           cout<<"sairam1"<<endl;
         } 
        
       Vector(T *a)
          {
          cout<<"Hie"<<endl;
           for(int j=1;j<2;j++)
              v[j] = a[j];   
           cout<<"sairam2"<<endl;
          }
          
       T operator *(Vector &y) //y is an object here
          {
           T sum =0;
            for(int k = 0;k<3;k++)
               {
                  sum += this->v[k] * y.v[k];
               }  
            return sum;
          }
    };


 int main()
    {
      int x[3] ={1,2,3};
      int y[3] ={4,5,6};
      Vector<int> v1(x);

      Vector<int> v2(y);  //creates empty vector   
      cout<<"one"<<endl;

 /*
      cout<<"three"<<endl;
//      v2 = y;
      cout<<"four"<<endl; */
     // int R = v1 * v2;
      //cout<<"The value of R is: "<<R<<endl;  
     
      return 0;
   }

