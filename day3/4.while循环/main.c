#include<stdio.h>
#include<stdlib.h>
//whileѭ����û��ʹ�������ڼٵ����
//������whileѭ����ӷֺ�
int main(){
	int i,sum;
	i=1,sum=0;
	while (i<=100)
	{
		sum+=i;
		i++;
	}
	printf("sum=%d\n",sum);
	system("pause");
}


