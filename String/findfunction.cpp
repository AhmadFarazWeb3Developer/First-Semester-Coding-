//String Example4
#include<iostream>
#include<string> 
using namespace std;
int main() { 
string str1("Stay Home, Stay Safe");
string str2 = "This is programming fundamentals class, this is online class";
string str3="Home";
cout<<"\n----- find function on Strings------ \n " <<endl;
cout<<str1.find("Stay") << endl;
cout<<str2.find("class") << endl;
cout<<str1.find(str3) << endl;
cout<<str2.find('p') << endl;
cout<<str1.find('S',5) << endl;
cout<<str2.find("is",10) << endl;
}