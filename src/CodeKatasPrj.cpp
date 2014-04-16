//============================================================================
// Name        : CodeKatasPrj.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

string fizzBuzz(int number){
	bool devidableBy3 = false;
	bool devidableBy5 = false;

	string retStr = to_string(number);

	if (number % 3 == 0){
		devidableBy3 = true;
	}

	if (number % 5 == 0) {
		devidableBy5 = true;
	}

	if (devidableBy5 && devidableBy3 )
		retStr = "FizzBuzz";
	else if(devidableBy3 && !devidableBy5)
		retStr = "Fizz";
	else  if(!devidableBy3 && devidableBy5)
		retStr = "Buzz";

	return retStr;
}
int main() {
	cout << "Code Kata - Fizz Buzz Kata" << endl;

	int number;
	cout << "Enter a positive integer:";
	cin >> number;

	cout << "FizzBuzz of " << number << " is : " << fizzBuzz(number);
	return 0;
}
