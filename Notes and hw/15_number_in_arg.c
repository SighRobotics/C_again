#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){
    int number = atoi(argv[1]);//arg to int
    for(int i=0 ; i<number; i++){
        printf("i: %d\n",i);
    }
    return 0;
}