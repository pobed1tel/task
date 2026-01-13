#include <stdio.h>

int main(){
    // 4 задание
    int w, h;
    printf("Введите ширину: ");
    scanf("%d", &w);
    printf("Введите высоту: ");
    scanf("%d", &h);

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++)
            printf("*");
        printf("\n");
    }
    
    return 0;
}