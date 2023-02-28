#include <iostream>
#include <memory>
#include <vector>
#include <stdio.h>
#include <vector>


// Cat has Shared Ptr memeber variable
class Cat
{
public:
	Cat() {
		std::cout << "Cat AAAstructor" << std::endl;
	}
	
	~Cat()
	{
		std::cout << "Cat destructor" << std::endl;
	}
private:

	int mVar;

}; 



int main()
{	// 다이나믹 얼로케이션을 사용할 수 있다!!
	std::cout << "How many do you need cat ? " << std::endl;

	int catCount;

	std::cin >> catCount;

	std::vector<Cat> cats(catCount);

	return 0;
}