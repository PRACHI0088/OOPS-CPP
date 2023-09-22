/*Write a CPP program to compute volume of cube, cuboid, cylinder
 and sphere using function overloading. */
 #include<iostream>
 using namespace std;
 int volume(int);   //volume of cube l^3
 int volume(int, int, int);  //volume of cuboid lh
 float volume(float, float); //volume of cylinder pi(r^2)h
 float volume(float); //volume of sphere 4/3pi(r^3)
 
  int main()
  { int s,l,b,h;
    float ch,cr,sr;
    cout<<"Enter the side of the cube: \n";
    cin>>s;
    cout<<"\n Enter the length, breadth, and height of the cuboid: \n";
    cin>>l>>b>>h;
    cout<<"\n Enter the radius and height of the cylinder: \n";
    cin>>cr>>ch;
    cout<<"\n Enter the radius of the sphere:\n";
    cin>>sr;
    
    cout<<"\n Volume of CUBE is:"<<volume(s)<<endl;
    cout<<"\n Volume of CUBOID is:"<<volume(l,b,h)<<endl;
    cout<<"\n Volume of CYLINDER is:"<<volume(cr,ch)<<endl;
    cout<<"\n Volume of SPHERE is:"<<volume(sr)<<endl;
    return 0;
  }
  
     int volume(int side) // function to define volume of cube
     { return(side*side*side);	 }
  
     int volume(int x, int y, int z)// function to define volume of cuboid
     { return(x*y*z);	 }
     
     float volume(float r, float h)// function to define volume of cylinder 
     { return(3.14*r*r*h);	   }  
     
     float volume(float r1)// function to define volume of sphere
     { return ((4*3.14*r1*r1*r1)/3);	 }