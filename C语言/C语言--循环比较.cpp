/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sum = 0;  //�������������sum
	int i = 1;    //����ѭ�����ֱ���i
	int flag = 1; //�������״̬����flag

	//ʹ��whileѭ��
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
	i = 1;  //���³�ʼ������i
	//do-whileѭ��
	do {
		i++;
		sum += i * flag;
		flag *= -1;

	} while (i <= 100);
	printf("sum=%d\n", sum);
	i = 1;  //���³�ʼ������i
	sum = 0;
	//ʹ��forѭ��
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