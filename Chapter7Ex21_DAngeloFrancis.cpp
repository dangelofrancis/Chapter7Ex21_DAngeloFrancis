/*
TITLE: Chapter 7 Exercise 21 - 2D Operations
FILE NAME: Chapter7Ex21_DAngeloFrancis.cpp
PROGRAMMER: D'Angelo Francis
DATE: December 2024
REQUIREMENTS: Write a program that creates a two-dimensional array initialized with test data. Use any data type you wish. 
Display the options in a menu to call the various functions.*/

#include<iostream>
using namespace std;

int getTotal();
int getAverage();
int getRowTotal();
int getColumnTotal();
int getHighestInRow();
int getLowestInRow();

int main() {
	//Create array with test data. NOTE: I wasn't sure what text file to use, so I made my own up
	int numbers[3][4] = {
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
	};
	bool keepPlaying = true;

	//Create menu
	while (keepPlaying = true) {
		int choice = 0;

		cout << "2D Array Operations\n\n";
		cout << "1. Total\n";
		cout << "2. Average\n";
		cout << "3. Row Total\n";
		cout << "4. Column Total\n";
		cout << "5. Highest In Row\n";
		cout << "6. Lowest In Row\n";
		cout << "7. Quit\n\n";

		do {
			cout << "Enter your choice(1-7): ";
			cin >> choice;
		} while (choice >= 1 || choice <= 7);

		switch (choice) {
		case 1:
			getTotal();
		case 2:
			getAverage();
		case 3:
			getRowTotal();
		case 4:
			getColumnTotal();
		case 5:
			getHighestInRow();
		case 6:
			getLowestInRow();
		case 7:
			keepPlaying = false;
			break;
		}
		return 0;
	}
}
int getTotal()