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
