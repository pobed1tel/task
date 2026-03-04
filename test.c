#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() 
{
    char *buff = NULL;
    size_t capacity = 0;
    int temp;

    getline(&buff, &capacity, stdin);
    
    char *token = strtok(buff, " ");

    int* numptr = NULL;
    int size = 0;

    for(int i = 0; token != NULL ; i++) {
        size++;
        numptr = realloc(numptr, size * sizeof(int));
        sscanf(token, "%d", &temp);
        numptr[i] = temp;
        token = strtok(NULL, " ");
    }

    qsort(numptr, size, sizeof(numptr[0]), comp);
    int unic_count = 1;

    for(int i = 0; i < size - 1; i++){
        if(numptr[i] != numptr[i + 1]){
            unic_count++;
        }
    }

    printf("%d\n", unic_count);

    return 0;
}
