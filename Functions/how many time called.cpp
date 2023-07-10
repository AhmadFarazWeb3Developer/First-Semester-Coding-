#include<iostream>
using namespace std;
int fun(int a)
{
	if(a==1)
	return 1;
	else 
	return a+fun(a-1);
}
int main()
{
	
	int x=5;
	 cout<<fun(x);
}
	
	/*
	//01
float f=10.5;
float p=2.5;
float* ptr=&f;
//(*ptr)++;
*ptr=p;
cout<<*ptr<<" "<<f<<" "<<p<<endl;
// 02
int a=7;
 int b=17;
 int *ptr1=&b;
*ptr1=a;
cout<<a<<"  "<<b<<endl; 
//03 it will give blank screen because 0 memory address dosnt exists
/*int *ptr2=0;
 int c=10;
  *ptr2=c;
   cout<<*ptr2;

//04 which of the following give the address of b pointed by a
b=10;
int *ptr3=&b;
//ptr gives the address 

//05 output b
char ch='a';
char *ptr4=&ch;
ch++;
cout<<*ptr4<<endl;
//06  output 7 and garbidge value
 a=7;
 int *c=&a;
  c=c+1;
   cout<<a<<" "<<*c<<endl;
   
 // 07 Assume the memory address of variable ‘a’ is 400 (and an integer takes 4 bytes),
 // what will be the output -
 int g = 7;
int *j = &g;
j = j + 3;
cout<< j << endl;  
/* c stores address of a (and points to value of a).
address that c stores is incremented by 3.
since c is of type int, increment in bytes is 3 integer addresses, that is 3*4 = 12 bytes.
therefore 400 + 12 = 412

//08 Assume memory address of variable ‘a’ is : 200 and a double variable is of size 8 bytes, what will be the output -
double i = 10.54;
double *d = &i;
d = d + 1;
cout  << d << endl;
//output 208

//09 
  int k[5];
int *e;
cout<<sizeof(k)<<"  "<<sizeof(*e)<<endl;

//10 
int  l[] = {1, 2, 3, 4};
cout << *(l) << " " << *(l+1)<<endl;
//Explanation: *a points to first value of array a = 1. *(a+1) = *(second value of array a) = 2.

//11 Assume that address of 0th index of array ‘a’ is : 200. What is the output -
int m[3] = {1, 2, 3};
cout << *(m + 2)<<endl;


//12 
int n[] = {1, 2, 3, 4};
//int *ptr7 = n++;// you will get error
//cout << *ptr7 << endl;
//Explanation: entire array’s address can not be shifted by four bytes

//13
int arr[]={4,5,6,7};
int *ptr8=arr+1;
cout<<(*arr+9);

//14 ?
char o[] = "xyz";
char *t = &o[0];
cout << t << endl;
//Explanation: c stores the address of start of array b (and not of it’s values)
// So the entire array is printed when c is printed
// 15
char s[]= "hello";
char *u = s;
cout << s[0] << " " << u[0];
}*/