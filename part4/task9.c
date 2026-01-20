#include <stdio.h>
#include <stdlib.h>

int main(){
    // 9 задача
    uint capacity = 16;
    uint len = 0;
    int c;
    char *str = malloc(capacity);

    printf("Введите строку: ");
    while((c = getchar()) != '\n' && c != EOF){
        if (len + 1 >= capacity){
            capacity *= 2;
            str = realloc(str, capacity);
        }
        str[len++] = (char)c;
    }
    str[len] = '\0';

    printf("Строка в обратном порядке: ");
    for(int i = len - 1; i >= 0; i--){
        printf("%c", (char)str[i]);
    }
    printf("\n");

    return 0;
}