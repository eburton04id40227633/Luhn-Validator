#include "Luhn.h"


//The Luhn algorithm is a simple checksum formula used 
//to validate a variety of identification numbers, such
//as credit card numbers and Canadian Social Insurance 
//Numbers.

int invCreditCardNum[16] = { 4,4,5,5,6,6,7,7,8,8,9,9,0,0,1,1 };
int valCreditCardNum[16] = { 4,5,5,6,7,8,9,7,3,8,1,1,6,0,2,7 };
int main() {
	LuhnValidate(invCreditCardNum);
	LuhnValidate(valCreditCardNum);
};