#include "Question1.h"

int main(){
	std::vector<float> data = initializeVector();
	float sum = takeSumOfData(data);
	float average = takeAverageOfData(sum,data.size());
	float standardDev = takeStandardDeviationOfData(data,average);

	printf("Sum: %f \nAverage: %f\nStandard Deviation: %f\n",sum,average,standardDev );
		
}

float takeSumOfData(std::vector<float> dataToSum){
	float sum = 0;

	for(int i = 0; i < dataToSum.size(); i++){
		sum += dataToSum.at(i);
	}

	return sum;
}

float takeAverageOfData(float sumToAverage, int numberOfElements){
	return sumToAverage/numberOfElements;
}

float takeStandardDeviationOfData(std::vector<float> data, float average){
	float standardDeviationLocal = 0;

	for(int i = 0; i < data.size(); i++){
		standardDeviationLocal += pow((data.at(i) - average),2);
	}

	standardDeviationLocal = standardDeviationLocal / data.size();
	standardDeviationLocal = pow(standardDeviationLocal,.5);

	return standardDeviationLocal;
}

std::vector<float> initializeVector(){
	std::vector<float> data;
	data.push_back(2.3);
	data.push_back(4.7);
	data.push_back(0.1);
	data.push_back(6.4);
	data.push_back(3.8);
	data.push_back(9.6);
	data.push_back(9.0);
	data.push_back(6.1);
	data.push_back(7.3);
	data.push_back(2.2);

	return data;
}