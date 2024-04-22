#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void output(int number){
    printf("Divisable by %d\n",number);
}

int main(){
    for(int i = 1; i < 20 ; i++){
        printf("i=%d\n",i);
        if(i%3==0){
            output(3);
        }if(i%2==0){
            output(2);
        }
    }return 0;
}