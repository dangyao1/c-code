#include<stdio.h>
#include<stdlib.h>

int main(){
	short i,result,j;
	i=5,j=7;
	printf("i|j=%d\n",i|j);
	printf("i&j=%d\n",i&j);
	printf("~i=%d\n",~i);
	printf("-i=%d\n",-i);
	i=i^j;//��򣬽���ֵ���κ������������ �õ�0���κ�����0���õ�����
	j=i^j;
	i=i^j;
	printf("i=%d,j=%d\n",i,j);
	system("pause");
}