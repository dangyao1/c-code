#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//scanf %d�� %f����������\n,�ո񣬺���
//scanf %c ����������
int main(){
	int i=10,j;
	char c;
	scanf("%d",&i);
	printf("%d\n",i);
	fflush(stdin);//rewind(stdin);
	scanf("%c",&c);
	printf("%c\n",c);
	system("pause");
}