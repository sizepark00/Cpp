#include <iostream>
#include "cat.h"

// static �Ϲ� �Լ��� ������༭ 
// ������� bye()�� ���� �ʿ䰡 ����
// cat.o ���Ͽ����� ������ �� �ְ� �Ǿ���.!!
static void bye() 
{
	std::cout << "Bye!!" << std::endl;
}

void Cat::speak()
{
	std::cout << "meow" << std::endl;
	bye();
}