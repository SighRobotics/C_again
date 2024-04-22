#include<stdio.h>

int main(){
    int i = 0;
    printf("i:%d (outside)\n",i);
    do{
        i++;
        printf("i:%d (do)\n",i);
    } while(i<3);//enter do while i is smaller than 3
    printf("i:%d (end)\n",i);
    return 0;
}