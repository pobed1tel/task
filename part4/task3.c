#include "stdio.h"
#include "stdlib.h"
#define PUT_ONE_STAR 1
#define PUT_TWO_STARS 2

void print_row(int n, int space, int mode){
    for(int i = 0; i < n; i++)
        putchar(' ');
    putchar('*');

    if (mode == PUT_TWO_STARS){
        for(int i = 0; i < space; i++)
            putchar(' ');
        putchar('*');
    }
    putchar('\n');
}

int main(){
    // 3 задание
    int sidelen;
    printf("Введите сторону ромба: ");
    scanf("%d", &sidelen);
    int strlen = sidelen * 2 -1;
    int spacebetween;
    int indentation = (strlen - 1) / 2;

    if (sidelen < 1){
        printf("Некорректное значение длины.\n");
        return 1; 
    }

    print_row(indentation, 0, PUT_ONE_STAR);
    
    for(int i = -indentation + 1; i < indentation; i++){
        spacebetween = strlen - abs(i) * 2 - 2;
        print_row(abs(i), spacebetween, PUT_TWO_STARS);
    }

    print_row(indentation, 0, PUT_ONE_STAR);

    return 0;
}