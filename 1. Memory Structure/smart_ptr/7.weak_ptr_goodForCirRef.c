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
	void speak() 
	{
		std::cout << "Meow~~~~!" << std::endl;
	}
	~Cat()
	{
		std::cout << "Cat destructor" << std::endl;
	};

	std::weak_ptr<Cat> mFrined;
	//std::shared_ptr<Cat> mFrined;

}; 



int main()
{
	
	std::shared_ptr<Cat> kitty = std::make_shared<Cat>();
	std::shared_ptr<Cat> nabi = std::make_shared<Cat>();
	kitty->mFrined = nabi;
	nabi->mFrined = kitty;
	std::shared_ptr<Cat> k1 = std::make_shared<Cat>();
	k1 = kitty->mFrined.lock();
//	std::cout << "aaa : " << kitty->mFrined.lock() << std::endl;
	std::cout << "count : " << nabi.use_count() << std::endl;
	return 0;
}