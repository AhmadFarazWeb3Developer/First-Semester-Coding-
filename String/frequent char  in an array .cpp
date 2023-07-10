#include <iostream>
#include <string>
using namespace std;
int main() {
	int frequent=0;
	cout << "\n\tEnter string :: ";
	string str1, str2,character;//decleraing two strings and character is for assigning new character to it
	cin>>str1;
	int len=str1.length();// checking lenght of string
	for (int i = 0; i<len; i++) { //loop for copying one str1 to str2
		str2[i] = str1[i];
	}
	for (int i = 0; i <len; i++) {//outer loop for whole string check
		int count=0;
		for (int j = 0; j <len; j++) {//inner loop for compring str1 index with rest of all indexes of str2
			if (str1[i] == str2[j])//condition
				count++;
		}
		if(count>frequent) {
			frequent=count;
			character=str1[i];//if count is greater then frequent then sr1[i] assigned to character
		}
	}
	cout<<"\n\tMost occuring character in the string is :  "<<character;//printing most frequent character
}