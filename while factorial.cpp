#include<stdio.h>
main()
{
	int n,i=1,f=1;
	printf("enter n");
	scanf("%d",&n);
	if(n==0)
	printf("%d",f);
	else
	{
		while(i<=n)
	{
		f*=i;
		i++;
	}
	printf("%d!=%d\n",n,f);
}
}
