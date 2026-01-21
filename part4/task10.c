#include <stdio.h>
#include <stdlib.h>

int main(){
    // 10 задача
    int a, b;
    printf("Введите два числа через пробел: ");
    scanf("%d %d", &a, &b);

    

    if (b == 0){
        printf("Нельзя делить на ноль.\n");
    }
    else{
        float div = a / (float)b;
        printf("Результат деления: %.2f\n", div);
    }

    return 0;
}