#include<stdio.h>
#include<stdlib.h>
//魔数字
//代码即注释
int main(){
	int i;
	while (scanf("%d",&i)!=EOF)
	{
		if (i>0)//if括号后面不能加分号
		{
			printf("i is bigger than zero\n");
		}else
		{
			printf("i is not bigger than zero\n");
		}
	}
	system("pause");

}