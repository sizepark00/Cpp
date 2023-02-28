#include <iostream>
#include <memory>
#include <vector>


// Cat has Shared Ptr memeber variable
class Cat
{
public:
	explicit Cat(int n):mVar{std::make_shared<int>()}
	{
		std::cout << "Cat constructor" << std::endl;

	}
	~Cat() noexcept
	{
		std::cout << "Cat destructor" << std::endl;
	}
	Cat clone() const //Create deep copied object
	{
		Cat tmp{ *mVar };
		return tmp;
	}
private:
	std::shared_ptr<int> mVar;

}; 



int main()
{
	const Cat kitty{ 2 };
	
	const Cat nabi{ kitty.clone() };
	

	return 0;
}