#include "Cat.h"
#include <iostream>


int Cat::GetGurimCount() {
	return GurimCount;
}

void Cat::SetGurimCount(int num) {
	GurimCount = num;
}

void Cat::printGurimCount() {
	std::cout << "GurimCount: " << GurimCount<<"\n";
}

int Cat::GetAge() {
	return Age;
}

void Cat::SetAge(int num) {
	Age = num;
}

void Cat::printAge() {
	std::cout << "Age: " << Age<<"\n";
}


void Cat::printCatInfo() {
	std::cout << "Cat Info:\n";
	printCode();
	printName();
	printAge();
	printGurimCount();
}
