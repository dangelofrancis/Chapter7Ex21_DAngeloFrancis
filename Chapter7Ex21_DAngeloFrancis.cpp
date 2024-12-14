/*
TITLE: Chapter 7 Exercise 21 - 2D Operations
FILE NAME: Chapter7Ex21_DAngeloFrancis.cpp
PROGRAMMER: D'Angelo Francis
DATE: December 2024
REQUIREMENTS: Write a program that creates a two-dimensional array initialized with test data. Use any data type you wish. 
Display the options in a menu to call the various functions.*/

#include<iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

int getTotal(const int arr[ROWS][COLS]);
double getAverage(const int arr[ROWS][COLS]);
int getRowTotal(const int arr[ROWS][COLS], int row);
int getColumnTotal(const int arr[ROWS][COLS], int col);
int getHighestInRow(const int arr[ROWS][COLS], int row);
int getLowestInRow(const int arr[ROWS][COLS], int row);

int main() {
	//Create array with test data
	int numbers[ROWS][COLS] = {
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11}
	};
	bool keepPlaying = true;

	//Create menu
	while (keepPlaying) {
		int choice = 0;

		cout << "2D Array Operations\n\n";
		cout << "1. Total\n";
		cout << "2. Average\n";
		cout << "3. Row Total\n";
		cout << "4. Column Total\n";
		cout << "5. Highest In Row\n";
		cout << "6. Lowest In Row\n";
		cout << "7. Quit\n\n";

		cout << "Enter your choice (1-7): ";
		cin >> choice;

		if (choice < 1 || choice > 7) {
			cout << "*ERROR* Invalid choice. Please try again.\n";
			continue;
		}

		switch (choice) {
		case 1:
			cout << "Total: " << getTotal(numbers) << "\n";
			break;
		case 2:
			cout << "Average: " << getAverage(numbers) << "\n";
			break;
		case 3: {
			int row;
			cout << "Enter row number (0 to " << ROWS - 1 << "): ";
			cin >> row;
			if (row >= 0 && row < ROWS)
				cout << "Row Total: " << getRowTotal(numbers, row) << "\n";
			else
				cout << "ERROR* Invalid row number.\n";
			break;
		}
		case 4: {
			int col;
			cout << "Enter column number (0 to " << COLS - 1 << "): ";
			cin >> col;
			if (col >= 0 && col < COLS)
				cout << "Column Total: " << getColumnTotal(numbers, col) << "\n";
			else
				cout << "*ERROR* Invalid column number.\n";
			break;
		}
		case 5: {
			int row;
			cout << "Enter row number (0 to " << ROWS - 1 << "): ";
			cin >> row;
			if (row >= 0 && row < ROWS)
				cout << "Highest in Row: " << getHighestInRow(numbers, row) << "\n";
			else
				cout << "*ERROR* Invalid row number.\n";
			break;
		}
		case 6: {
			int row;
			cout << "Enter row number (0 to " << ROWS - 1 << "): ";
			cin >> row;
			if (row >= 0 && row < ROWS)
				cout << "Lowest in Row: " << getLowestInRow(numbers, row) << "\n";
			else
				cout << "*ERROR* Invalid row.\n";
			break;
		}
		case 7:
			keepPlaying = false;
			break;
		}
	}
	return 0;
}

int getTotal(const int arr[ROWS][COLS]) {
	int total = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			total += arr[i][j];
		}
	}
	return total;
}

double getAverage(const int arr[ROWS][COLS]) {
	return static_cast<double>(getTotal(arr)) / (ROWS * COLS);
}

int getRowTotal(const int arr[ROWS][COLS], int row) {
	int total = 0;
	for (int j = 0; j < COLS; j++) {
		total += arr[row][j];
	}
	return total;
}

int getColumnTotal(const int arr[ROWS][COLS], int col) {
	int total = 0;
	for (int i = 0; i < ROWS; i++) {
		total += arr[i][col];
	}
	return total;
}

int getHighestInRow(const int arr[ROWS][COLS], int row) {
	int highest = arr[row][0];
	for (int j = 1; j < COLS; j++) {
		if (arr[row][j] > highest)
			highest = arr[row][j];
	}
	return highest;
}

int getLowestInRow(const int arr[ROWS][COLS], int row) {
	int lowest = arr[row][0];
	for (int j = 1; j < COLS; j++) {
		if (arr[row][j] < lowest)
			lowest = arr[row][j];
	}
	return lowest;
}
