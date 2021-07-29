#include<stdio.h>
#include<stdlib.h>

void scanf_while(){
	int i,ret;
	while (fflush(stdin),(ret=scanf("%d",&i))!=EOF)
	{
		printf("%d\n",i);
	}
}
void scanf_many_type(){
	int i,ret;
	char c;
	float f;
	double d;
	while (fflush(stdin),(ret=scanf("%d %c%f%lf",&i,&c,&f,&d))!=EOF)
		//当读取字符时，在字符前加入空格即可
		//double要用lf来读取
	{
		printf("i=%d,c=%c,f=%5.2f,d=%f\n",i,c,f,d);
	}
}
void use_getchar(){
	char c;
	c=getchar();
	putchar(c);//等价于printf（"%c",c）
	c=getchar();//不会阻塞
	putchar(c);
}
void printf_format(){
	int i=10;
	float f=98.3;
	printf("student info num=%3d,score=%5.2f\n",i,f);
	printf("student info num=%-3d,score=%5.2f\n",i,f);
	printf("%10s\n","hello");
}
void calc_operator(){
	int i=12345,result;
	while (i)
	{
		printf("%c\n",i%10+48);
		i=i/10;
	}
}
int main(){
	//scanf循环输入
	/*scanf_while();*/
	//多种数据类型混合输入
	//scanf_many_type();
	//练习getcgar
	use_getchar();
	//练习printf打印格式
	//printf_format();
	//使用取余运算符
	//calc_operator();
	system("pause");
}