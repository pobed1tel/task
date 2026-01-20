#include <stdio.h>

int main(){
    // 2 задание
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    for (int i = a; i <= b; i++){
        if (i % 2 != 0)
            printf("%d\n", i);
    }
    
    return 0;
}