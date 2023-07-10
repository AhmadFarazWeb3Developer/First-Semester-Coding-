	/*Password is 1234 more improvement can be done 
	but required time and difficult to  mange by one person
	. how to use back commad in it ?
	*/
#include<iostream>
using namespace std;
int main()
{
	

	  
	int namount,n, price ;
	int password=1234;
	int amount=50000;
	cout<<"\n\t         ******************";
	cout<<"\n\t         *                *";
	cout<<"\n\t         * WELCOME TO ATM *";
	cout<<"\n\t         *                *";
	cout<<"\n\t         ******************";
	cout<<"\n\n\t\tEnter four digit  password :: ";
	cin>>password;
	if(password == 1234)
	{
		do {
		cout<<"\n\n\t\t************************************";
		cout<<"\n\n\t\t*   select one of the following    *";
		cout<<"\n\n\t\t*   1 for checking current amount  * ";
		cout<<"\n\n\t\t*   2 for withdraw                 *";
		cout<<"\n\n\t\t*   3 for fast cash with draw      *";
		cout<<"\n\n\t\t*   4 for Exit                     *";	
		cout<<"\n\n\t\t************************************";
		cout<<"\n\n\t\t Enter the number :: ";
		cin>>n;
		}
	while(n == 4);// this art is peding to use alteration again and again
	{// little problem is still remaining
	switch(n)
	{
	case 1:
	    {
		cout<<"\n\t\tThe current amount is "<<amount<<"/- PKR"; 
		break;
	    }
	case 2:
	    {
		cout<<"\n\t\tEnter required amout";
		cin>>price;
		if(price<=50000)
		{
		cout<<"\n\t\tRecive your amount :: "<<price;
		namount=amount-price;
		cout<<"\n\t\tcurrent amount in account is :: "<<namount<<"/- PKR";
	    }
	else{
		cout<<"\n\t\t You cannot enter more than 50000/- PKR";
	    }
	break;
	    }
	case 3:
	{
		cout<<"\n\t\tSelect amount";
		cout<<"\n\t\t 5 for 5000";
		cout<<"\n\t\t 10 for 10000";
		cout<<"\n\t\t 15 for 15000";
		cout<<"\n\t\tEnter the number";
		cin>>n;
		if (n==5 || n==10 || n==15){
	switch(n)
		
		{
		
			case 5:
			{
				cout<<"\n\t\tRecive your amonut = 5000/- PKR";
				namount=amount-5000;
				cout<<"\n\t\tYour currnt amount is ::"<<namount<<"/- PKR";
				break;
			}
			case 10:
			{
				cout<<"\n\t\tRecive your amount  =  10000/- PKR";
				namount=amount-10000;
				cout<<"\n\t\tYour current amount is :: "<<namount<<"/- PKR";
				break;
			}
			case 15:
			{
				cout<<"\n\t\tRecive your amount = 15000/- PKR";
               namount=amount-15000;
			    cout<<"\n\t\tYour current amount is :: "<<namount<<"/- PKR";
				break; 
			}
	}
	}
	else {
	cout<<"\n\t\tYou enterd wrong fast cash amount";
	break;
	}
		break;   
	   }

	   
			default:
				{
					cout<<"\n\t\t You Exited the transaction";
					cout<<"\n\t\t Your are most welcome for next time";
					break;
	             } 
		}}}
		else
		{
		cout<<"\n\t\tEnter proper password";
	    }
return 0;
}
