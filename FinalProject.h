#pragma once
#include <iostream>
#include <string>
using namespace std;

void DisplayTitle(string atitle)

{
	int len = atitle.length();
	cout << "\t";
	for (int i = 0; i < len; i++)
	{
		cout << (char)toupper(atitle[i]);
	}
	cout << "\n";
	cout << "\t";
	for (int i = 0; i <= len; i++)
	{
		cout << "-";
	}
	cout << "\n\n";
}

void DisplayMenu () {  
	
	DisplayTitle("Virginia Castro Delion");

cout << "1- Addition\n" << "2- Division\n" << "3- Substraction\n" << "4- Multiplication\n" << "5- Quit\n";
}

short ReadChoice () {  
	short choice = 0;
	do {
cout << "Enter your choice: \n";
cin >> choice;
	} while (choice < 1 || choice >5);
	system("cls");
return choice;
}//END ReadChoice


short ReadNumberOperator(string simbol) {
	short number = 0;
	cout << "Enter the number of values to " << simbol << ":" << endl;
	cin >> number;
	return number;
}//END ReadNumberOperator

float ReadOneValue(short count) {
	float value;
	{
		cout << "Value " << count << ":" << endl;
		cin >> value;
		return value;
	}
}//END ReadOneValue



void TotalAddition(short NB) {
	float total = 0;
	for (short i = 0; i < NB; i++) {
		total += ReadOneValue(i + 1);
	}
	cout << "The result is " << total << endl;
}//END TotalAddition

float ReadValuesDivision() {
		float division = 0;
		cout << "Enter the value to divide: ";
		cin >> division;
		return division;
	}//END ReadValuesDivision

float ReadDivider() {
		float divider;
	cout << "Enter the divider: ";
		cin >> divider;
		return divider;
	}//END ReadDivider

void DisplayTotal(float divider, float division) {
	float total;
	total = division / divider;
	cout << "The result is " << total << endl;
}//END DisplayTotal

float ReadFirstVSubstraction() {
	float substraction1 = 0;
	cout << "Enter the first value: ";
	cin >> substraction1;
	return substraction1;
}//END ReadFirstVSubstraction

float ReadSecondVSubtraction() {
	float subtraction2 = 0;
	cout << "Enter the second value: ";
	cin >> subtraction2;
	return subtraction2;
}//END ReadSecondVSubtraction

void DisplayTotalSubtraction(float subtraction1, float subtraction2) {
	float total;
	total = (subtraction1 - subtraction2);
	cout << "The result is " << total << endl;
}

void DisplayTotalMultiplication(short NB) {
	float total = 1;
	for (short i = 0; i < NB; i++) {
	total *= ReadOneValue(i + 1);
	}
	
	cout << "The result is " << total << endl;
}//END TotalMultiplication

char MoreCalculs(string calculation) {
	char answer;
	do {
		cout << "Would you like to do another " << calculation << "? (Y-N) " << endl;
		cin >> answer;
	} while (!(answer == 'Y') && !(answer == 'y') && !(answer == 'N') && !(answer == 'n'));
	
	return answer;
}




