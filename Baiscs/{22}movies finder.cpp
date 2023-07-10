/* This program is for finding the movies by
using letters and break statement */
#include<iostream> 
using namespace std;
int main()
{
	char letter;
	cout<<"\tRead carefully code for movies type\n";
	cout<<"\tA for adventure movies\n";
	cout<<"\tC for comdey movies\n";
	cout<<"\tF for family movies\n";
	cout<<"\tH for horror movies\n";
	cout<<"\tS for science fiction movies\n";
	cout<<"\tEnter the code for movie::";
	cin>>letter;
	switch(letter)
	{
		case 'A':
			cout<<"\n\tAdvendure movies\n";
			break;
			case 'C':
				cout<<"\tComadey movies\n";
				break;
			    	case 'F':
				    cout<<"\tFamily movies\n";
				    break;
				        case 'H':
					    cout<<"\tHorror movies\n";
					    break;
					        case 'S':
					        cout<<"\tScience fiction movies\n";
					        break;
					         default:
					         	cout<<"\tTry again and enter valid code";
					
	}
	return 0;
}
