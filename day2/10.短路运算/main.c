#include<stdio.h>
#include<stdlib.h>

int main(){
	int year;
	int i=5;
	int j;
	//while (scanf("%d",&year)!=EOF)
	//{
	//	if (year%4==0&&year%100!=0||year%400==0)//判断是否为闰年
	//	{
	//		printf("%d is leap year\n",year);
	//	}else
	//	{
	//		printf("%d is not leap year\n",year);
	//	}
	//}
	j=1;
	j==1&&printf("system is error\n");//短路操作
	j=1;
	j==1||(i==j);//短路操作
	printf("i=%d\n",i);
	system("pause");
}