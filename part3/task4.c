#include <stdio.h>

int main(){

    // 3 задание
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a < b && a < c){
        printf("Число %d меньше всех\n", a);
    }
    else if (b < a && b < c){
        printf("Число %d меньше всех\n", b);
    }
    else if (c < a && c < b){
        printf("Число %d меньше всех\n", c);
    }
    else {
        printf("All numbers are equal\n");
    }


    return 0;
}