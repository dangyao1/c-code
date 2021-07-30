#include<stdio.h>
#include<stdlib.h>
//while循环内没有使条件趋于假的语句
//不能在while循环后加分号
int main(){
	int i,sum;
	i=1,sum=0;
	while (i<=100)
	{
		sum+=i;
		i++;
	}
	printf("sum=%d\n",sum);
	system("pause");
}


