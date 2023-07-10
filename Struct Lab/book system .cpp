/*Use structures to show the details of book. User should
 enter multiple book names, author names
and number of pages of a book. This is similar to the above example*/
#include<iostream>
#include<string>
using namespace std;
struct Booknames {
	string books[3];
};
struct authornames {
	string author[3];
};

struct numPages {
	int Npages[3];
};
int main() {
	Booknames Book;
	authornames authors;
	numPages pages;
	string namesofbooks[3],namesofall[3];
	int allpages[3];
	for(int i=0; i<3; i++) {
		cout<<"\n\n\tEnter "<<i+1<<" Book name ::";
		getline(cin >> ws,Book.books[i]);
		namesofbooks[i]=Book.books[i];
		cout<<"\n\n\tEnter "<<i+1<<" Author name ::";
		getline(cin >> ws,authors.author[i]);
		namesofall=authors.author[i];
		cout<<"\n\n\tEnter "<<i+1<<" Number book pages ::";
		cin>>pages.Npages[i];
	}
    for (int i = 0; i < 3; i++)
    {
        cout<<"\n\tName of "<<i+1<<"book "<<namesofbooks[i];
    } 
for (int i = 0; i < 3; i++)
    {
        cout<<"\n\tName of "<<i+1<<" Author "namesofall[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<"\n\tpages of "<<i+1<<"book";
    }
    


}