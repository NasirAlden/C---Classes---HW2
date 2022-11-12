#pragma once
#include <string>
class Animal
{
public:
	int code;
	char name[100];

	int GetCode();

	void SetCode(int aCode);

	char* GetName();

	void SetName(char* aName);

	void printCode();
	void printName();
};

