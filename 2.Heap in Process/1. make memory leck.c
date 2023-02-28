#include <iostream>
#include <memory>
#include <vector>
#include <stdio.h>
#include <vector>
#include <crtdbg.h>


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
	int allocation = 0;;
	std::cout << "how many ? " << std::endl;
	std::cin >> allocation;
	for (int i = 0; i < allocation; i++)
	{
		int* ip = new int[250];
		std::cout << "mem" << std::flush;
		//delete[] ip;
		_CrtDumpMemoryLeaks();
	}


	return 0;
}