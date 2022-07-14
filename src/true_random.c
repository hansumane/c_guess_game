#include <stdio.h>

int true_random(int min, int max)
{
	unsigned temp;
	FILE *dev_random = fopen("/dev/random", "rb");
	fread(&temp, sizeof(temp), 1, dev_random);
	fclose(dev_random);
	int result = temp % (max - min + 1) + min;
	return result;
}
