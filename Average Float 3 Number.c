#include <stdio.h>

int main() {
    float num1, num2, num3;
    float average;

    printf("Enter three float numbers separated by spaces: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    average = (num1 + num2 + num3) / 3.0f;
    printf("The average of %.2f, %.2f, and %.2f is %.2f\n", num1, num2, num3, average);
    return 0;
}
