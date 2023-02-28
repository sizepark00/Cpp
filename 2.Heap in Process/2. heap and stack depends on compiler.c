#include <iostream>

int main()
{
	// 컴파일에 따라 스택이 쌓이는 위치가 다르고
	// 스택과 힙영역을 나누는 크기 또한 다르가
	// gcc vs glang


	int sa = 0;
	int sb = 1;

	std::cout << "&sa : " << (long)&sa << std::endl;
	std::cout << "&sb : " << (long)&sb << std::endl;

	int* hap = new int;
	int* hbp = new int;

	std::cout << "&hap: " << (long)&hap << std::endl;
	std::cout << "&hbp: " << (long)&hbp << std::endl;

	std::cout << "&ha : " << (long)hap << std::endl;
	std::cout << "&hb : " << (long)hbp << std::endl;

	//Prefer Smart pointer.
	delete hap;
	delete hbp;

	return 0;

}