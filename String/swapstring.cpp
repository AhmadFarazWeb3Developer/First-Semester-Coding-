//String Example3
#include<iostream>
#include<string> 
using namespace std;
int main() { 
string str1("Stay Home");
string str2 = "Stay Safe";
cout<<"str1 = " << str1 << endl;
cout<<"str2 = " << str2 << endl;
str1.swap(str2);
// str2.swap(str1) give same result 
cout<<"\nAfter Swaping str1 and str2 " <<endl;
cout<<"str1 = " << str1 << endl;
cout<<"str2 = " << str2 << endl;
return 0;
