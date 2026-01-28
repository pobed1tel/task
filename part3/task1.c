#include <stdio.h>
#include <string.h>

int main(){

    // 1 задание
    char s1[100];
    char s2[100];
    scanf("%99s", s1);
    scanf("%99s", s2);

    if (strcmp(s1, s2) == 0){
        printf("Strings match\n");
    }
    else{
        printf("Strings differ\n");
    }
    
    return 0;
}