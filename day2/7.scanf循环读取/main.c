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
		//����ȡ�ַ�ʱ�����ַ�ǰ����ո񼴿�
		//doubleҪ��lf����ȡ
	{
		printf("i=%d,c=%c,f=%5.2f,d=%f\n",i,c,f,d);
	}
}
void use_getchar(){
	char c;
	c=getchar();
	putchar(c);//�ȼ���printf��"%c",c��
	c=getchar();//��������
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
	//scanfѭ������
	/*scanf_while();*/
	//�����������ͻ������
	//scanf_many_type();
	//��ϰgetcgar
	use_getchar();
	//��ϰprintf��ӡ��ʽ
	//printf_format();
	//ʹ��ȡ�������
	//calc_operator();
	system("pause");
}