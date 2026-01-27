#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    // 10 задача
    char **lines = NULL;
    size_t count = 0;
    char *buf = NULL;
    size_t capacity = 0;
    
    printf("Вводите строки:\n");
    while(getline(&buf, &capacity, stdin) != -1)
    {
        buf[strcspn(buf, "\n")] = '\0';

        if (buf[0] == '\0')
            break;

        lines = realloc(lines, (count + 1) * sizeof(*lines));
        lines[count] = malloc(strlen(buf) + 1);
        strcpy(lines[count], buf);

        count++;
    }

    for (size_t i = 0; i < count; i++){
        for (int j = 0; j < strlen(lines[i]); j++){
            lines[i][j] = toupper(lines[i][j]);
        }
    }

    printf("Строки в верхнем регистре:\n");
    for (size_t i = 0; i < count; i++) {
        printf("%s\n", lines[i]);
    }

    for (size_t i = 0; i < count; i++)
        free(lines[i]);
    free(lines);
    free(buf);

    return 0;
}