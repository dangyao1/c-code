#include<stdio.h>
#include<stdlib.h>
//������޷�����%u������з�����%d
int main(){
	//unsigned short i = 32767,j;
	//j = i + 2;
	unsigned int i = 0x7fffffff,j;
	j = i+1;
	printf("%u\n",j);
	system("pause");
}