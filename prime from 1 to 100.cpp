#include <stdio.h>

int main() {
    int i, j, s, e, count, primeCount = 0;

    printf("Enter starting number: ");
    scanf("%d", &s);

    printf("Enter ending number: ");
    scanf("%d", &e);
    for(i = s; i <= e; i++) {
        count = 0;
		for(j = 1; j <= i; j++) {
            if(i % j == 0) {
                count++;
            }
        }

        if(count == 2) {
            printf("%d is a prime number.\n", i);
            primeCount++; 
        }
    }
	printf("\nTotal number of prime numbers between %d and %d is: %d\n", s, e, primeCount);
	return 0;
}



