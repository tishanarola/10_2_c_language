#include<stdio.h>
int sum(int a[]){
	int count=0;
	int i;
	for(i=0;i<3;i++)
	count=count+a[i];
	return count;
}
int main(){
	int arr[3],count,i;
	printf("enter 3 value in array\n");
	for(i=0;i<3;i++)
	scanf("%d",&arr[i]);
	count=sum(arr);
	printf("the sum of value is %d",count);
	return 0;
}

