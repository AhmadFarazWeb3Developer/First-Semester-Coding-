

#include<iostream>
using namespace std;
int main() {
	float pi=3.1416;
	float *ptr;
	ptr=&pi;
	cout<<"\n\tValue of pi through pointer is : "<<int(*ptr);
	cout<<"\n\n\tVAddress of pi through pointer is : "<<ptr;
	cout<<*ptr;

}