//Write a CPP program to find out volume of three cubes using class and object.
#include<iostream>
using namespace std;
  class volume
  { private: int a,vol;
    public: void get();
            void show();
  };
   void volume::get()
   { cout<<"enter side"<<endl;
     cin>>a;
   }
   void volume::show()
   { vol=a*a*a;
     cout<<"volume="<<vol<<endl;
   }
    int main()
    { volume a1,a2,a3;
      a1.get();
      a1.show();
      a2.get();
      a2.show();
      a3.get();
      a3.show();
      return 0;
	}