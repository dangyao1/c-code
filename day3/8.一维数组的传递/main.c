#include<stdio.h>
#include<stdlib.h>
//数组名存的是数组的起始地址
//print地址空间相对于main函数，是低越界
void print(int arr[],int arrLen){
	int i;
	for (i = 0; i < arrLen; i++)
	{
		printf("%3d",arr[i]);
	}
	printf("\n");

}
//函数调用是值传递
int main(){
	int arr[]={1,2,3,4,5};
	print(arr,5);//一维数组传递时长度无法传递给子函数
	system("pause");
}