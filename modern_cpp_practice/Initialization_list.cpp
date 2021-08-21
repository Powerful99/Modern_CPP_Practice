#include <initializer_list>]
#include<iostream>
#include <vector>

class CMagicFoo 
{
public:
	std::vector<int> vec;
	CMagicFoo(std::initializer_list<int> list)
	{
		for (std::initializer_list<int>::iterator it = list.begin(); it != list.end(); ++it)
		{
			vec.push_back(*it);
		}	
	}
};
void InitList() 
{
	// after C++11
	CMagicFoo magicFoo = { 1, 2, 3, 4, 5 };
	std::cout << "magicFoo: "<<std::endl;
	for (std::vector<int>::iterator it = magicFoo.vec.begin(); it != magicFoo.vec.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
}