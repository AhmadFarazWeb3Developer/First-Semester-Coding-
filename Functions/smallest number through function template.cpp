/* 03  Write a program that uses a function template called minimum to
determine the smaller of two arguments. Test the program using integer, character and floating
point number arguments */
#include<iostream>
using namespace std;
template<class t>//template class
t  minimum( t x, t y) {//template class funcion defintion {
	if(x>y)//condition for values
		return y;
	else
		return x;
}
int main() {
	cout<<"\n\n\tThe Smallest float is :: "<<minimum(3.5,3.7);//check for float
	cout<<"\n\n\tThe Smallest number is :: "<<minimum(3,12);//check for int
	cout<<"\n\n\tThe Smallest character is :: "<<minimum('A','a');//check for char

	return 0;
}
