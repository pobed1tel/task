#include <stdio.h>

int main(){
    // 7 задание
    int month, year;
    printf("Введите число месяца: ");
    scanf("%d", &month);
    printf("Введите число года: ");
    scanf("%d", &year);

    switch(month){
        case 1:
            printf("В этом месяце 31 дней.\n");
            break;
        case 2:
            if (year % 4 == 0 && year % 100 != 0 && year % 400 != 0)
                printf("В этом месяце 29 дней.\n");
            else
                printf("В этом месяце 28 дней.\n");
            break;
        case 3:
            printf("В этом месяце 31 дней.\n");
            break;
        case 4:
            printf("В этом месяце 30 дней.\n");
            break;
        case 5:
            printf("В этом месяце 31 дней.\n");
            break;
        case 6:
            printf("В этом месяце 30 дней.\n");
            break;
        case 7:
            printf("В этом месяце 31 дней.\n");
            break;
        case 8:
            printf("В этом месяце 31 дней.\n");
            break;
        case 9:
            printf("В этом месяце 30 дней.\n");
            break;
        case 10:
            printf("В этом месяце 31 дней.\n");
            break;
        case 11:
            printf("В этом месяце 30 дней.\n");
            break;
        case 12:
            printf("В этом месяце 31 дней.\n");
            break;
        default:
            printf("Был введен неправильный код месяца.\n");
            break;
    }
    return 0;
}
