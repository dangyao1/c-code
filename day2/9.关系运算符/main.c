#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	while (scanf("%d",&i)!=EOF)
	{
		if (3<i && i<10)
		{
			printf("i is between 3 and 10\n");
		}else
		{
			printf("i is not between 3 and 10\n");
		}

	}
	system("pause");
}