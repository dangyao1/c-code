#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int i,j;
	for (i = 0; i < 9; i++)//���п�����
	{
		for (j = 0; j < abs(4-i); j++)//ÿһ�д�ӡʲô
		{
			putchar(' ');
		}
		for (j = 0; j < 9-2*abs(4-i); j++)
		{
			/*if (j%2!=0)
			{
				putchar(' ');
			}else
			{
					putchar('*');
			}*/
			if (j==0||j==8-2*abs(4-i))
			{
				putchar('*');
			}else
			{
				putchar(' ');
			}
		}
		putchar('\n');
	}
	system("pause");
}