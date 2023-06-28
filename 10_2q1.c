#include<stdio.h>
void modify(char[]);
void main(){
	char str1[]="tishanarola";
	modify(str1);
	
}
void modify(char str1[])
{
	int i,l=0;
	for(i=0;str1[i]!='\0';i++)
	{
		l=l+1;
	}
	str1[0]='a';
	printf("length of string 1:is %d",1);
}
