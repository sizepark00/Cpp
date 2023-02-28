#include <iostream>
#include <array>
#include <vector>

class Cat
{
public:
private:
	int m_age;
};


void foo(int num)
{
	// 일반적인 표현방식
	// 하지만 동작을 실행할때마다 메모리를 할당 받고 돌려줘야 하기 때문데
	// 매우 빠른 동작을 원할때는 적당하지 않다
	std::vector<Cat> cats(num);
};

bool bar(int num)
{
	constexpr int maxCats = 1000;
	if (maxCats < num)
	{
		return false;
	}
	// 입력값이 1000 이하이면 배열로 받아서 바로 처리
	// 빠른 계산을 가능케 한다.
	std::array<Cat, maxCats> cats;

};

int main()
{
	int count = 0;
	std::cin >> count;
	foo(count);

	// 고속 또는 많은 연산이 필요할때
	for (int i = 0; i < 10000; i++)
	{
	// 함수에 일정크기 이하는 Stack 에서 처리하게 한다.
		bar(count);
	}

	return 0;

}