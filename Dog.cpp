#include "Dog.h"
#include <iostream>


Dog::Dog() {

}

int Dog::GetGurimCount() {
	return GurimCount;
}

void Dog::SetGurimCount(int num) {
	GurimCount = num;
}

void Dog::printGurimCount() {
	std::cout << "GurimCount: " << GurimCount << "\n";
}

void Dog::printDogInfo() {
	std::cout << "Dog Info:\n";
	printCode();
	printName();
	printGurimCount();
}