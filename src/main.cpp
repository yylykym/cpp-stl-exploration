#include <iostream>
#include <forward_list>
#include <string>
#include "../include/overview.h"


int main()
{
	// 定义一个list，其元素类型是int的deque
	//std::list<std::deque<int>> dlist;

	//std::vector ivec{ 1, 2, 3 ,4 ,5 };
	////std::cout << find_value(ivec.begin(), ivec.end(), 7) << std::endl;

	/*
	如何从一个1ist<int>初始化一个vector<double>？从一个vector<int>又该如何创建？编写代码验证你的答案。
	*/
	//std::list<int> ilist;
	//std::vector<double> vec(ilist.begin(), ilist.end()); // 用 ilist 初始化 vec


	//std::list<int> secondIList(ilist);

	/*
		编写程序，将一个1ist中的char*指针（指向C风格字符串）元素赋值
		给一个vector中的string。
	*/
	//std::list<char*> clist;
	//std::vector<std::string> svec;
	//svec.assign(clist.begin(), clist.end());

	/*
		编写程序，从标准输入读取string序列，存入一个deque中，编写一个
		循环，用迭代器打印deque中的元素。
	*/
	//std::string line;
	//std::deque<std::string> deque;
	//while (std::getline(std::cin, line))
	//{
	//	deque.push_back(line);
	//}

	//for (std::deque<std::string>::iterator iter = deque.begin(); iter != deque.end(); iter++)
	//{
	//	std::cout << *iter << std::endl;
	//}

	//std::list<int> l{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//std::deque<int> odd, even;
	//for (auto i : l)
	//	(i & 0x1 ? odd : even).push_back(i);

	//for (auto i : odd) std::cout << i << " ";
	//std::cout << std::endl;
	//for (auto i : even)std::cout << i << " ";
	//std::cout << std::endl;

	// 使用下面代码定义的ia,将ia拷贝到一个vector和一个1ist中。使用单迭代器版本的erase从list中删除奇数元素，从vector中剧除偶数元素。
	int la[] = { 2,1,2,2,3,5,8,13,21,55,89 };
	//std::vector<int> vec(la, std::end(la));
	//std::list<int> lst(la, std::end(la));

	//for (auto iter = vec.begin(); iter != vec.end(); )
	//{
	//	*iter & 0x1 ? iter = vec.erase(iter) : iter++; // 注意这里要更新迭代器
	//}
	//for (auto iter = lst.begin(); iter != lst.end(); )
	//{
	//	!(*iter & 0x1) ? iter = lst.erase(iter) : iter++;
	//}

	//for (auto i : vec)
	//{
	//	std::cout << i << " ";
	//}
	//std::cout << std::endl;
	//for (auto i : lst)
	//{
	//	std::cout << i << " ";
	//}

	// 编写程序，查找并别除forward_list<int>中的奇数元素。
	//std::forward_list<int> fl(la, std::end(la));
	//auto prev = fl.before_begin();
	//auto curr = fl.begin();
	//while (curr != fl.cend())
	//{
	//	if ((*curr & 0x1))
	//	{
	//		curr = fl.erase_after(prev); // 更新curr的位置， fl.erase_after(prev) 返回删除节点的下一个位置的迭代器
	//	}
	//	else
	//	{
	//		prev = curr; // 前移
	//		curr++;
	//	}
	//}

	//for (auto i : fl)
	//{
	//	std::cout << i << " ";
	//}



	//std::forward_list<std::string> fl{ "1","2","2","3"};

	//change(fl, "2", "4");

	//for (auto i : fl)
	//{
	//	std::cout << i << " ";
	//}


	std::deque<int> deque{ 1,2,3,4,5 };
	//auto ptr = (deque.begin() + 2);
	auto ptr = &deque[4];
	std::deque<int>::iterator iter = deque.begin();
	deque.erase(deque.begin()+3);

	for (iter = deque.begin(); iter != deque.end(); iter++)
	{
		std::cout << *iter << " ";
	}

	std::cout << std::endl;

	std::cout << *ptr << std::endl;

	return 0;
}