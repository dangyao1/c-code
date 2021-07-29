#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b,c,max;
	while (scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		max=a>(b>c?b:c)?a:(b>c?b:c);
		printf("max=%d\n",max);
	}
	system("pause");
}