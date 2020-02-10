#include <iostream>

bool checkForPalindrome(int numberToCheck){
	int number = numberToCheck;
	int reversedNumber = 0;
	int digit = 0;

	do{
		digit = number % 10;
		reversedNumber = (reversedNumber * 10) + digit;
		number /= 10;
	}while(number != 0);

	if(numberToCheck == reversedNumber){
		printf("Found a larger palindrome: %d\n", numberToCheck);
		return true;
	}else{
		return false;
	}	
}

int main(){

	int max = 0;
	int product = 0;

	for(int i = 999; i > 900; i--){
		for (int j = 999; j > 900; j--)
		{
			product = i*j;
			if(product > max){
				if(checkForPalindrome(product) == true){
					max = product;
				}
			}
		}
		printf("Finished checking %d\n", i );
	}

	printf("Max palindrome is: %d\n", max);
}	
