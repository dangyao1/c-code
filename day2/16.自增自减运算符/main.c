#include<stdio.h>
#include<stdlib.h>
//sizeof是运算符，不是函数
int main(){
	int i=-1;
	int j;
	j=i-->-2;//j=i>-2,i--,一定要分成两步
	printf("i=%d,j=%d\n",i,j);//-2，1
	j=!++i;
	printf("i=%d,j=%d，sizeof(i)=%d\n",i,j,sizeof(i));//-1,0
	//j=i+++i;禁止编写
	//函数传递参数时，禁止使用自增自减运算符
	system("pause");
}