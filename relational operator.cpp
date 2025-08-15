#include<stdio.h>
main()
{
	  int x, y;
    printf("Enter x,y");
    scanf("%d%d",&x,&y);
    printf("%d %d %d %d %d %d",x>y,x<y,x==y,x<=y,x>=y,x!=y);
}
