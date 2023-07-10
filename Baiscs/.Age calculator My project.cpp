

/* Its is my age calculato progect where i used switch and if else if
loops frequntly */

#include<iostream>
using namespace std;
int main()
{
	
	int cyr, byr,years, cm,bm,months,cd,bd,days,month,nyr,ncm;
	cout<<"\tEnter current year::";
	cin>>cyr;
	cout<<"\n\n\tEnter Birth year::";
	cin>>byr;
	cout<<"\n\n\tEnter Current Month::";
	cin>>cm;
	cout<<"\n\n\tEnter Birth Month::";
	cin>>bm;
    cout<<"\n\n\tEnter Current date::";
	cin>>cd;
	cout<<"\n\n\tEnter Birth  date::";
	cin>>bd;

	//Condition 1:
	
	if(cm>=bm && cd>=bd)
	{
		
		years=cyr-byr;
		months=cm-bm;
		days=cd-bd;
		cout<<"\n\n\t"<<"Years::"<<years<<"\n\n\tMonths::"<<months<<"\n\n\tDays::"<<days;
}
    //Condition 2:

else if(cm<bm && cd>bd)
{
	
	nyr=cyr-1;
	years=nyr-byr;
	ncm=cm+12;
	months=ncm-bm;
	days=cd-bd;
	cout<<"\n\n\t"<<"Years::"<<years<<"\n\n\tMonths::"<<months<<"\n\n\tDays::"<<days;
}
   //Codition 3:
   
else if(cm>bm && cd<bd)
{
switch(cm)
{
	case 1:
		month=31;
		break;
		
		case 2:
		
		if((cyr%400==0)||(cyr%4==0 && cyr%100 !=0))
		
		month=29;
	
		else
		
		month=28;
	
	break;
	   
	   case 3:
	   	  
	   	month=31;
	   	break;
	   
	   case 4:
	   	
	   		month=30;
	   		break;
		   
		   case 5:
		   	
		   		month=31;
		   		break;
			   
			   case 6:
			   	
			   		month=30;
			   		break;
				   
				   case 7:
				   	
				   		month=31;
				   		break;
					   
					   case 8:
					   	
					   		month=31;
					   		break;
						   
						   case 9:
						   	
						   		month=30;
						   		break;
							
							   case 10:
							   
							   	month=31;
							   	break;
							   
							   case 11:
							   
							   	month=30;
							   	break;
							   
							   case 12:
							   	
							   		month=31;
							   		break;
}
								   
				years=cyr-byr;
				months=cm-1;
				int ncd=cd+month;
				days=ncd-bd;			   
    cout<<"\n\n\t"<<"Years::"<<years<<"\n\n\tMonths::"<<months<<"\n\n\tDyas::"<<days;
}
//Condition 4:

else if(cm<bm && cd<bd)
{
	switch(cm)
{
	case 1:
		month=31;
		break;
		
		case 2:
		
		if((cyr%400==0)||(cyr%4==0 && cyr%100 !=0))
		
		month=29;
	
		else
		
		month=28;
	
	break;
	   
	   case 3:
	   	  
	   	month=31;
	   	break;
	   
	   case 4:
	   	
	   		month=30;
	   		break;
		   
		   case 5:
		   	
		   		month=31;
		   		break;
			   
			   case 6:
			   	
			   		month=30;
			   		break;
				   
				   case 7:
				   	
				   		month=31;
				   		break;
					   
					   case 8:
					   	
					   		month=31;
					   		break;
						   
						   case 9:
						   	
						   		month=30;
						   		break;
							
							   case 10:
							   
							   	month=31;
							   	break;
							   
							   case 11:
							   
							   	month=30;
							   	break;
							   
							   case 12:
							   	
							   		month=31;
							   		break;
 } 
     int ncyr=cyr-1;
     years=ncyr-byr;
     ncm=(cm-1)+12;
     months=ncm-bm;
     int ncd=cd+month;
     days=ncd-bd;
cout<<"\n\n\t"<<"Years::"<<years<<"\n\n\tMonths::"<<months<<"\n\n\tDays::"<<days;
}
//Condition 5:

else if(cm<bm && cd==bd)
{
	int ncyr=cyr-1;
	years=ncyr-byr;
	int ncm=cm+12;
	months=ncm-bm;
	days=cd-bd;
	cout<<"\n\n\t"<<"Years::"<<years<<"\n\n\tMonths::"<<months<<"\n\n\tDays::"<<days;
}
//Condition 6:

else if(cm==bm && cd<bd)
{
		switch(cm)
{
	case 1:
		month=31;
		break;
		
		case 2:
		
		if((cyr%400==0)||(cyr%4==0 && cyr%100 !=0))
		
		month=29;
	
		else
		
		month=28;
	
	break;
	   
	   case 3:
	   	  
	   	month=31;
	   	break;
	   
	   case 4:
	   	
	   		month=30;
	   		break;
		   
		   case 5:
		   	
		   		month=31;
		   		break;
			   
			   case 6:
			   	
			   		month=30;
			   		break;
				   
				   case 7:
				   	
				   		month=31;
				   		break;
					   
					   case 8:
					   	
					   		month=31;
					   		break;
						   
						   case 9:
						   	
						   		month=30;
						   		break;
							
							   case 10:
							   
							   	month=31;
							   	break;
							   
							   case 11:
							   
							   	month=30;
							   	break;
							   
							   case 12:
							   	
							   		month=31;
							   		break;
							   	}
							   	
nyr=cyr-1;
years=nyr-byr;
ncm=(cm-1)+12;
months=ncm-bm;
int ncd=cd+month;
days=ncd-bd;
cout<<"\n\n\t"<<"years::"<<years<<"\n\n\tMonths::"<<months<<"\n\n\tDays::"<<days;
}
	return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

