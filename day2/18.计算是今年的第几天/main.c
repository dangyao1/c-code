#include<stdio.h>
#include<stdlib.h>
//���ѭ��������ѭ�����������ѭ�����δ�ϵ㣬ͣ���Ĳ㣬�ǲ�������
int main(){
	int year,mon,day,total,i;
	int date[]={31,28,31,30,31,30,31,31,30,31,30,31};
	while (scanf("%d%d%d",&year,&mon,&day)!=EOF)
	{
		total=0;
		for (i = 0; i < mon-1; i++)
		{
			total+=date[i];
		}
		total+=day;
		if (mon>2)
		{
			total+=(year%4==0&&year%100!=0||year%400==0);
		}

		printf("%4d-%02d-%02d is %dth days\n",year,mon,day,total);
	}
	system("pause");
}