#include <stdio.h>

int main1()
{
	printf("hello world");
	return 0;
}


int main2()
{
	printf("%d\n",sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	
	return 0;
}


int main3()
{
	double age = 17.1;
	age = age + 1;
		printf("%lf", age);

}

int main4()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d", sum);
	
	return 0;
}