#include <stdio.h>
#include "true_random.h"

int main(void)
{
  int guess, value = true_random(1, 100);

  do
    {
      fputs("Guess the value between 1 and 100: ", stdout);
      scanf("%d", &guess); getchar();
      if (guess > value)
        puts("Your guess is bigger >!");
      else if (guess < value)
        puts("Your guess is smaller <!");
      else
        printf("Congratulations! You have guessed %u!\n", value);
    }
  while (guess != value);

  return 0;
}
