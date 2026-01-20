#include <stdio.h>
#include <stdlib.h>

int main(){
    // 8 задача

    int n;
    printf("Укажите число элементов в массиве: ");
    scanf("%d", &n);
    printf("Введите значения: ");
    int* ptr = malloc(n * sizeof(float));
    float sum = 0;

    if (ptr){
        for(int i = 0; i < n; i++){
            scanf("%f", ptr[i]);
            sum += ptr[i];
        }
    }
    printf("Сумма: %f\n", sum);

    return 0;
}