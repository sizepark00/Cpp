#include "foo.h"
#include <iostream>


//void foo()
//{
//	std::cout << "foo" << std::endl;
//}
//
//
//static void bar()
//{
//	std::cout << "batr" << std::endl;
//}
//


int foo(double a )	//_Z3food - name mangling
{
	return static_cast<int>(a);
}

double bar(int a)	// _Z3bari - name mangling
{
	return static_cast<double>(a);
}
