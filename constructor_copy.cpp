//Write a CPP program to copy above parameterized object into another object using copy constructor.
#include<iostream>
using namespace std;
  class complex
  { private: int a,b;
    public:  complex(int x1, int y1)
	         { a = x1; b = y1; }
	        
			complex(complex &c)
            { //cout<<"copy is called"<<endl;  //just to check if this function is called or not.
			  this->a=c.a;  
			  this->b=c.b; }
			void show_data()
			{ cout<<"A="<<a<<endl<<"B="<<b<<endl; }
  };
        int main()
        { complex c1(3,4);
          complex c2=c1;
          cout<<"c2 = \n";
          c2.show_data();
          cout<<endl;
          complex c3(c1);
          cout<<"c3 = \n";
		  c3.show_data();          
          return 0;
		}