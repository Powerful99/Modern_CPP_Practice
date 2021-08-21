#include"variable_length_parameter_template.h"
#include<iostream>

/*******************************************************
//  解参数包
//  1.sizeof() 获得函数参数个数
//  2.递归
*******************************************************/

//获得函数参数个数
template<typename... Ts>
void magic(Ts... args) 
{
	std::cout << sizeof...(args) << std::endl;
}
//递归模板函数
template<typename T0>
void printf1(T0 value)
{
	std::cout << value << std::endl;
}
template<typename T, typename... Ts>
void printf1(T value, Ts... args) 
{
	std::cout << value << std::endl;
	printf1(args...);
}
int RecursiveTemplateFunc() 
{
	printf1(1, 2, "123", 1.1);
	return 0;
}
//变参模板展开
template<typename T0, typename... T>
void printf2(T0 t0, T... t) 
{
	std::cout << t0 << std::endl;
	if constexpr (sizeof...(t) > 0)
	{
		printf2(t...);
	}
}

void VarLenParaTemplate()
{
	magic();
	magic(1);
	magic(1, 2);
	RecursiveTemplateFunc();
	printf2(1,2,3,4,5);
}