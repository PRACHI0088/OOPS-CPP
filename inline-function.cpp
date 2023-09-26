/* Write a CPP program to find out maximum of
two numbers using ternary operator and inline function.*/
#include<iostream>
using namespace std;
inline int max(int a, int b)
{ return a>b?a:b;
}
 int main()
 { int n,m;
   cout<<"enter the first no. \n";
   cin>>n;
   cout<<"enter the second no. \n";
   cin>>m; 
   cout<<"the maximum no. is:\n";
   cout<<max(n,m);

   return 0;
 }