#include<stdio.h>
#include<stdlib.h>

int main(){
	int mon,year;
	while (scanf("%d%d",&year,&mon)!=EOF)
	{
		switch (mon)//不能写浮点型表达式
		{
		case 2:printf("%d is %d days\n",mon,28+(year%4==0&&year%100!=0||year%400==0));break;
		case 4:
		case 6:
		case 9:
		case 11:printf("%d is 30days\n",mon);break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:printf("%d is 31days\n",mon);break;
		default:
			printf("error mon\n");
			break;
		}
	}

}