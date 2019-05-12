//Program illustrating multilevel inheritance
#include<iostream>

using namespace std;

class student
   {
    protected:
     int roll_number; 
    public:        
     void get_no(int); 
     void display_no();   
   };

void student::get_no(int a)
  {
   roll_number = a;
  }

void student::display_no()
  {
   cout<<"The value of roll no is"<<roll_number<<endl;
  }

class test : public student 
   {
    protected:
      float sub1;
      float sub2;
    public: 
      void get_marks(float ,float);      
      void display_marks();       
   };


void test::get_marks(float a, float b)
  {
   sub1= a;
   sub2= b;
  }

void test::display_marks()
  {
    cout<<"The marks are"<<sub1<<" and"<<sub2<<endl;
  }
 
class sports
  {
   protected: 
     float score;
   public:
     void get_score(int a)
       { 
        score =a; 
       }
     void put_score()
      {
       cout<<"The score is: "<<score;
      }
  };

class result : public test , public  sports
  {
    float total;
    public: 
     void total_marks();   
  };
 
 void result::total_marks()
   {
    //result r;
    total = sub1 + sub2 + score;
    display_no();
    display_marks(); 
    put_score();
    cout<<"The total marks of the subjects are: "<<total<<endl;
    cout<<endl;  
   }

  int main()
   {
     result r;
     r.get_no(17558);
     r.get_marks(87,98);
     r.get_score(89);
     //r.display_marks();   
     r.total_marks();
    return 0;
   }

