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
	
private:
	int mAge;
}; 



int main()
{
	
	std::weak_ptr<Cat> wPtr;
	//std::cout << "count : " << wPtr.use_count() << std::endl;
	{
		std::shared_ptr<Cat> sPtr = std::make_shared<Cat>();
		wPtr = sPtr;
		std::cout << "count : " << wPtr.use_count() << std::endl;
		std::cout << "lock : " << wPtr.lock() << std::endl;
		
		//lock()을 통해서 남음 shared_ptr을 확인하고 
		// Ref count가 올라간다.
		/*if (const auto spt = wPtr.lock())
		{
			std::cout << "count : " << sPtr.use_count() << std::endl;	
			spt->speak();
		}*/
	}

	std::cout << "lock : "<< wPtr.lock() << std::endl;
	if (const auto spt = wPtr.lock())
		
	{
		std::cout << "count : " << spt.use_count() << std::endl;
		spt->speak();
	}
	// 위에 sPtr이 없어지면서  wPtr.lock()이 0을 반환한다
	else {
		
		std::cout << "pointer nothing!!" << std::endl;
	}
	
	return 0;
}