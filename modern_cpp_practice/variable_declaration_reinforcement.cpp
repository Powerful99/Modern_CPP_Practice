#include"variable_declaration_reinforcement.h"


/******************************************************************************
author:������
date:2021/8/21

�ڴ�ͳ C++ �У�������������Ȼ�ܹ�λ���κ�λ�ã������� for ������ܹ�����һ����ʱ����
int����ʼ��û�а취�� if �� switch ���������һ����ʱ�ı�����

������Ĵ����У����ǿ��Կ��� itr ��һ�����Ƕ��������� main() ���������ڵģ��⵼�µ�����
��Ҫ�ٴα������� std::vectors ʱ����Ҫ����������һ��������

C++17 ��������һ���ƣ�ʹ�����ǿ����� if���� switch���������һ����
******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
void Var_Declarat_Reinforcement() 
{
	std::vector<int> vec = { 1, 2, 3, 4 };
	// �� c++17 ֮ǰ
	const std::vector<int>::iterator itr = std::find(vec.begin(), vec.end(), 2);//������ǰ����
	if (itr != vec.end()) 
	{
		*itr = 3;
	}
	// ��Ҫ���¶���һ���µı���
	const std::vector<int>::iterator itr2 = std::find(vec.begin(), vec.end(), 3);
	if (itr2 != vec.end()) 
	{
		*itr2 = 4;
	}
	// ����� 1, 4, 3, 4
	for (std::vector<int>::iterator element = vec.begin(); element != vec.end(); ++element)
	{
		std::cout << *element << std::endl;
	}	

	//C++17
	// ����ʱ�����ŵ� if �����
	/*if (const std::vector<int>::iterator itr = std::find(vec.begin(), vec.end(), 3);
	itr != vec.end()) 
	{
		*itr = 4;
	}*/

}