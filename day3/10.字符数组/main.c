#include<stdio.h>
#include<stdlib.h>

void mystrlen(char c[]){

	int  i;
	for(i=0;c[i]!=0;i++){
	
	}
	return i;
}

void print(char c[]){
	int i=0;
	while (c[i])
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	

}
int main(){
	char c[7]="ABCDEF";
	char d[10];
	//printf("%s\n",c);
	print(c);
	mystrlen(c);
	scanf("%s%s",c,d);
	printf("%s %s\n",c,d);
	system("pause");
}
