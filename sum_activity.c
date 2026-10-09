
#include <stdio.h>

int main(void) {
    int num1, num2;
    float num3, num4;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter two decimal numbers: ");
    scanf("%f %f", &num3, &num4);

    printf("Integer Sum: %d\n", num1 + num2);
    printf("Float Sum: %.2f\n", num3 + num4);

    return 0;
}
    