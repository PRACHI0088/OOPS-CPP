// to swap two numbers using function call by address.
#include<iostream>
using namespace std;
void swap(int *, int *);
int main()
{ int a,b;
  cout<<"Enter the numbers to be swapped. \n";
  cin>>a>>b;
  cout<<"Numbers BEFORE Swapping are: \t"<<a<<"\t"<<b; 
  cout<<"\n The SWAPPED numbers are:\t";
  swap(&a,&b);
  return 0; 
}
   void swap(int *x, int *y)
   { int temp;
     temp= *x;
     *x= *y;
     *y=temp;
     cout<<*x<<" "<<*y;
   }











