#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ���ƣ�
//�ַ������򣨵ݹ�ʵ�֣�
//��Ŀ���ݣ�
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//
//ʵ�֣��������ַ����е��ַ��������С�
//
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
#include<stdio.h>
#include <string.h>

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr)-1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
void reverse_string(char* arr)
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr+1) >=2)
		reverse_string(arr+1);
	arr[len - 1] = tmp;
}
//
int main()
{
	char arr[] = "abcdefg";//fedcba
	reverse_string(arr);
	printf("%s\n", arr);

	return 0;
}