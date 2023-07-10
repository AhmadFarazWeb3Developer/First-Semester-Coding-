//String Example2
#include<iostream>
#include<string>
using namespace std;
int main() { 
    string str1="ahmad";
    string str2="faraz";
    string str3="nadar";
cout<<"str1 length is " << str1.length() << endl;
cout<<"str2 length is " << str2.length() << endl;
cout<<"str3 length is " << str3.length() << endl;
str3 = str1+str2;
cout<<"str1 length is " << str1.length() << endl;
cout<<"str2 length is " << str2.length() << endl;
cout<<"str3 length is " << str3.length() << endl;
str3 = str1 + " " + str2;
cout<<"str3 size is " << str3.size() << endl;
return 0;
}