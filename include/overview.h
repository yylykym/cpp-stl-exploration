#pragma once
#include <deque>
#include <list>
#include <vector>
/// <summary>
/// ��д����������һ��ָ��vector<int>��ѡ������һ��int ֵ��������������ָ���ķ�Χ�в��Ҹ�����ֵ������һ������ֵ��ָ���Ƿ��ҵ���
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
			return true; // �ҵ�ֵ������true
		}
	}
	return false; // û���ҵ�ֵ������false
}

/// <summary>
/// ��д��һ��ĺ���������һ��������ָ���ҵ���Ԫ�ء�ע�⣬������봦��δ�ҵ�����ֵ�������
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
			return it; // ����ָ���ҵ�Ԫ�صĵ�����
		}
	}
	return end; // ���� end ��������ʾδ�ҵ�
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
	��д����������һ��forward list<string>������string��������
��������Ӧ�������в��ҵ�һ��string,�����ڶ���string���뵽�����ŵ�һ��
string֮���λ�á�����һ��stringδ�������У��򽫵ڶ���string���뵽����
ĩβ
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



