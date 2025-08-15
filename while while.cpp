#include <stdio.h>
 main()
{
    int i = 0, j;
	while (i < 5)
    {
	j = 0;
	while (j < 5)
        {
		printf("%d ", j);
		j++;
        }
        printf("\n");
        i++;
    }
}
