#include<iostream>
#include"nullptr_practice.h"


void Function(char *)
{
	std::cout << "Function(char*) is called" << std::endl;
}
void Function(int i)
{
	std::cout << "Function(int) is called" << std::endl;
}

void nullptr_practice()
{
	/***************************************/
	//��֤��������null��λΪ0���ǣ�void*��0
	/***************************************/
	if (std::is_same<decltype(NULL), decltype(0)>::value)
	{
		std::cout << "NULL == 0" << std::endl;
	}
	if (std::is_same<decltype(NULL), decltype((void*)0)>::value)
	{
		std::cout << "NULL == (void *)0" << std::endl;
	}
	if (std::is_same<decltype(NULL), std::nullptr_t>::value)
	{
		std::cout << "NULL == nullptr" << std::endl;
	}
		
	Function(0);		// ���� Function(int)
	Function(NULL);		//���� Function(int)
	Function(nullptr);	// ���� Function(char*)
}

