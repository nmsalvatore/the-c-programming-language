#include <stdio.h>

/* Print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

void printHeader();
void printValues();

int main() {
	printHeader();
	printValues();

	return 0;
}

void printHeader() {
	printf("%3s %6s\n", "F", "C");
	printf("%9s", "------------\n");
}

void printValues() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
