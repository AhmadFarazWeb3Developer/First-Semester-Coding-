#include<iostream>
using namespace std;
void fun1();
void fun2();
int global_Var=10;
int main () {
	int main_local_var= 5;
	cout<<"\n\n main function local variable :"<<main_local_var;
	 global_Var= global_Var + main_local_var;
	cout<<"\n Gobal variable in main function :"<<global_Var;
	fun1();
	fun2();
	return 0;}
void fun1() {
	int local_var=3;
	cout<<"\n fun1 function local variable : "<<local_var;
	global_Var= global_Var + local_var;
	cout<<"\n Gobal variable in fun1 function : "<<global_Var;}
void fun2() {
	int local_var=8;
	cout<<"\n fun2 function local variable : "<<local_var;
	global_Var= global_Var - local_var;
	cout<<"\n Gobal variable in fun2 function : "<<global_Var;
}
