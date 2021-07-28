#include<stdio.h>
#include<stdlib.h>
int main(){
	double f = 1.23456789e10,d;
	d=f+20;
	printf("%f,%f",f,d);//12345678920
	 f = 1.456;
	printf("%f",f);
  	if (f-1.456>=-1e-6 && f-1.456<=1e-6){
		printf("f is 1.456\n");
	}else{
		printf("f is not 1.456\n");
	}
	f = 4.5;

	system("pause");

}