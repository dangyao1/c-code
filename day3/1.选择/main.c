#include<stdio.h>
#include<stdlib.h>
//ħ����
//���뼴ע��
int main(){
	int i;
	while (scanf("%d",&i)!=EOF)
	{
		if (i>0)//if���ź��治�ܼӷֺ�
		{
			printf("i is bigger than zero\n");
		}else
		{
			printf("i is not bigger than zero\n");
		}
	}
	system("pause");

}