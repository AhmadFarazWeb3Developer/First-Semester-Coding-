//pass by reference value
#include<iostream>
using namespace std;
int main() {
	int mVar=5,a=1, b=2;
	int *ref=&a;
	*ref=10;
	cout<<*ref<<endl;
	ref=&b;
	*ref=20;
	cout<<*ref<<endl;
	cout<<a<<endl;
	cout<<b;



}


