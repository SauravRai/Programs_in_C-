//Program illustrates objects as arguments
#include<iostream>
using namespace std;

class Time
   {
    int hours;
    int minutes;
    public:
     void gettime(int a, int b)
       {
         hours = a;
         minutes = b;
       }
     void showtime()
        {
         cout<<"hours"<<hours<<endl;
         cout<<"minutes"<<minutes<<endl;
        }
     void sumtime(Time,Time);       
   };


void Time::sumtime(Time t1 ,Time t2) //t1 and t2 are objects
  {
    minutes = t1.minutes + t2.minutes;
    hours = minutes/60;
    minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours;    
  }
  
int main()
  {
   Time t1,t2,t3;
   t1.gettime(2,35);
   t2.gettime(3,45);
   t3.sumtime(t1,t2);
   cout<<"t1 time"<<endl;
   t1.showtime();
   cout<<"t2 time"<<endl;
   t2.showtime();
   cout<<"t3 time"<<endl;
   t3.showtime();
  return 0;
  }
