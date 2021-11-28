#include <stdio.h>

int main() {
    float tempFahrenheit = 0;
    printf("enter the temperature in fahrenheit\n");
    scanf("%f",&tempFahrenheit);
    float tempCelsius = (tempFahrenheit - 32.0) * 5.0 / 9.0;
    printf("the temperature in celsius is %f\n",tempCelsius);
    return 0;
}