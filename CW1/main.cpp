//
// This is example code from Chapter 2.2 "The classic first program" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
// 
// keep_window_open() added for TDT4102, excercise 0

// This program outputs the message "Hello, World!" to the monitor

#include "std_lib_facilities.h"
#include <iostream>

//------------------------------------------------------------------------------'
int add(int a, int b) {
	return a + b;
}

bool isFibonacciNumber(int n){
	int a = 0;
	int b = 1;
	while (b < n) {
		int temp = b;
		b += a;
		a = temp;
	}
	return b ==n;
}
/* 
Python version:
def isFibonacciNumber(n):
	a = 0
	b = 1
	while (b<n):
		temp = b
		b += a
		a = temp
	return b == n	
end

*/

// Assignment 2
int MaxOfTwo(int a, int b){
	if (a > b){
		cout << "A is greater than B" << '\n';
		return a;
	}
	else{
		cout << "B is greater than A" << '\n';
		return b;
	}
}

int fibonacci(int n){
	int a = 0;
	int b = 1; 
	cout << "Fibonacci numbers:" << '\n';
	for (unsigned int i = 1; i < n + 1; ++i){
		cout << i, 'b' << '\n';
		int temp = b;
		b += a;
		a = temp;
	}
	cout << "---" << '\n';
	return b;
}	

int squareNumberSum(int n){
	cout << "SquareNumberSum" << '\n';
	int totalSum = 0;
	for (unsigned int i = 1; i < n; ++i){
		totalSum += i*i;
		cout << i*i << '\n';
	}
	cout << "Total sum is: " << totalSum << '\n';
	return totalSum;
}

int triangleNumbersBelow(int n) {
	cout << "triangleNumbersBelow" << '\n';
	int acc = 1;
	int num = 2;
	cout << "Triangle numbers below " << n << ":" << '\n';
	while (acc < n){
		cout << acc << '\n';
		acc += num;
		num += 1;
	}
	cout << ' ';
	return acc;
}

bool isPrime(int n){
	cout << "isPrime" << '\n';
	bool TRUE = true;
	bool FALSE = false;

	for (unsigned int j = 2; j < n; ++j){
		if (n % j == 0){
			return FALSE;
		}
		return TRUE;
	}
}

void naivePrimeNumberSearch(int n){
	cout << "naivePrimeNumberSearch" << '\n';
	for (unsigned int number = 2; number < n; ++number){
		if (isPrime(number)){
			cout << number <<", is a prime" <<'\n';
		}
	}
}

int findGreatestDivisor (int n){
	cout << "findGreatestDivisor" << '\n';
	for (unsigned int divisor = n-1; divisor > 0; --divisor){
		if (n % divisor == 0){
			return divisor;
		}
	}
}

// C++ programs start by executing the function main
int main()
{
	cout << "Hello, World!\n";
	cout << add(1,2) << '\n';
	cout << MaxOfTwo(5, 2) << '\n';
	cout << fibonacci(2) << '\n';
	cout << squareNumberSum(4) << '\n';
	cout << triangleNumbersBelow(9) << '\n';
	cout << isPrime(4) << '\n';
	// naivePrimeNumberSearch(5);
	/* No, you can't write the return value from a void function to screen. Unless you use references.*/
	cout << findGreatestDivisor(10) << '\n';


	keep_window_open();
}


//------------------------------------------------------------------------------
