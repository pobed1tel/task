#include <math.h>
#include <stdio.h>

int main(){

    // 1 задание
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);

    printf("%d - %d = %d\n", a, b, a - b);

    // 2 задание
    int x = 7;
    int y = 5;

    printf("%d * %d = %d\n", x, y, x*y);

    // 4 задание
    int num1 = 25;
    int num2 = 10;
    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("Разность: %d, частное: %f\n", num1 - num2, num1 / (float)num2);

    // 5 задание
    //float q = 12.5;
    //float w = 2.3;
    //float e = fmod(q, w);
    //printf("%f\n", e);

    return 0;
}