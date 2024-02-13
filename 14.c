#include <stdio.h>

int main() {
    double num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if ((num1 + num2) > num3 && (num2 + num3) > num1 && (num1 + num3) > num2) {
        if (num1 == num2 && num2 == num3) {
            printf("Equilateral triangle\n");
        } else if (num1 == num2 || num1 == num3 || num2 == num3) {
            printf("Isosceles triangle\n");
        } else {
            printf("Scalene triangle\n");
        }
    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}