#include<stdio.h>
#include<stdlib.h>
//������������������ʼ��ַ
//print��ַ�ռ������main�������ǵ�Խ��
void print(int arr[],int arrLen){
	int i;
	for (i = 0; i < arrLen; i++)
	{
		printf("%3d",arr[i]);
	}
	printf("\n");

}
//����������ֵ����
int main(){
	int arr[]={1,2,3,4,5};
	print(arr,5);//һά���鴫��ʱ�����޷����ݸ��Ӻ���
	system("pause");
}