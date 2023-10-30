//Write a CPP program to print two numbers using default constructor.
#include<iostream>
using namespace std;
  class test
  { private: int a,b;
    public: test()
            { a=10; b=20;
			  cout<<"a="<<a<<endl<<"b="<<b<<endl; 
			}
  };  //end of class
  
  int main()
  { test t;
    return 0;
  }