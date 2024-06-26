#include <stdio.h>

float celsius(float);

int main()
{
    float fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, celsius(fahr));
        fahr = fahr + step;
    }

    return 0;
}

float celsius(float fahr)
{
    return 5 * (fahr-32) / 9;
}
