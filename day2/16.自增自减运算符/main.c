#include<stdio.h>
#include<stdlib.h>
//sizeof������������Ǻ���
int main(){
	int i=-1;
	int j;
	j=i-->-2;//j=i>-2,i--,һ��Ҫ�ֳ�����
	printf("i=%d,j=%d\n",i,j);//-2��1
	j=!++i;
	printf("i=%d,j=%d��sizeof(i)=%d\n",i,j,sizeof(i));//-1,0
	//j=i+++i;��ֹ��д
	//�������ݲ���ʱ����ֹʹ�������Լ������
	system("pause");
}