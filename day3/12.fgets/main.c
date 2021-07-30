#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//fgets会把\n放入我们的字符数组
//代码即注释
int main(){
	char c[50];
	size_t len;
	while(fgets(c,sizeof(c),stdin)!=NULL){
		c[strlen(c)-1];
	puts(c);
	len=strlen(c);
	printf("%d\n",len);
	}
	system("pause");
}