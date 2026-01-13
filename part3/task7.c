#include <stdio.h>

int main(){
    // 7 задание
    int a;
    scanf("%d", &a);

    if (a <= 100 && a >= 90){
        printf("Execellent\n");
    }
    else if (a <= 89 && a >= 75){
        printf("Good\n");
    }
    else if (a <= 74 && a >= 50){
        printf("Satisfactory\n");
    }
    else if (a <= 49 && a >= 0){
        printf("Unsatisfactory\n");
    }

    return 0;
}