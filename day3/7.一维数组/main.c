#include<stdio.h>
#include<stdlib.h>
#define N 5
//防止访问越界
//stack around arr...栈使用访问越界
//stackoverflow  栈溢出
//scanf字符数组，不能检测输入的内容大于数组长度
int main(){
	int i=10;
	char c[5];
	int arr[N]={1,2,3,4,5};//arr[0] arr[4]
	//arr[5]=6;//访问越界
	//arr[6]=7;
	//arr[7]=8;
	printf("i=%d\n",i);
	scanf("%s",c);
	printf("%s\n",c);
	system("pasue");
	
}