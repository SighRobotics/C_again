#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){
    
    if(argc<2){
        printf("Give more arguments.\n");
        return 1;//return a value to avoid crash
    }
    if(strcmp(argv[1],"Hello")==0){//when str are identical, strcmp will return 0
        printf("Good Morning!!!\n");
    }else if (strcmp(argv[1],"Bye")==0){
        printf("C u tmr!!!\n");
    }else{
        printf("Write: %s Hello or Bye to initiate\n",argv[0]);
    }

    return 0;
}