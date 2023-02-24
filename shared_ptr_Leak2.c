#include <iostream>
#include <memory>
#include <vector>

class Cat
{
public:
	Cat()
	{
		std::cout << "Cat constructor" << std::endl;

	};
	~Cat()
	{
		std::cout << "Cat destructor" << std::endl;
	};
	// 멤버 변수 참조를 쉽게하기 위해서 public에 변수 생성

	std::shared_ptr<Cat> mFriend;
};



int main()
{
	std::shared_ptr<Cat> pKitty = std::make_shared<Cat>();
	std::shared_ptr<Cat> pNabi = std::make_shared<Cat>();


	// 객체 멤버변수 포인터가 서로 순환참조하고 있어
	// memory leak 발생
	pKitty->mFriend = pNabi;
	pNabi->mFriend = pKitty;
	
	
	return 0;
}