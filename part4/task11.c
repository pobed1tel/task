#include <stdio.h>
#include <stdlib.h>

int main(){
    // 10 задача
    char* line = NULL;
    int **arr = malloc(sizeof(*int));
    size_t len = 0;
    ssize_t read;
    printf("Вводите строки:\n");

    do
        getline(&line, &len, stdin);
    while(line[0] != '\n');

    printf("%s", line);


    return 0;
}