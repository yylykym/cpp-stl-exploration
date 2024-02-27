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
