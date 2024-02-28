#pragma once
#include <deque>
#include <list>
#include <vector>
/// <summary>
/// 编写函数，接受一对指向vector<int>的选代器和一个int 值。在两个迭代器指定的范围中查找给定的值，返回一个布尔值来指出是否找到。
/// </summary>
/// <param name="ivec"></param>
/// <param name="num"></param>
/// <returns></returns>
bool find_value(std::vector<int>::iterator begin, std::vector<int>::iterator end, int value)
{
	for (auto it = begin; it != end; ++it)
	{
		if (*it == value)
		{
			return true; // 找到值，返回true
		}
	}
	return false; // 没有找到值，返回false
}

/// <summary>
/// 重写上一题的函数，返回一个迭代器指向找到的元素。注意，程序必须处理未找到给定值的情况。
/// </summary>
/// <param name="begin"></param>
/// <param name="end"></param>
/// <param name="value"></param>
/// <returns></returns>
std::vector<int>::iterator find_iter_value(std::vector<int>::iterator begin, std::vector<int>::iterator end, int value)
{
	for (auto it = begin; it != end; ++it)
	{
		if (*it == value)
		{
			return it; // 返回指向找到元素的迭代器
		}
	}
	return end; // 返回 end 迭代器表示未找到
}
/// <summary>
/// 
/// </summary>
/// <param name="vec1"></param>
/// <param name="vec2"></param>
/// <returns></returns>
bool areVectorsEqual(std::vector<int> vec1, std::vector<int> vec2)
{
	return vec1 == vec2;
}

/// <summary>
/// 
/// </summary>
/// <param name="list"></param>
/// <param name="vec"></param>
/// <returns></returns>
bool compareListAndVectorElements(std::list<int> list, std::vector<int> vec)
{

	return (std::vector<int>(list.begin(), list.end()) == vec);
}

/*
	编写函数，接受一个forward list<string>和两个string共三个参
数。函数应在链表中查找第一个string,并将第二个string插入到紧接着第一个
string之后的位置。若第一个string未在链表中，则将第二个string插入到链表
末尾
*/

void change(std::forward_list<std::string>& fl,  std::string const first, std::string const second)
{
	auto curr = fl.begin();
	while (curr != fl.end())
	{
		if (*curr == first)
		{
			curr = fl.insert_after(curr, second);
		}
		else
		{
			curr++;
		}
	}
}



