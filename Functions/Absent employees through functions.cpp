/* 04 wirte a program find number of employees and number of tottal absent
days from company */
#include<iostream>
using namespace std;
//function 01 tacking no argumnent from user
int NumberOfEmployee();//number of employee function decleration
//function 02 taking one argumnet from user
int Absent_Days(int employee);//number of absent days per year, function decleration
// function 03 taking two argumnets and does not perform screen output and does not ask the user for input.
double Average_Absent_Days(int employee, int Total_Absent_days);//Average of total absent days function decleration
int main() {
	int employee=NumberOfEmployee();//number of employee function call and assigning return value
	cout<<"\n\n\tNumber of Employees in Company:: "<<employee;
	int 	Total_Absent_days=Absent_Days(employee);//total absent days of employee function call and assging return value
	cout<<"\n\n\tTotal Absent Days of Employees in past year :: "<<Total_Absent_days;
	Average_Absent_Days(employee, Total_Absent_days);//average absent days call with no screen output
}
int NumberOfEmployee() { //number of employee function definition
	int employee;//local variable decleration
	cout<<"\n\n\tEnter number of Employee in Company:: ";
	cin>>employee;
	return employee;//returning number of employees
}
int Absent_Days(int employee) { //Absent days of employees function definition
	int Absent_days;//local variable decleration for absent day
	int total_absent_days=0;//local variable for total absent days
	for(int i=0; i<employee; i++) { //for loop for each employee
		cout<<"\n\n\tEnter Absent days of "<<i+1<<" Employee :: ";
		cin>>Absent_days;
		total_absent_days=total_absent_days+Absent_days;//calculating total days
	}
	return total_absent_days;//returning total days
}
double Average_Absent_Days(int employee, int Total_Absent_days) {//average Absent days of employees function definition
	int avg_absents_per_year=Total_Absent_days/employee;//average caculation but not returning screen output

}