//#pragma once // 아래 전처리와 같은 내용
#ifndef CAT_H
#define CAT_H

#include <vector>
//#include <string.h>
class Cat
{
public:
	void speak();

private:
	std::vector<std::string> mFriends;

};
#endif // !CAT_H