#include <stdio.h>
#include <stdlib.h>

int main(){
    // 7 задачa 2 часть

    int rows;
    int cols;

    printf("Количетво строк: ");
    scanf("%d", &rows);
    printf("Количество столбцов: ");
    scanf("%d", &cols);

    int *data = malloc(rows * cols * sizeof(int));
    int **arr = malloc(rows * sizeof(int*));

    for (int i = 0; i < rows; i++) {
        arr[i] = data + i * cols;
    }

    printf("Введите значения:\n");
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);
    }

    int min = arr[0][0];
    int max = arr[0][0];

    for (int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if (min > arr[i][j])
                min = arr[i][j];
            if (max < arr[i][j])
                max = arr[i][j];
        }
    }

    printf("Максимальное значение: %d\n", max);
    printf("Минимальное значение: %d\n", min);

    free(data);
    free(arr);
    return 0;
}