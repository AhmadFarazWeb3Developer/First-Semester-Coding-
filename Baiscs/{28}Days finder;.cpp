/* This program is very important for finding the
number of days of a month in a year*/
//here i learn how to use modulus.

#include<iostream>
using namespace std;
int main()
{
	int month,year,noDays;
	cout<<"\n\n\tEnter year::";
	cin>>year;
	cout<<"\n\n\tEnter month::";
	cin>>month;
switch(month)
{
	case 1:
		cout<<"\n\n\tJanuary/"<<year;
		noDays=31;
		break;
       case 2:
       	{
       		cout<<"\n\n\tFeburary/"<<year;
       		if((year%400==0)||(year%4==0&&year%100 !=0)){
	
       		cout<<"\n\n\tLeap year::";
		   noDays=29;}
       		else
       		noDays=28;
       		break;
		   }
		   case 3:
		   	{
		   		cout<<"\n\n\tMarch/"<<year;
		   		noDays=31;
		   		break;
			   }
			   case 4:
			   	{
			   		cout<<"\n\n\tApril/"<<year;
			   		noDays=30;
			   		break;
				   }
				   case 5:
				   	{
				   		cout<<"\n\n\tMay/"<<year;
				   		noDays=31;
				   		break;
					   }
					   case 6:
					   	{
					   		cout<<"\n\n\tJune/"<<year;
					   		noDays=30;
					   		break;
						   }
						   case 7:
						   	{
						   		cout<<"\n\n\tJuly/"<<year;
						   		noDays=30;
						   	    break;
			                    }
			                    case 8:
			                    	{
			                    		cout<<"\n\n\tAugust/"<<year;
			                    		noDays=31;
			                    		break;
									}
									case 9:
										{
											cout<<"\n\n\tSeptermber/"<<year;
											noDays=30;
											break;
										}
										case 10:
											{
												cout<<"\n\n\tOctober/"<<year;
												noDays=30;
												break;
											}
											case 11:
												{
													cout<<"\n\n\tNovember/"<<year;
													noDays=30;
													break;
												}
												case 12:
													{
														cout<<"\n\n\tDecember/"<<year;
													     break;
													}
									}
													cout<<":has"<<noDays<<":Day";
													
													return 0;


}
