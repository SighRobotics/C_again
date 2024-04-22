#include <stdio.h>

float product(int x, float y){
    return x*y;//times an int and float together
}

void print_status(int status){
    if(status==0){
        printf("Status: %d Everything okay!\n",status);
    }else{
        printf("Status: %d Error!\n",status);
    }//note that void has no return value
}

void print_help(){
    printf("Help is coming.\n");
}

int main(int argc, char *argv[]){
    print_help();//to call the function the () also need to be added
    return 0;
}