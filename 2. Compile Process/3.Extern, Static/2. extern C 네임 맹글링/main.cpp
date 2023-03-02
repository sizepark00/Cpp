#include <iostream>
#include <limits>
#include "cat.h"
#include "cat.h" //전처리기로 중복제거 가능
#include "foo.h"




int main()
{
	//foo();
	// foo.cpp 파일에서 static 키워드로 인해서
	// 다른 파일에 bar 함수를 참조 할 수 없어서 오류 발생한다.
	//bar();

	Cat kitty;
	kitty.speak();
	
	std::cout << foo(1.2) << std::endl;
	
	return 0;
}