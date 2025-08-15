#include<stdio.h>
main()
{
	int i;
	for(i=0;i<10;i++)
	{
		if(i==3)
		{
		printf("exit immediately");
		break;
	}
		printf("%d\n",i);
	}
}
