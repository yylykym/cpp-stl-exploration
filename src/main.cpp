#include <deque>
#include <iostream>
#include <list>
#include <vector>

using namespace std;


bool find(vector<int>& ivec, int num)
{
	for (auto iter = ivec.begin(); iter != ivec.end(); iter++)
	{
		if (*iter == num) return true;
	}
}

int main()
{
	// ����һ��list����Ԫ��������int��deque
	list<deque<int>> dlist;

	vector ivec{1, 2, 3 ,4 ,5};
	cout << find(ivec, 7) << endl;
	return 0;
}