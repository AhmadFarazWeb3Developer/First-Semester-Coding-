#include <iostream>
#include<string>
using namespace std;
 fun(char ch) {
	 ch=ch-32;
	return ch;
}
int main() {
	string name;
	char capital[100];
	char word;
	cout << "\n\n\tEnter name : ";
	getline(cin>>ws,name);
	for (int  i = 0; i < name.length(); i++) {
		word=name[i];
		capital[i]=fun(word);
	}
	cout<<"\n\t";
	for (int i = 0; i <name.length(); i++) {
		cout<<capital[i];
	}
}