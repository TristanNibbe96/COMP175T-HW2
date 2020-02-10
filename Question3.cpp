#include "Question3.h"


int main(){
	std::string userInput;

	printf("Enter STOP if you would like to stop, enter anything else to continue: ");
	std::cin >> userInput;
	while(userInput != sentinelCharacter){
		addRandomNumberToVector(distribution(randomNumberGenerator));
		printVectorContents();
		printf("\nEnter STOP if you would like to stop, enter anything else to continue: ");
		std::cin >> userInput;
	}
}

void addRandomNumberToVector(float numberToAdd){
	printf("Adding random number to vector: %f\n", numberToAdd);
	numbers.push_back(numberToAdd);
}

void printVectorContents(){
	for(int i = 0; i < numbers.size(); i++){
		printf("\nElement: %d\nLocated at: ",i);
		std::cout << &numbers.at(i);
		printf("\nValue: %f", numbers.at(i));
	}	
}