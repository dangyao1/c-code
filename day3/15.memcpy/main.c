#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//strcpy不能用于整型数组
int main(){
	int a[5]={1,2,3,4,5};
	int b[5];
	memcpy(b,a,sizeof(a));
	system("pause");
}