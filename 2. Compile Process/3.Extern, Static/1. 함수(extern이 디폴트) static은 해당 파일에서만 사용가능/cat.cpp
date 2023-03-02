#include <iostream>
#include "cat.h"

static void bye() 
{
	std::cout << "Bye!!" << std::endl;
}

void Cat::speak()
{
	std::cout << "meow" << std::endl;
}