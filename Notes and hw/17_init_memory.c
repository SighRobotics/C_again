#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void* init_memory(int size){
    return malloc(size);
}

int main(int argc, char *argv[]){
    int *myArray = init_memory(10*(sizeof(int)));
    for(int i = 0; i<10; i++){
        myArray[i] = i;
        printf("%d\n",myArray[i]);
    }
    free(myArray);
    return 0;
}