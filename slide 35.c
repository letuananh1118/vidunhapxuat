#include<stdio.h>

void main()
{
	int a;
	float b;
	char ch,name[40];
	
	printf("please enter the data\n");
	scanf("%d %f %c %s",&a,&b,&ch,name);
	printf("\n The values accept are :%d,%f,%c,%s",a,b,ch,name);// doi vs ky tu k can &
	
}

