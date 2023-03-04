#include<stdio.h>


//int main()
//{
//	int input = 0;
//		printf("玩怪猎吗(1/0)");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("玩怪猎");
//	}
//	else
//	{
//		printf("学编程");
//	}
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("玩怪猎!:%d\n",line);
//		line++;
//	}
//	if (line == 30000)
//	{
//			printf("天尊");
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
//	//函数方式来解决
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
