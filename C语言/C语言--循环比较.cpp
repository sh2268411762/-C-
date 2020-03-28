/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sum = 0;  //定义计算结果变量sum
	int i = 1;    //定义循环数字变量i
	int flag = 1; //定义符号状态变量flag

	//使用while循环
	while (i <= 100)
	{
		if (i % 2 == 0)
		{
			sum = sum - i;
		}
		else
		{
			sum = sum + i;
		}
		i++;
	}
	printf("sum=%d\n", sum);
	i = 1;  //重新初始化变量i
	//do-while循环
	do {
		i++;
		sum += i * flag;
		flag *= -1;

	} while (i <= 100);
	printf("sum=%d\n", sum);
	i = 1;  //重新初始化变量i
	sum = 0;
	//使用for循环
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			sum = sum - i;
		}
		else
		{
			sum = sum + i;
		}
	}
	printf("sum=%d\n", sum);

	return 0;
}
*/