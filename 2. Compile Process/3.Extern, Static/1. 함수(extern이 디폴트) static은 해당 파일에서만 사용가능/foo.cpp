#include "foo.h"
#include <iostream>

void foo()
{
	std::cout << "foo" << std::endl;
}


static void bar()
{
	std::cout << "bar" << std::endl;
}