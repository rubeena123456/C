#include<stdio.h>
main()
{
	int a;
	printf("enter age");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("%d is eligible for vote",a);
	}
	else
	{
		printf("%d is not eligible for vote",a);
	}
}
