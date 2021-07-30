#include<stdio.h>
#include<stdlib.h>

void print(int arr[][3],int row){
	int i,j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < sizeof(arr[0])/sizeof(int); j++)
		{
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}

}
int main(){
	int a[3][4]={1,3,5,7,2,4,6,8,9,11,13,15};
	int b[3][4]={{1},{5},{6,9}};
	print(a,4);
	system("pause");
}