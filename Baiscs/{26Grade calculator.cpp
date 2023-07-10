#include<iostream>
using namespace std;
int main()
{
	float percentage;
	int marks;
	cout<<"\tEnter Marks::";
	cin>>marks;
 percentage=(marks/1100.0)*100;
	if(percentage>=80&&percentage<=100)
	{
		cout<<"\tGrade is A+\n\n";
	     cout<<"\tOutstanding\n\n";
	}
	else if(percentage>=70&&percentage<80)
	{
		cout<<"\tGrade is A\n\n";
		cout<<"\tVery Good";
	}
	else if(percentage>=60&&percentage<70)
	{
		cout<<"\tGrade is B\n\n";
		cout<<"\tGood";
	}
	else if(percentage>=50&&percentage<60)
	{
		cout<<"\tGrade is C\n\n";
		cout<<"\tlittle satisfied\n\n"; 
	}
	else if (percentage>=40&&percentage<50)
	{ 
	    cout<<"\tGrade is D\n\n";
	    cout<<"\tWarning\n\n";
	    cout<<"\tImprove\n\n";
	}
	else if (percentage>=33&&percentage<40)
	{
		cout<<"\tGrade is E\n\n";
	    cout<<"\tserious warning\n\n";
	}
	else if(percentage<33&&percentage>=0)
	{
		cout<<"\tGrade is F\n\n";
		cout<<"\tResult::Fail";
	}
	else
	{
	cout<<"\tEnter proper marks with in 1100 range\n\n ";	
	}
	return 0;
}

