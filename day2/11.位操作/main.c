#include<stdio.h>
#include<stdlib.h>
	//右移，正数除以2，负数，减一，除以2
	//无符号数，也是正数
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