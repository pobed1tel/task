#include <stdio.h>

int main(){
    // 6 задание
    int a;
    scanf("%d", &a);

    if (a == 0){
        printf("Zero\n");
    }
    else if (a > 0){
        printf("Positive\n");
    }
    else if (a < 0){
        printf("Negative\n");
    }
    
    return 0;
}