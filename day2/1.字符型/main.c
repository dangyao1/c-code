#include<stdio.h>
#include<stdlib.h>
//2012要求变量都定义在函数前面
int main(){
	char *p = "";
char c = 'A';
int i=0;
printf("%c\n",c+32);
printf("%d\n",c);
//for(i=0;i<2;i++){
//	printf("%c",0xCC);
//}
printf("abc\rd\n");
printf("abc\b \bd\n");
printf("\123\n");
printf("\ta\n");
printf("\\\\");
printf("abc\b ");
system("pause");
}