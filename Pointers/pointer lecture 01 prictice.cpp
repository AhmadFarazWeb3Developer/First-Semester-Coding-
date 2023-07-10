#include<iostream>
using namespace std;
int main()
{/*
int intVar = 50;
int* ptrintVar = &intVar;
cout <<intVar<<"\t\t" << &intVar << endl;
cout <<ptrintVar<<"\t" << &ptrintVar << endl;
cout <<*ptrintVar<<"\t\t" << *(&intVar)<< endl;
//..............................................
//..............................................
int intVar1 = 50;
int intVar2=100;
int intVar3=150;
int* ptrintVar;

ptrintVar = &intVar1;
cout <<intVar1<<"\t\t" << &intVar1 << endl;
cout <<ptrintVar<<"\t" << &ptrintVar << endl;
cout <<*ptrintVar<<"\t\t" << *(&intVar1)<< endl;

ptrintVar = &intVar2;
cout <<intVar2<<"\t\t" << &intVar2 << endl;
cout <<ptrintVar<<"\t" << &ptrintVar << endl;
cout <<*ptrintVar<<"\t\t" << *(&intVar2)<< endl;

ptrintVar = &intVar3;
cout <<intVar3<<"\t\t" << &intVar3 << endl;
cout <<ptrintVar<<"\t" << &ptrintVar << endl;
cout <<*ptrintVar<<"\t\t" << *(&intVar3);
//..........................................
//............................................
int intVar1 = 50;
int intVar2=100;
char charVar='D';
int* ptrintVar = &intVar1;
char* ptrcharVar = &charVar;
cout <<"\nInt Pointer pointing to value :\t"<<*ptrintVar<<endl;
cout <<"Char Pointer pointing to value:\t"<<*ptrcharVar<<endl;
*ptrintVar = 200;
*ptrcharVar = 'M';
cout <<"\nInt Pointer pointing to value :\t"<<*ptrintVar<< endl;
cout <<"Char Pointer pointing to value:\t"<<*ptrcharVar<< endl;
cout <<"intVar1 value :\t"<<intVar1<< endl;
cout <<"charVar value:\t"<<charVar<< endl;
intVar2 = *ptrintVar;
cout <<"\nInt Pointer pointing to value :\t"<<*ptrintVar<< endl;
cout <<"intVar2 value :\t"<<intVar2<< endl;
*/
//..........................................int intVar1 = 30;
int intVar1;
int intVar2=50;
const int intVar3=100;
int* ptrint1 = &intVar1;
int* const ptrint2 = &intVar1;
const int* ptrint3 = &intVar1;
const int* const ptrint4 = &intVar1;
cout <<"\nConstant Pointer to Non-constant data"<<endl;
cout <<"\n int* const ptrint2 = &intVar1; \t"<< endl;
*ptrint2=10;//means value of intVar1 is 10 and not be changed 
int  *ptrint=&intVar2;
cout<<"\n\n\t"<<*ptrint;
cout <<"\n *ptrint2 = 10; \t //Allowed through prtint2 "<< endl;
cout <<"\n ptrint2 = &intVar2; \t //not allowed, ptrint2 is constant"<< endl;
cout<<endl;
//............................................

return 0; 
}