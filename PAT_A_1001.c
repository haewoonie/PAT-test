#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;														//��������
	int sum = 0;													//a+b�ĺ�
	scanf_s("%d %d", &a, &b);											//��ȡab
																	
	//����������Ч
	if (a<(-1.0e6) || b<(-1.0e6) || a>1.0e6 || b>1.0e6)
		printf("false");
	
	//����������Ч
	else
		sum = a + b;												//���

	//�������ݡ�sum��Χ�ڡ�2,000,000֮��,�����������
	int last = 0;													//���һ��
	int mid = 0;													//�м�һ��
	int front = 0;													//��ͷһ��

	//�������
	if (abs(sum) > 999999)
	{
		front = sum / 1000000;
		mid = abs(sum % 1000000) / 1000;
		last = abs(sum % 1000);
		printf("%d,%03d,%03d", front, mid, last);					//%03d����������Ϊ3λ

	}

	//�������
	else if (abs(sum) > 1000)    
	{
		last = abs(sum % 1000);
		mid = sum / 1000;
		printf("%d,%03d", mid, last);
	}
	
	//���һ��
	else
		printf("%d", sum);

	return 0;
}