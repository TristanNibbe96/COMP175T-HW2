#include <iostream>
#include "Question2.h"

int main(){
	std::vector<int> numbers;
	numbers = askForNumbers(askForAmountOfNumbers());
	int limit = askForLimit();

	printf("Summing multiples\n");
	int sum = 0;
	for(int i = 0; i < numbers.size(); i++){
		sum += findSumOfMultiples(numbers.at(i),limit);

	}
	printf("sum: %d\n" , sum);

	printf("Subtracting overlap\n");
	int overlap = findSumOfMultiples(findCommonFactor(numbers),limit);
	sum -= overlap;

	printf("The sum of the multiples that you entered that are below %d is %d \n", limit, sum );
}

int findCommonFactor(std::vector<int> numbersLocal){
	int commonFactor = 1;
	for(int i = 0; i < numbersLocal.size(); i++){
		commonFactor *= numbersLocal.at(i);
	}
	return commonFactor;
}

int askForAmountOfNumbers(){
	int amount = 0;
	printf("Please enter the amount of numbers of which you would like to find the sum of multiples: ");
	std::cin >> amount;
	return amount;
}

std::vector<int> askForNumbers(int amountOfNumbers){
	std::vector<int> numbersLocal;
	int tempInt = 0
	;
	for(int i = 0;  i < amountOfNumbers; i++){
		printf("Please enter the number of which you would like to find the sum of multiples: ");
		std::cin >> tempInt;
		numbersLocal.push_back(tempInt);
	}

	return numbersLocal;
}

int askForLimit(){
	int limit = 0;
	printf("Please enter the limit at which you would like to stop counting multiples: ");
 	std::cin >> limit;
	return limit;
}

int findSumOfMultiples(int numberToSum, int limit){
	int sum = 0;
	int multiples = numberToSum;

	while(multiples < limit){
		sum += multiples;
		multiples += numberToSum;
	}

	return sum;
}

