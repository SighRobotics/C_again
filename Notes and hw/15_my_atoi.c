#include<stdio.h>

int myAtoi(const char* string){
    int erg = 0;
    while(*string){
        erg *=10;
        erg += (*string)-'0';
        string++;
    }
    return erg;
}

int main(int argc, char *argv[]){
    if(argc<2){
        printf("Please give an argument.\n");
        return 1;
    }
    for(int i = 0; i<myAtoi(argv[1]); i++){
        printf("%d\n",i);
    }
    return 0;
}