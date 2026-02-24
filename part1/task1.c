#include <stdio.h>

int main(){
    printf("Привет, мир!\n");
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() 
{
    char *buff = NULL;
    size_t capacity = 524288;

    buff = getline(&buff, &capacity, stdin);
    
    char *ptr = strok(buff, " ");

    int* numptr = NULL;
    int* newnumptr = numptr;
    for(int i = 0; myPtr != NULL; i++) {
        
        // numptr[i] = sscanf(myPtr, "%d", &temp);
        newnumptr = realloc(newnumptr, sizeof newnumptr + sizeof int);
        newnumptr[i] = sscanf(myPtr, "%d", &temp);
        myPtr = strtok(NULL, " ");

        printf("%d ", newnumptr[i]);
    }

    printf("\n");


    
    return 0;
}
