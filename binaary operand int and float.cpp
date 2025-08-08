#include<stdio.h>
main()
{
	int x;
	float y;
	printf("enter x,y");
	scanf("%d %f",&x,&y);
	printf("%f %f %f %f ",x+y,x-y,x*y,x/y);
}
