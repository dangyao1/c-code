#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int arr[5][3];
	int i,j;
	//��ȡѧ���ɼ�
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	//��ӡѧ���ɼ�
	for (i = 0; i < 5; i++)
	{
		int sum = 0;
		for (j = 0; j < 3; j++){
			sum += arr[i][j];
		//printf("%d ",arr[i][j]);
		}
		printf("��%d��ѧ�����ܳɼ�Ϊ��%d\tƽ���ɼ�Ϊ��%d\n",i+1,sum,sum/3);
		//printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		int sum = 0;
		for (j = 0; j < 5; j++){
			sum += arr[j][i];
		}
		printf("��%d�ſε��ܳɼ�Ϊ��%d\tƽ���ɼ�Ϊ��%d\n",i+1,sum,sum/5);
	}
		system("pause");
}