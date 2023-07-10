#include <iostream>
using namespace std;
char seats[13][6]; // array for seats
bool give_seat(int columns, int rows);
int main() {
	int row_position, column_position, classtype;
	bool occupied_seat;
	// checking all seats are occupied or not
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 6; j++) {
			seats[i][j] = '*';
		}
	}
	while (true) {
		do {
			occupied_seat = false;
			cout << " Enter 1  First Class \n Enter 2 for Business Class \n Enter 3 for Economy Class :: ";
			cin >> classtype;
			cout << "Enter Desired Row :: ";
			cin >> row_position;
			cout << "\nEnter Desired column in particular row :: ";
			cin >> column_position;
			// we need index not number
			row_position--;
			column_position--;
			// applying conditions as stated
			if ((classtype == 1 && row_position >= 0 && row_position <= 1) && (column_position >= 0 && column_position <= 6)) {
				occupied_seat = give_seat(row_position, column_position);
			} else if ((classtype == 2 && row_position >= 2 && row_position <= 6) && (column_position >= 0 && column_position <= 6)) {
				occupied_seat = give_seat(row_position, column_position);
			} else if ((classtype == 3 && row_position >= 7 && row_position <= 12) && (column_position >= 0 && column_position <= 6)) {
				occupied_seat = give_seat(row_position, column_position);
			} else {
				cout << "\nInvalid input ";
				continue;
			}
			if (!occupied_seat) {
				cout << "\nAleardy Assigned ";
			}
		} while (!occupied_seat);
		cout<< "\t" << 'A' << "\t" << 'B' << "\t" << 'C' << "\t" << 'D' << "\t" << 'E' << "\t" << 'F' << endl;
		// printing array
		for (int i = 0; i < 13; i++) {
			cout << "Row " << i + 1 << "\t";
			for (int j = 0; j < 6; j++) {
				cout << seats[i][j] << "\t";
			}
			cout << "\n";
		}
	}
	return 0;
}
bool give_seat(int rows, int columns) {
	bool occupied_seat= false;
	char print = seats[rows][columns];
	if (print == '*') {
		occupied_seat = true;
		seats[rows][columns] = 'X';
	}
	return occupied_seat;
}