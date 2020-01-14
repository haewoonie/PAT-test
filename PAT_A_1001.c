#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;														//两个加数
	int sum = 0;													//a+b的和
	scanf_s("%d %d", &a, &b);											//读取ab
																	
	//输入数据无效
	if (a<(-1.0e6) || b<(-1.0e6) || a>1.0e6 || b>1.0e6)
		printf("false");
	
	//输入数据有效
	else
		sum = a + b;												//求和

	//处理数据。sum范围在±2,000,000之间,最坏情况输出三段
	int last = 0;													//最后一段
	int mid = 0;													//中间一段
	int front = 0;													//开头一段

	//输出三段
	if (abs(sum) > 999999)
	{
		front = sum / 1000000;
		mid = abs(sum % 1000000) / 1000;
		last = abs(sum % 1000);
		printf("%d,%03d,%03d", front, mid, last);					//%03d控制输出宽度为3位

	}

	//输出两段
	else if (abs(sum) > 1000)    
	{
		last = abs(sum % 1000);
		mid = sum / 1000;
		printf("%d,%03d", mid, last);
	}
	
	//输出一段
	else
		printf("%d", sum);

	return 0;
}