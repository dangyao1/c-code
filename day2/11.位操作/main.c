#include<stdio.h>
#include<stdlib.h>
	//���ƣ���������2����������һ������2
	//�޷�������Ҳ������
int main(){
	unsigned int i,result;
	/*while (scanf("%d",&i)!=EOF)
	{*/
	i=0xfffffffd;
		result=i>>1;
		printf("result=%d\n",result);
	/*}*/
	system("pause");
}