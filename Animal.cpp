#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include "Animal.h"
#include <iostream>


int Animal::GetCode() {
	return code;
}

void Animal::SetCode(int aCode) {
	code = aCode;
}

char* Animal::GetName() {
	return name;
}

void Animal::SetName(char* aName) {
	strcpy(name, aName);
}

void Animal::printCode() {
	std::cout << "Code: " << code<<"\n";
}


void Animal::printName() {
	std::cout << "Name: " << name<<"\n";
}