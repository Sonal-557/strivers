#include<stdio.h>
void main(){
	int r,n,rev=0;
	printf("Enter a number:");
	scanf("%d",&n);
	int num=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	printf("%d",rev);
}
