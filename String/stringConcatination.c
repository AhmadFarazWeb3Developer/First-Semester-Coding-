//String Example2
#include<iostream>
#include<string>
using namespace std;
int main() { 
string str1("Stay Home");
string str2 = "Stay Safe";
string str3;
str3 = str1; 
cout<<"str3 = " << str3 << endl;
str3 = str1+str2;
cout<<"str3 = " << str3 << endl;
str3 = str1 + " " + str2;
cout<<"str3 = " << str3 << endl;
return 0;
}