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
{
	// C++ style heap Cat
	std::unique_ptr<Cat> cat = std::make_unique<Cat>();
	// Arrray heap Cat
	std::vector<Cat> cats(5);

	//
	std::unique_ptr<int> ip = std::make_unique<int>();

	std::vector<int> ips(5);

	return 0;
}