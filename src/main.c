#include <stdio.h>
#include "true_random.h"

int main(void)
{
	int guess, value = true_random(1, 100);

	do {
		printf("Guess the value between 1 and 100: ");
		scanf("%d", &guess); getchar();
		if (guess > value)
			printf("Your guess is bigger >!\n");
		else if (guess < value)
			printf("Your guess is smaller <!\n");
		else
			printf("Congratulations! You have guessed %u!\n", value);
	} while (guess != value);

	return 0;
}
