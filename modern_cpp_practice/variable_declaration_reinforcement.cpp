#include"variable_declaration_reinforcement.h"


/******************************************************************************
author:王大碗
date:2021/8/21

在传统 C++ 中，变量的声明虽然能够位于任何位置，甚至于 for 语句内能够声明一个临时变量
int，但始终没有办法在 if 和 switch 语句中声明一个临时的变量。

在下面的代码中，我们可以看到 itr 这一变量是定义在整个 main() 的作用域内的，这导致当我们
需要再次遍历整个 std::vectors 时，需要重新命名另一个变量。

C++17 消除了这一限制，使得我们可以在 if（或 switch）中完成这一操作
******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
void Var_Declarat_Reinforcement() 
{
	std::vector<int> vec = { 1, 2, 3, 4 };
	// 在 c++17 之前
	const std::vector<int>::iterator itr = std::find(vec.begin(), vec.end(), 2);//必须提前声明
	if (itr != vec.end()) 
	{
		*itr = 3;
	}
	// 需要重新定义一个新的变量
	const std::vector<int>::iterator itr2 = std::find(vec.begin(), vec.end(), 3);
	if (itr2 != vec.end()) 
	{
		*itr2 = 4;
	}
	// 将输出 1, 4, 3, 4
	for (std::vector<int>::iterator element = vec.begin(); element != vec.end(); ++element)
	{
		std::cout << *element << std::endl;
	}	

	//C++17
	// 将临时变量放到 if 语句内
	/*if (const std::vector<int>::iterator itr = std::find(vec.begin(), vec.end(), 3);
	itr != vec.end()) 
	{
		*itr = 4;
	}*/

}