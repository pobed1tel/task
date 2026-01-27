#include <stdio.h>

int main(){
    // 5 задание
    float a, b, sum;
    char oper, conf;
    while(1){
        printf("Введите первое число: ");
        scanf("%f", &a);
        printf("Введите второе число: ");
        scanf("%f", &b);
        printf("Введите оператор (+, -, *, /): ");
        scanf(" %c", &oper);

        switch(oper){
            case '+':
                sum = a + b;
                break;
            case '-':
                sum = a - b;
                break;
            case '*':
                sum = a * b;
                break;
            case '/':
                sum = a / b;
                break;
            default:
                printf("Введен неверный символ.\n");
                continue;
                break;
        }

        printf("%.2f %c %.2f = %.2f\n", a, oper, b, sum);

        printf("Продолжать (y/n): ");
        scanf(" %c", &conf);
        if (conf == 'n')
            break;
    }

    return 0;
}