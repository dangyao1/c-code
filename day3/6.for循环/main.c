#include<stdio.h>
#include<stdlib.h>
//for括号后面不能加分号,会造成计算错误，加分号 101
//break结束循环
//continue 本次循环，continue后面的语句不再执行
int main(){
	int i,sum;
	i = 1,sum=0;
	for (; i<=100; i++)
	{
		if (i%2==1)
		{
			continue;
		}
		sum+=i;
	}
	printf("sum=%d\n",sum);
	system("pause");
}