#include <stdio.h>
main()
{
    int i, s, e;
	printf("Enter starting even number: ");
    scanf("%d", &s);
    printf("enter ending even number");
    scanf("%d",&e);
	printf("Even numbers from %d to %d:\n", s,e);
	for (i = s; i <= e; i += 2)
    {
	printf("%d ", i);
    }
}

