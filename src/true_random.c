#include <stdio.h>

int
true_random (const int min, const int max)
{
  unsigned temp;
  FILE *dev_random = fopen ("/dev/random", "rb");
  fread (&temp, sizeof (temp), 1, dev_random);
  fclose (dev_random);
  return temp % (max - min + 1) + min;
}
