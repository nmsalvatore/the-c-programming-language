#include <stdio.h>

#define	LOWER	0
#define UPPER	100
#define	STEP	5

int main() {
	float fahr, celsius;
	int lower, upper, step;

	celsius = LOWER;
	while (celsius <= UPPER) {
		fahr = celsius * (9.0/5.0) + 32;
		printf("%3.0f %6.0f\n", celsius, fahr);
		celsius = celsius + STEP;
	}

	return 0;
}
