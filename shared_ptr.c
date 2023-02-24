#include <iostream>
#include <memory>
#include <vector>

class Cat
{
public:
	Cat():mAge{12}
	{
		std::cout << "Cat constructor" << std::endl;
		std::cout << mAge << std::endl;
	};
	~Cat()
	{
		std::cout << "Cat destructor" << std::endl;
	};
	void setVar(int a) {
		mAge = a;
	}
private:
	int mAge;
};



int main()
{
	/*Cat* catPtr = new Cat();
	Cat* catPtr1 = catPtr;

	delete catPtr;*/
//	delete catPtr1; // 해제된 메모리를 다시 해제하면 에러!!!

	std::shared_ptr<Cat> catPtr = std::make_shared<Cat>();
	std::cout << "count : " << catPtr.use_count() << std::endl;


	std::shared_ptr<Cat> catPtr1 = catPtr;
	std::cout << "count : " << catPtr1.use_count() << std::endl;

	//std::unique_ptr<Cat> catPtr;// = std::make_unique<Cat>();

}