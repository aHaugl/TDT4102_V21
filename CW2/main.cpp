//
// This is example code from Chapter 2.2 "The classic first program" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
// 
// keep_window_open() added for TDT4102, excercise 0

// This program outputs the message "Hello, World!" to the monitor

#include "std_lib_facilities.h"
#include <iomanip>

//------------------------------------------------------------------------------'
void inputIntegersAndPrintInteger(){
	int x;
	cout << "Skriv inn et heltall" << '\n';
	cin >> x;
	cout << "The integer you wrote is: " << x << '\n';
}

int inputInteger (){
	int number;
	cout << "Skriv inn et heltall" << '\n';
	cin >> number;
	return  number;
}

// Oppgave 1D) brukte inputinteger fordi den gjør en ting og kun en ting godt.
// C++ programs start by executing the function main

int inputIntegersAndPrintSum(){
	int x = inputInteger();
	int y = inputInteger();
	/*cout << "Write inn the first integer" << '\n';
	cin >> x;
	cout << "Write in the second integer" << '\n';
	cin >> y;*/
	int sum = x + y;
	cout << "The sum is: " << sum << '\n';
	return sum;
}

bool isOdd(int n){
	if (n % 2 == 1){
		return true;
	}
	else{
		return false;
	}
} 

void printHumanReadableTime(int seconds){
	int hours = seconds /3600;
	seconds %= 3600;

	int minutes = seconds / 60;
	seconds %= 60;

	cout << hours << " timer," << minutes << " minutter og " << seconds << "sekunder" <<'\n';
}

void readAndPrintSum(){
	int number;
	int sum = 0;
	cout << "Select number of integers to sum: " << '\n';
	cin >> number;
	for (unsigned int i = 1; i <= number; ++i){
		sum += inputInteger();
	}
	cout << "The sum of " << number << " user defined inputs are: " << sum << '\n';
}

void readAndPrintSum2(){
	int number;
	while (number !=0){
		number = inputInteger();
		cout << number << '\n';
	}
}

//Oppgave 2c: Oppgave 2a passer best med for-løkke. Oppgave 2b passer best med while-løkke.

double inputDouble (){
	double doublenumber;
	cout << "Skriv inn et desimaltall" << '\n';
	cin >> doublenumber;
	return  doublenumber;
}
void nokToEuro(){
	double rateOfChange = 9.75;
	double NOK = inputDouble();
	while (NOK < 0){
		cout << "Invalid currency. Currency is negative. Enter new currency" << '\n';
		NOK = inputDouble();
	}
	double euro = NOK/rateOfChange;
	cout << NOK << "NOK is equal to " << euro << " euro. " << '\n';
}

void multiplicationTable(){
	int width = inputInteger();
	int height = inputInteger();
	
	for (unsigned int x = 1;  x < 10; ++x){
	cout << setw(height) << "Row: " <<  x;
	cout << setw(width) << 
	}
	

}


int main(){
	cout << "Hello, World!\n";
	/*
	inputIntegersAndPrintInteger();
	int number = inputInteger();
	cout << "You wrote: " << number <<'\n';
	inputIntegersAndPrintSum();
	for (unsigned int i = 1; i < 16; ++i){
		cout << isOdd(i) << '\n';
	}
	
	printHumanReadableTime(3661);
	readAndPrintSum();
	readAndPrintSum2();

	cout << nokToEuro();
	*/
	int userChoice;
	while (userChoice != 0){
		cout << "Choose function to run: " << '\n';
		cout << "0) Terminate program. " << '\n';
		cout << "1) Sum two integers. " << '\n';
		cout << "2) Sum user defined set of numbers. " << '\n';
		cout << "3) Sum numbers that are not 0. "  << '\n';
		cout << "4) Convert NOK to Euro. "  << '\n';
		cin >> userChoice;

		if (userChoice == 1){
			inputIntegersAndPrintSum();
		}
		else if (userChoice == 2){
			readAndPrintSum();
		}
		else if (userChoice == 3){
			readAndPrintSum2();
		}
		else if (userChoice == 4){
			nokToEuro();
		}
		else
		{
			break;
		}
		
	}

	keep_window_open();
}

//------------------------------------------------------------------------------
