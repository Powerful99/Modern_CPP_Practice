#include<iostream>
#include"constexpr_practice.h"


constexpr int Fibonacci11(const int n)
{
	return n == 1 || n == 2 ? 1 : Fibonacci11(n - 1) + Fibonacci11(n - 2);
}//************************************//ע�⣺֧��C++14�ı�����ʹ�ã�����ᱨ��//************************************/*constexpr int Fibonacci14(const int n) 
{
	if (n == 1) return 1;
	if (n == 2) return 1;
	return Fibonacci14(n - 1) + Fibonacci14(n - 2);
}*/constexpr int Length_Constexpr()
{
	return 5;
}
void constexpr_practice()
{
	const int klen1 = 5;
	int a[klen1];//���Ϸ�

	constexpr int klen_2_constexpr = 1 + 2 + 3;
	char arr_1[klen_2_constexpr]; // �Ϸ�	char arr_2[Length_Constexpr() + 1]; // �Ϸ�	std::cout << Fibonacci11(10) << std::endl;
	// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55    //�������Ż��������ֻ�����55
	std::cout << Fibonacci11(10) << std::endl;
}