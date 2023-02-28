#include <iostream>
#include <array>
#include <vector>

class Cat
{
public:
private:
	int m_age;
};

int main()
{
	//Stakc 영역 사용
	Cat cat;
	std::array<int, 100> catsStack;
	std::array<int, 300> a; // kb이하는 스택에 저장

	// Heap 영역 사용
	std::vector<int> b(500000); //2mb(heap)
	std::vector<Cat> cats(1000000); // heap 영역에 저장

	// 다이나믹(런타임) 환경은 무조건 Heap 영역 사용 
	int count = 0;
	std::cin >> count;
	std::vector<Cat> dynamicCats(count);

	return 0;

}