//Write a CPP program to find out area of a circle using class and object.
#include<iostream>
using namespace std;
  class test
  { public: float r,area;
            void input()
            { cout<<"enter the radius of the circle:"<<endl;
              cin>>r;
	        }
	        void findarea()
	        { area= 3.14*r*r;
			}
			void display()
			{cout<<"the Area of Circle is:"<<area;
			}
  };
   int main()
   { test obj;
   obj.input();
   obj.findarea();
   obj.display();
   return 0;
   }