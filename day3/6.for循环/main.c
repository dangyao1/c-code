#include<stdio.h>
#include<stdlib.h>
//for���ź��治�ܼӷֺ�,����ɼ�����󣬼ӷֺ� 101
//break����ѭ��
//continue ����ѭ����continue�������䲻��ִ��
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