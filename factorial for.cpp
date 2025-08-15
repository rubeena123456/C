#include <stdio.h>
 main()
{
    int i, n, f = 1;
	printf("Enter number");
    scanf("%d", &n);
	if(n == 0)
    {
        printf("0! = 1\n");
    }
    else
    {
	 for(i=1;i<= n;i++)
        {
            f*=i;
        }
        printf("%d! = %d\n", n, f);
    }
}





