#include <stdio.h>

int main(){

    // 3 задание
    int a = 7;

    switch(a){
        case 3:
            printf("Это число 3 оно входит в множесто [3, 7, 9]\n");
            break;
        case 7:
            printf("Это число 7 оно входит в множесто [3, 7, 9]\n");
            break;
        case 9:
            printf("Это число 9 оно входит в множесто [3, 7, 9]\n");
            break;   
        default:
            printf("Это число не входит в множесто [3, 7, 9]\n");
            break;
    }

    return 0;
}