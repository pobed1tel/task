#include <stdio.h>

int main(){
    // 6 задачник

    char * filename = "data.txt";
    char buffer[256];
    FILE *fp = fopen(filename, "r");

    if (fp){
        while(fgets(buffer, 256, fp)!= NULL){
            printf("%s", buffer);
        }
        printf("\n");
        fclose(fp);
    }


    return 1;
}