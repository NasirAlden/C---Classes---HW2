#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include "Runner.h"
#include <iostream>


void Runner::run(){
	int res;
	Child childItem;
	res=childItem.childFuncX20(5);
	std::cout << "\n\n----------------------------------------------------\n";
	std::cout <<"Runner Called Child Function >> Child Result: " << res <<"\n";
	std::cout << "----------------------------------------------------\n\n";

	Dog dog1;
	Dog dog2;
	
	std::cout << "\n-----------------------------------\n";
	dog1.code = 10;
	strcpy(dog1.name ,"Kaza");
	dog1.Dog::SetGurimCount(0);
	dog1.printDogInfo();
	std::cout << "\n-----------------------------------\n";

	dog2.code = 11;
	strcpy(dog2.name, "Shoko");
	dog2.Dog::SetGurimCount(5);
	dog2.printDogInfo();
	std::cout << "\n-----------------------------------\n";


	Cat cat1;
	Cat cat2;

	cat1.code = 12;
	strcpy(cat1.name, "Bonzo");
	cat1.Cat::SetGurimCount(3);
	cat1.SetAge(8);
	cat1.printCatInfo();
	std::cout << "\n-----------------------------------\n";

	cat2.code = 13;
	strcpy(cat2.name, "Mutzi");
	cat2.Cat::SetGurimCount(5);
	cat2.SetAge(15);
	cat2.printCatInfo();




}


