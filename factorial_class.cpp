//Write a CPP program to find out factorial of a number using class and object.
#include<iostream>
using namespace std;
 class test
  { public: int factorial(int x)
            {int f=1;
              for(int i=1;i<=x;i++)
              {f=f*i;
			  }
			  return f;
			}
  };
    int main()
    { int x,f;
      cout<<"enter a number:"<<endl;
      cin>>x;
      test obj;
      f=obj.factorial(x);
      cout<<"factorial is:"<<f<<endl;
      return 0;
	}