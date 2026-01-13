#include <stdio.h>

int main(){
    // 5 задание
    int a, b;
    char oper;

    char conf;
    while(1){
        printf("Продолжать (y/n): ");
        scanf("%s", conf)
        if (conf == 'n')
            break;

        printf("Введите первое число: ");
        scanf("%d", &a);
        printf("Введите второе число: ");
        scanf("%d", &b);
        printf("Введите оператор (+, -, *, /): ");
        scanf("5");
    }
    
    return 0;
}