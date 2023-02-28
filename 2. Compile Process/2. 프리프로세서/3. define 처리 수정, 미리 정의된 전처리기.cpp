#define ABCD 2
#define MAX_UINT16 65535
#define MAX(a,b) (((a)>(b))?(a):(b))

#include <iostream>
#include <limits>
//constexpr int ABCD = 2;

int main()
{
	
	std::cout << MAX_UINT16 << std::endl;
	// Cpp 에서는 #define 및 메크로 함수를 사용하지 않는것이 좋다
	// 아래와 같이 변경해서 사용하자
	std::cout << std::numeric_limits<uint16_t>::max() << std::endl;

	std::cout << MAX(10, 100) << std::endl;;
	// 아래와 같이 변경해서 사용하자!!
	std::cout << std::max(10, 100) << std::endl;

	if constexpr (ABCD)
	{
		std::cout << "1: Yes\n";
	}
	else
	{
		std::cout << "1: No\n";
	}

	// 미리 정의된 전처기리

	std::cout << __FILE__ << std::endl;
	std::cout << __DATE__ << std::endl;
	std::cout << __LINE__ << std::endl;
	std::cout << __TIME__ << std::endl;




}