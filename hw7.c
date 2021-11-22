#include <stdio.h>
#include <math.h>

float calculate(float num[]);

int main() 
{
    int i;
    float num[5];
    printf("Enter 5 real numbers: ");
    for (i = 0; i < 5; ++i)
        scanf_s("%f", &num[i]);
    printf("\Standard Deviation = %.3f", calculate(num));
    return 0;
}

float calculate(float num[]) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 5; ++i) {
        sum += num[i];
    }
    mean = sum / 5;
    for (i = 0; i < 5; ++i)
        SD += pow(num[i] - mean, 2);
    return sqrt(SD / 5);
}