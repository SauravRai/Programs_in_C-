#include<iostream>

using namespace std;

class B{
  	int a;
	 public:
	 	int b;
		void get_ab();
		int get_a();
		void display_a();
};

  class D: public B
    {
      int c;
      public:
    	int multiply();
    	void show();
   };

  void B::get_ab()
   {
   	a = 5;
   	b = 10;
   } 

  int B::get_a()
   {
   	return a;
   } 

  void B::display_a()
    {
     cout<<"The value of a is:"<<a<<endl;
    }

  int D::multiply()
    {
      c = get_a() * b;
      return c;
    } 

  void D::show()
   {
    cout<<"The value of c is"<<c<<endl;
   }
int main()
    {
     D d1;
     d1.get_ab();
     //d1.get_a();
     d1.display_a();
     d1.multiply();
     d1.show();

     d1.b = 20;
     d1.multiply();
     d1.show();
     
    return 0;
    }

