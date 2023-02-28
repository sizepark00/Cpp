#include <iostream>
#include <memory>
#include <vector>

class Animal {
public:
	Animal() {}

	~Animal() {}
};

class Cat : public Animal
{
public:
	Cat():mAge{0}
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

class Dog : public Animal
{
public:
	Dog() {};
	~Dog() {};
};

class Zoo {
public:
	Zoo(int n)
	{
		if (n == 1)
		{
			mAnimal = std::make_unique<Cat>();
			//mAnimal = make_unique<Cat>();
		}				  
		else			  
		{				  
			mAnimal = std::make_unique<Dog>();
		}
	}
	~Zoo() {
		std::cout << "Zoo Destructor" << std::endl;
	}

private:
	std::unique_ptr<Animal> mAnimal;
};


int main()
{
	std::unique_ptr<Zoo> zoo = std::make_unique<Zoo>(1);

	std::unique_ptr<Zoo> zoo1 = std::move(zoo);

	//std::unique_ptr<Cat> catPtr;// = std::make_unique<Cat>();

}