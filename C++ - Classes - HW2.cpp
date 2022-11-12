#include <iostream>
#include "Parent.h"
#include "Child.h"
#include "Runner.h"


int main()
{
	Runner RunChildItem;
	RunChildItem.run();

	std::cout << "\n-------------- Virtual Func ---------------------\n";
	Parent* parentItem;
	Child childItem;
	parentItem = &childItem;
	parentItem->exampleFunc();
}


