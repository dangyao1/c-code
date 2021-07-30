#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//strcpy会发生访问越界

void myStrcpy(char to[],char from[]){
	int i=0;
	while (from[i])
	{
		to[i]=from[i];
		i++;
	}
	to[i]=from[i];

}
int main(){
	char c[50]="hello world";
	char d[50];
	//strcpy(d,c);
	myStrcpy(d,c);
	puts(d);
	printf("compare result=%d\n",strcmp(c,"how"));
	strcat(d,"xiongda");
	puts(d);
	system("pause");
}