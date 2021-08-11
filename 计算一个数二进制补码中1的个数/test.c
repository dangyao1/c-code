#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int count_bit_one(unsigned int n) {
//	int count = 0;
//	while (n)
//	{
//		if (n%2==1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

int count_bit_one(int n) {
	int count = 0;
	int i = 0;
	for ( i = 0; i < 32; i++)
	{
		if (((n>>i)&1)==1)
		{
			count++;
		}
	}
	return count;
}

int main() {


	int a = 0;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("%d\n", count);
	return 0;

}