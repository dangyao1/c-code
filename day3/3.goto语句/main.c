#include<stdio.h>
#include<stdlib.h>

int main(){
	int i=1,sum=0;
	lable:
	sum+=i;
	i++;
	if (i<=100)
	{
		goto lable;
	}
	
	printf("sum=%d\n",sum);
	system("pause");

}