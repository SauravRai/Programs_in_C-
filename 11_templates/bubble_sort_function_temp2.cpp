#include<iostream>

using namespace std;

template <class T>

void swap(T *x, T *y)
   {
     T temp;
     temp = *x;
     *x = *y;
     *y = temp;
   }


template <class X>
void bubble_sort(X arr[] , int n)
  {
   for(int i =0;i<n-1;i++)
     for(int j = 0;j<n-i-1;j++)
       if(arr[j]>arr[j+1])
         swap(&arr[j],&arr[j+1]);
  }
 
  int main()
    {
      int a[5] = {3,2,6,5,8};
      float b[5] = {1.2,4.1,3.2,2.1,7.2};
      bubble_sort(a,5); 
      cout<<"After sorting a: "<<endl;
      for(int i=0;i<5;i++)
          cout<<a[i]<<" "<<endl; 

      bubble_sort(b,5); 
      cout<<"After sorting b: "<<endl;
      for(int j=0;j<5;j++)
          cout<<b[j]<<" "<<endl; 
      return 0;
    }
