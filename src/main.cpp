#include <iostream>
#include <forward_list>
#include <string>
#include "../include/overview.h"


int main()
{
	// ����һ��list����Ԫ��������int��deque
	//std::list<std::deque<int>> dlist;

	//std::vector ivec{ 1, 2, 3 ,4 ,5 };
	////std::cout << find_value(ivec.begin(), ivec.end(), 7) << std::endl;

	/*
	��δ�һ��1ist<int>��ʼ��һ��vector<double>����һ��vector<int>�ָ���δ�������д������֤��Ĵ𰸡�
	*/
	//std::list<int> ilist;
	//std::vector<double> vec(ilist.begin(), ilist.end()); // �� ilist ��ʼ�� vec


	//std::list<int> secondIList(ilist);

	/*
		��д���򣬽�һ��1ist�е�char*ָ�루ָ��C����ַ�����Ԫ�ظ�ֵ
		��һ��vector�е�string��
	*/
	//std::list<char*> clist;
	//std::vector<std::string> svec;
	//svec.assign(clist.begin(), clist.end());

	/*
		��д���򣬴ӱ�׼�����ȡstring���У�����һ��deque�У���дһ��
		ѭ�����õ�������ӡdeque�е�Ԫ�ء�
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

	// ʹ��������붨���ia,��ia������һ��vector��һ��1ist�С�ʹ�õ��������汾��erase��list��ɾ������Ԫ�أ���vector�о��ż��Ԫ�ء�
	int la[] = { 2,1,2,2,3,5,8,13,21,55,89 };
	//std::vector<int> vec(la, std::end(la));
	//std::list<int> lst(la, std::end(la));

	//for (auto iter = vec.begin(); iter != vec.end(); )
	//{
	//	*iter & 0x1 ? iter = vec.erase(iter) : iter++; // ע������Ҫ���µ�����
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

	// ��д���򣬲��Ҳ����forward_list<int>�е�����Ԫ�ء�
	//std::forward_list<int> fl(la, std::end(la));
	//auto prev = fl.before_begin();
	//auto curr = fl.begin();
	//while (curr != fl.cend())
	//{
	//	if ((*curr & 0x1))
	//	{
	//		curr = fl.erase_after(prev); // ����curr��λ�ã� fl.erase_after(prev) ����ɾ���ڵ����һ��λ�õĵ�����
	//	}
	//	else
	//	{
	//		prev = curr; // ǰ��
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