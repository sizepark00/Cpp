#define ABCD 2
#define MAX_UINT16 65535
#define MAX(a,b) (((a)>(b))?(a):(b))

#include <iostream>
#include <limits>

int main()
{
	
	std::cout << MAX_UINT16 << std::endl;
	// Cpp 에서는 #define 및 메크로 함수를 사용하지 않는것이 좋다
	// 아래와 같이 변경해서 사용하자
	std::cout << std::numeric_limits<uint16_t>::max() << std::endl;

	std::cout << MAX(10, 100) << std::endl;;
	// 아래와 같이 변경해서 사용하자!!
	std::cout << std::max(10, 100) << std::endl;

}