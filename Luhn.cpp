#include "Luhn.h"
#include <iostream>
using namespace std;

//int creditNum[16];
int LuhnValidate(int array[]) {

	//Simply prints out input array
	cout << "Your entered number : ";
	for (int i = 0; i < 16; i++) {
		cout << array[i] ;
	}

	//Double every second digit starting from the right
	for (int i = 15; i >= 0; i--) {
		if (i % 2 == 0) {
			array[i] = array[i] * 2;
			//If the doubled value is larger than 9, subtract 9
			if (array[i] > 9) {
				array[i] = array[i] -9;
			}
		}
		else {
			//Do nothing
		}
	}
	int arraySum = 0;
	cout << endl << "Double every 2nd number from the right side: ";
	for (int i = 0; i < 16; i++) {
		cout << array[i] ;
		//Find the sum of the calculated array
		arraySum += array[i];
	}
	cout << endl << "Sum = " << arraySum << endl;

	if (arraySum % 10 == 0) {
		cout << "This is a valid number per the Luhn formula" << endl;
	}
	else {
		cout << "This is not a valid number per the Luhn formula" << endl;
	}
	return 0;
}