#include <stdio.h>
 main()
{
    int choice, num, i, flag = 0, fact = 1;
	printf("Menu:\n");
    printf("1. Prime or Not\n");
    printf("2. Factorial\n");
    printf("3. Even or Odd\n");
    printf("4. Positive or Negative\n");
	printf("Enter your choice: ");
    scanf("%d", &choice);
	 printf("Enter a number: ");
    scanf("%d", &num);
	switch(choice)
    {
	 case 1: 
            if (num <= 1)
                printf("%d is not a prime number\n", num);
            else
            {
                flag = 0;
                for(i = 2; i <= num / 2; i++)
                {
                    if(num % i == 0)
                    {
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0)
                    printf("%d is a prime number\n", num);
                else
                    printf("%d is not a prime number\n", num);
            }
            break;
			 case 2: 
            if(num < 0)
                printf("Factorial not defined for negative numbers\n");
            else
            {
                fact = 1;
                for(i = 1; i <= num; i++)
                    fact *= i;
                printf("Factorial of %d is %d\n", num, fact);
            }
            break;
			case 3:
            if(num % 2 == 0)
                printf("%d is even\n", num);
            else
                printf("%d is odd\n", num);
            break;
			case 4:
            if(num > 0)
                printf("%d is positive\n", num);
            else if(num < 0)
                printf("%d is negative\n", num);
            else
                printf("Number is zero\n");
            break;
			default:
            printf("Invalid choice\n");
    }
}

