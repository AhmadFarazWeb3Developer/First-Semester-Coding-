#include<iostream>
using namespace std;
int main()
{
	char letter;
	float value;
	cout<<"\tRead the instructons properly\n\n";
	cout<<"\tC for coverting from inches to centimeters\n\n";
	cout<<"\tL for converting from gallons to liters\n\n";
	cout<<"\tK for converting from miles to kilometers\n\n";
	cout<<"\tG for converting from pounds to kilograms\n\n";
	cout<<"\tEnter a value for conversion::";
	cin>>value;
	cout<<"\n\n\tEnter proper code for coversion::";
	cin>>letter;
	switch(letter)
	{
		case 'C':
			cout<<"\t"<<value*2.54<<"centimeters";
			break;
			case 'L':
				cout<<"\t"<<value*3.785<<"liters";
				break;
				case 'K':
					cout<<"\t"<<value*1.609<<"kilometers";
					break;
					case 'G':
						cout<<"\t"<<value*0.4536<<"kilogram";
						break;
					default:
					cout<<"\n\n\t Try again and enter valid code"; 
					
	}
	return 0;
}
