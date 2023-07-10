//Default arguments and inline function 
//A program for Box volume
#include<iostream>
using namespace std;
int boxVolume(int length = 1, int width = 1, int height = 1);
int main() {
	cout<<"\n Default volum of Box is : "<<boxVolume()<< " sq cube";
	cout<<"\n Volum of Box with length 20 : "<<boxVolume(20)<<" sq cube ";
	cout<<"\n Volum of Box with length 20 and Width 30 : "<<boxVolume(20,30)<<" sq cube ";
	cout<<"\n Volum of Box with length 20 With 30 and height 10 : "<<boxVolume(20,30, 10)<<" sq cube ";
	return 0;
}
inline int boxVolume(int length, int width, int height) {
	return length*width*height;
}