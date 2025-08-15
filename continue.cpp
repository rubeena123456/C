#include<stdio.h>
main()
{
	int i;
	for(i=0;i<10;i++)
	{
		if(i==3)
		{
		printf("dont break");
		continue;
	}
		printf("%d\n",i);
	}
}
