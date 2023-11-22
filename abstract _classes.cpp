//Write a CPP program to illustrate the concept of abstract classes.
#include<iostream>
using namespace std;

 class shape
 { protected: float d1,d2;
   public: void set_dimension()
           { cout<<"enter the dimnesions:"<<endl;
             cin>>d1>>d2;
		   }
		   virtual float area()=0; //pure virtual function.
 };  //end of class shape
 
   class triangle:public shape
   { public: float area()
             { return 0.5*d1*d2;
			 }
   };
   
   class rectangle: public shape
   { public: float area()
             { return d1*d2;
			 }
   };
   
   int main()
   { triangle t;
     float at;
     t.set_dimension();
     at=t.area();
     cout<<"area of triangle:"<<at<<endl;
     
     rectangle r;
     float ar;
     r.set_dimension();
     ar=r.area();
     cout<<"area of rectangle:"<<ar<<endl;
     return 0;
   }