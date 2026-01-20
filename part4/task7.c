#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // 7 задачник
    srand(time(NULL));

    int n;
    printf("Укажите число элементов в массиве: ");
    scanf("%d", &n);

    int* ptr = malloc(n * sizeof(int));

    if (ptr){
        for(int i = 0; i < n; i++){
            ptr[i] = rand() % 100;
            printf("%d ", ptr[i]);
        }
    }
    printf("\n");

    return 0;
}