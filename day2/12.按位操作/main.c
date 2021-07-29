#include<stdio.h>
#include<stdlib.h>

int main(){
	short i,result,j;
	i=5,j=7;
	printf("i|j=%d\n",i|j);
	printf("i&j=%d\n",i&j);
	printf("~i=%d\n",~i);
	printf("-i=%d\n",-i);
	i=i^j;//异或，交换值，任何数和自身异或 得到0，任何数和0异或得到自身
	j=i^j;
	i=i^j;
	printf("i=%d,j=%d\n",i,j);
	system("pause");
}