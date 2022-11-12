#pragma once
#include "Animal.h"
class Cat :  public Animal
{
private:
	int GurimCount;
	int Age;
public:
	int GetGurimCount();

	void SetGurimCount(int num);

	void printGurimCount();

	int GetAge();

	void SetAge(int num);

	void printAge();

	void printCatInfo();


};

