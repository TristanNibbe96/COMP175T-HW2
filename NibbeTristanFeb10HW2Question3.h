#include <vector>
#include <string>
#include <iostream>
#include <random>

std::string sentinelCharacter = "STOP";
std::default_random_engine randomNumberGenerator;
std::uniform_real_distribution<float> distribution(0,1);
std::vector<float> numbers;

void printVectorContents();
void addRandomNumberToVector(float numberToAdd);
