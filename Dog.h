#pragma once
#include "Animal.h"
class Dog : public Animal
{
private:
	int GurimCount;
public:
	Dog();
	int GetGurimCount();

	void SetGurimCount(int num);

	void printGurimCount();

	void printDogInfo();

};

