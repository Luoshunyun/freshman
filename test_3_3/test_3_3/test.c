#include<stdio.h>


//int main()
//{
//	int input = 0;
//		printf("�������(1/0)");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("�����");
//	}
//	else
//	{
//		printf("ѧ���");
//	}
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("�����!:%d\n",line);
//		line++;
//	}
//	if (line == 30000)
//	{
//			printf("����");
//	}
//	 return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//		return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int	num2 = 0;
//	scanf("%d%d", &num1,&num2);
//	//int num3 = num1 + num2;
//	//������ʽ�����
//	int sum = Add(num1, num2);
//	printf("%d", sum);
//	return 0;
//}



int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}
