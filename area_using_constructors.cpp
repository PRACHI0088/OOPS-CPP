//Write a CPP program to find out area of rectangle, square and circle 
//using constructor overloading of two parameterized and one default constructor
#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;

class area
{
        float ar;
        public:
                area()
                { int x; 
				  ar=pow(x,2);
                }

                area(float r)
                {
                        ar=3.14*r*r;
                }
                area(float l, float b)
                {
                        ar=l*b;
                }
                void display()
                {
                        cout<<"\n Area : "<<ar;
                }
};
int main()
{
        int ch;
        float x, y;
        do
        {
                cout<<"\n\n 1. Area of Circle";
                cout<<"\n 2. Area of Rectangle";
                cout<<"\n 3. Area of square";
                cout<<"\n 4. Exit";
                cout<<"\n\n Enter Your Choice : ";
                cin>>ch;

                switch(ch)
                {
                        case 1 :
                        {
                                cout<<"\n Enter Radius of the Circle : ";
                                cin>>x;
                                area a1(x);  //Class area, object is created : a1
                                a1.display();
                        }
                        break;

                        case 2 :
                        {
                                cout<<"\n Enter Length and Breadth of the Rectangle : ";
                                cin>>x>>y;
                                area a2(x,y);
                                a2.display();
                        }
                        break;

                        case 3 :
                        {
                                cout<<"\n Enter Side of the Square : ";
                                cin>>x;
                                area a3(x);
                                a3.display();
                        }
                        break;

                        case 4 :
                                exit(0);

                        default :
                                cout<<"\n\n Invalid Choice ...";
                }
        } while(ch!=4);
        return 0;
}