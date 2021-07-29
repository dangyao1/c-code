#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[5]={9,11,8,9,11};
	int i,result=0;
	for (i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		result^=arr[i];
	}
	printf("find value=%d\n",result);
	system("pause");
}