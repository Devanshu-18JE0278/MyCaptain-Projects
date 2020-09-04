#include<stdio.h>
int main()
{
	printf("Enter the numbers : ");
	int a,b;
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the numbers obtained after swapping is %d and %d",a,b);
	return 0;
}
