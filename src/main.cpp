#include <iostream>
#include "../include/overview.h"


int main()
{
	// ����һ��list����Ԫ��������int��deque
	std::list<std::deque<int>> dlist;

	std::vector ivec{ 1, 2, 3 ,4 ,5 };
	std::cout << find_value(ivec.begin(), ivec.end(), 7) << std::endl;
	return 0;
}