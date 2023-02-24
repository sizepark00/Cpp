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
	std::shared_ptr<Cat> mVar;
};



int main()
{
	//shared_ptr 자료형 크기  -> 16byte
	std::shared_ptr<Cat> mPtr = std::make_shared<Cat>();
	
	// mPtr 연결이 해제가 되어도
	// 객체의 멤버변수 mVar이 Heap 영역의 자기 자신을 연결하고 있기 때문에
	// memory leak 발생
	mPtr->mVar = mPtr;

	std::cout << "count : " << mPtr.use_count() << std::endl;

	return 0;
}