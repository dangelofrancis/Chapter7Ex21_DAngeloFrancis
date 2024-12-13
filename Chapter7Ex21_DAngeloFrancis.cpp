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
		cout << "2D Array Operations\n\n";
		cout << "1. Get Total\n";
		cout << "2. Get Average\n";
	}
	return 0;
}