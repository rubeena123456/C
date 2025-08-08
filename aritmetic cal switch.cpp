#include<stdio.h>
main()
{
	int choice,a,b;
	printf("enter a,b");
	scanf("%d%d",&a,&b);
	printf("select 1 for addition\n");
	printf("select 2 for subtraction\n ");
	printf("select 3 for multiplication\n");
	printf("select 4 for quotient\n");
	printf("select 5 for remainder\n");
	printf("enter choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("result=%d\n",a+b);
			break;
			case 2:
				printf("result=%d\n,",a-b);
				case 3:
					printf("result=%d\n",a*b);
					case 4:
						printf("result=%d\n",a/b);
						case 5:
							printf("result=%d\n",a%b);
							break;
							default:
							printf("select wrong choice\n");
						}
					}
		
	
