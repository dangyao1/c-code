#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char c[50];
	char d[50];
	while (gets(c)!=NULL)
	{
		memset(d,0,sizeof(d));//�Ѵ�d��ʼ����������ÿһ���ֽڶ���Ϊ0
		strncpy(d,c,7);
		puts(d);
		printf("cmp result=%d\n",strncmp(d,"����",2));//һ�����������ֽ�
		strncat(d,"ţţţ",2);
		puts(d);
	}
	system("pause");
}