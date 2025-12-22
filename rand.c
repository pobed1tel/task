#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));


    char randchar = 'A' + (random() % 26);
    int randnum = rand();
    float randfloat = rand() / (float)rand();
    double randdouble = rand() / (float)rand(); 

    printf("Значения: символ: %c, число: %d, число с плавающей точкой: %f, число с двойной точностью: %.2f\n", randchar, randnum, randfloat, randdouble);
    return 0;
}