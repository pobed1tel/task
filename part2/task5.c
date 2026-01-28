#include <math.h>
#include <stdio.h>

int main(){

    // 5 задание
    // gcc task5.c -lm для компиляции
    // это очень страно fmod находится
    // в math.h, но его реализация в другом месте
    float q = 12.5f;
    float w = 2.3f;
    float e = fmod(q, w);
    printf("%.2f\n", e);

    return 0;
}