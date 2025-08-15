#include <stdio.h>
main()
{
    int i, s, e;
	printf("Enter starting odd number: ");
    scanf("%d", &s);
    printf("enter ending odd number");
    scanf("%d",&e);
	printf("odd numbers from %d to %d:\n", s,e);
	for (i = s; i <= e; i += 2)
    {
	printf("%d ", i);
    }
}
