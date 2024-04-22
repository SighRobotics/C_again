#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){
    //char * are strings
    for(int i = 0 ; i<argc ; i++){
        printf("Argument No. %d: %s\n",i,argv[i]);
    }
    //compile and enter [./a.out 1 2 3 "4ejweflw lwfwlkf" helooolooool] in command line
    //note that the ./a.out will always be the argument 0
    //spaces i nthe command line signify next argument
    //unless "text here" are used

    return 0;
}