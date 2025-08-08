#include <stdio.h>
 main()
{
    int n, i = 0, sum = 0, a;
    printf("Enter number of integers: ");
    scanf("%d", &n);
	 while (i < n)
    {
	 printf("Enter positive integer: ");
	 scanf("%d", &a);
	 if (a < 0)
        {
		printf("you can enter negative number\n"); 
		continue; 
        }
		 sum += a;
        i++; 
    }
		float avg = (float)sum / n;
		printf(" %f\n", avg);
}


	
