#include<iostream>
using namespace std;
int main()
{
	float r,vol,Area;
	cout<<"radius of sphere\n";
	cin>>r;
	cout<<"\n Area of sphere::";
	Area=4*3.1416*r*r;
	
	cout<<Area;
	cout<<"mm";
     cout<<"\n";
	
	cout<<"\n volume of sphere::";
	
    vol=((4.0/3.0)*(3.1416)*(r*r*r));
	cout<<vol;
	cout<<"mm";
	return 0;
	}
