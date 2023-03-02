#include <iostream>
#include "cat.h"

// static 일반 함수로 만들어줘서 
// 멤버변수 bye()를 만들 필요가 없이
// cat.o 파일에서만 참조할 수 있게 되었다.!!
static void bye() 
{
	std::cout << "Bye!!" << std::endl;
}

void Cat::speak()
{
	std::cout << "meow" << std::endl;
	bye();
}