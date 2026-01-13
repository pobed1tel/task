#include <stdio.h>

int main(){

    // 2 задание
    int a;
    scanf("%d", &a);

    if (a >= 10 && a <= 20){
        printf("Inside the boundary\n");
    }
    else {
        printf("Outside the boundary (10..20)\n");
    }
    
    return 0;
}