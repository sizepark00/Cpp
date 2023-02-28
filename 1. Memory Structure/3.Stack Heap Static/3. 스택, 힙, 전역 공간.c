#include <iostream>
#include <array>
// Static
int ga = 0;

int main()
{
	// Stack
	// 컴파일 타임에 결정되어야 한다.
	// overflow 발생
	int sa = 0;
	std::array<int, 200> aa;
	
	std::cout << "&sa : " << (long)&sa << std::endl;


	// Heap 
	// 런타임에 결정 가능 -> 다이나믹, 유연한, large size 

	int* hap = new int;
	std::cout << "&ha : " << (long)hap << std::endl;

	//Prefer Smart pointer.
	delete hap;
	std::cout << "&ga : " << (long)&ga << std::endl;



	return 0;
