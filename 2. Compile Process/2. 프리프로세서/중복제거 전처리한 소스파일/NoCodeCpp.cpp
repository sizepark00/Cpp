#define ABCD 2
#define MAX_UINT16 65535
#define MAX(a,b) (((a)>(b))?(a):(b))

#include <iostream>
#include <limits>
#include "cat.h"
#include "cat.h" //전처리기로 중복제거 가능
//constexpr int ABCD = 2;

int main()
{
	Cat kitty;
	kitty.speak();

	return 0;
}