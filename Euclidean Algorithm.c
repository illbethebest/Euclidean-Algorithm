/*
程序说明：欧几里得算法，求两个正整数的最大公约数。
*/

#include "stdafx.h"

#define uint unsigned int
uint gcd(uint Positive_Integer_1, uint Positive_Integer_2);

//定义法
int main()
{
	uint Positive_Integer_1, Positive_Integer_2;	//输入两个正整数。
	printf("请输入两个正整数：\n");
	scanf_s("%d %d", &Positive_Integer_1, &Positive_Integer_2);
	uint Greatest_Common_Divisor = gcd(Positive_Integer_1, Positive_Integer_2);
	printf("%d和%d的最大公约数是：%d\n",Positive_Integer_1,Positive_Integer_2, Greatest_Common_Divisor);
    return 0;
}

/*
函数说明：运用欧几里德算法，求两个正整数的最大公约数。
*/
uint gcd(uint Positive_Integer_1, uint Positive_Integer_2)
{
	uint Greatest_Common_Divisor;
	while (Positive_Integer_2>0)   //如果余数不为0，就一直进行辗转相除
	{ 
		Greatest_Common_Divisor = Positive_Integer_1 % Positive_Integer_2;  
		Positive_Integer_1 = Positive_Integer_2;
		Positive_Integer_2 = Greatest_Common_Divisor;

	}
	return Positive_Integer_1;	//余数为0， Positive_Integer_1即为最大公约数。
}

/*
//递归法
uint gcd(uint Positive_Integer_1, uint Positive_Integer_2); 

int main()
{
	uint Positive_Integer_1, Positive_Integer_2;
	printf("请输入2个正整数：\n");
	scanf_s("%d%d", &Positive_Integer_1,&Positive_Integer_2);
	uint Greatest_Common_Divisor = gcd(Positive_Integer_1, Positive_Integer_2); 
	printf("%d和%d的最大公约数是:%d", Positive_Integer_1, Positive_Integer_2, Greatest_Common_Divisor);
	return 0;
}
*/
/*
uint gcd(uint Positive_Integer_1, uint Positive_Integer_2)
{
	return Positive_Integer_2 ? gcd(Positive_Integer_2, Positive_Integer_1%Positive_Integer_2) : Positive_Integer_1;
}
*/