#include<iostream>
using namespace std;
void getchar(char* arr, int S);
void putchar(char* arr, int S);
void reversechar(char* arr, int S);
int main() {
	/*
		//int array[5];
		//cout<<array;
		//cout<<"\n"<<&array[0];
		int intArray[] = {5, 10, 15, 20,25};
		//cout<<*intArray;// displays 5
		//int *ptrInt = intArray;
		//cout << ptrInt[2]; // displays 15
		for(int j=0; j<5; j++)
			cout << *(intArray+j) << endl;
			const int Size = 5;
			char charArray[Size];
			char* ptrint = charArray;
			cout<<"Please enter 5 characters :"<<endl;
			getchar(ptrint, Size);
			cout<<"You enter these characters :"<<endl;
			putchar(ptrint, Size);
			char* ptrintr = &charArray[4];
			cout<<"Your characters in reverseorder:"<<endl;
			reversechar(ptrintr,Size);
	int* ptrintArray[3];
	int var1=10;
	int var2=20;
	int var3=30;
	ptrintArray[0]=&var1;
	 ptrintArray[1]=&var2;
	ptrintArray[2]=&var3;
	for(int j=0; j<3; j++) //for each element,
	cout<<"  "<<ptrintArray[j]<<endl;
		for(int j=0; j<3; j++) //for each element,
		  cout << *ptrintArray[j] << endl;
	int var=90;
	int* ptr1 = &var;
	cout<<"\n\tAddress of ptr 1 :: "<<&ptr1;
	cout<<"\n\tAddress of Var :: "<<&var;
	int** ptr2 = &ptr1;
	cout<<"\n\tAddress of ptr 2 :: "<<&ptr2;
	cout<<"\n\tValue at ptr 2 :: "<<**ptr2;
	cout<<"\n\tAddress of Var :: "<<&var;
	int ***ptr3=&ptr2;
	cout<<"\n\n\tAddress of ptr 3 :: "<<&ptr3;
	cout<<"\n\tValue at ptr 3 :: "<<***ptr3;
	cout<<"\n\tAddress of Var :: "<<&var;*/
int  var1=20;
const int * ptr1=&var1;
cout<<*ptr1;
 int *ptr2=&var1;
 *ptr2=30;
 cout<<"\n"<<*ptr2;
	return 0;
}
void getchar(char* arr, int S) {
	for (int i = 0; i<S; i++)
		cin>>*(arr+i);
	cout<<endl;
}
void putchar(char* arr, int S) {
	for (int i = 0; i<S; i++)
		cout <<arr[i]<<" ";
	cout<<endl;
}
void reversechar(char* arr, int S) {
	for (int i = 0; i<S; i++)
		cout <<*(arr-i)<<" ";
	cout<<endl;
}
