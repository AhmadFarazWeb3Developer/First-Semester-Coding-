#include<iostream>
using namespace std;
char airplane_seats[13][6];
bool assign_seat(int row_index, int col_index){
    /*
    function to assign seat using index of row and column if it's not already
    occupied. 
    */
    bool seat_found = false;
    char val = airplane_seats[row_index][col_index];
    if (val == '*'){
        seat_found = true;
        airplane_seats[row_index][col_index] = 'X';
    }
    return seat_found;
}
int main()
{
    bool seat_found;  // to keep check whether seat is found or not
    int seat_type; 
    int row_index, column_index;
    // filling array
    for (int i=0; i < 13; i++){
        for (int j=0; j < 6; j++){
            airplane_seats[i][j] = '*';
        }
    }   
    // continue indefinitely
    while (true){
        // initially we suppose that the seat is not available
        seat_found = false;
        do {
            cout<<"SELECT SEAT TYPE\n1: first Class\n2: Economy Class\n3: Business Class\n";
            cin>>seat_type;
            cout<<"***DESIRED SEAT**\n";
            cout<<"Row Number: ";
            cin>>row_index;
            cout<<"Column Number: ";
            cin>>column_index;  
            // we need index not number
            row_index--; column_index--;
            // applying conditions as stated
            if ((seat_type == 1) && (row_index >= 0) && (row_index <= 1) && (column_index >= 0) && (column_index <= 6))
			{
                seat_found = assign_seat(row_index, column_index);
            }
            else if ((seat_type == 2) && (row_index >= 2) && (row_index <= 6) && (column_index >= 0) && (column_index <= 6))
			{
                seat_found = assign_seat(row_index, column_index);
            }
            else if ((seat_type == 3) && (row_index >= 7) && (row_index <= 12) && (column_index >= 0) && (column_index <= 6))
			{
                seat_found = assign_seat(row_index, column_index);
            }
            else{
                cout<<"Invalid input!"<<endl;
                continue;
            }
            if (!seat_found){
                cout<<"Already occupied"<<endl;
            }
        }while (!seat_found);
        // printing column labels
        cout<<"\t"<<'A'<<"\t"<<'B'<<"\t"<<'C'<<"\t"<<'D'<<"\t"<<'E'<<"\t"<<'F'<<endl;
        // printing array
        for (int i=0; i < 13; i++){
            cout<<"Row "<<i+1<<"\t";
            for (int j=0; j < 6; j++){
                cout<<airplane_seats[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
}