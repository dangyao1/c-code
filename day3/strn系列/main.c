#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char c[50];
	char d[50];
	while (gets(c)!=NULL)
	{
		memset(d,0,sizeof(d));//把从d开始都接下来的每一个字节都填为0
		strncpy(d,c,7);
		puts(d);
		printf("cmp result=%d\n",strncmp(d,"李宁",2));//一个汉字两个字节
		strncat(d,"牛牛牛",2);
		puts(d);
	}
	system("pause");
}