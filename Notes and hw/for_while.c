#include<stdio.h>

int main(){
    float price[]={3.40,2.99,5.49,8.99};
    size_t length = 4;
    int i = 0;

    printf("i=%d: %f, %f, %f, %f\n",i,price[0],price[1],price[2],price[3]);
    printf("\n");
    while(i<length){
        price[i] *= 0.5;//value at i position times 0.5
        printf("i=%d: %f, %f, %f, %f\n",i+1,price[0],price[1],price[2],price[3]);
        ++i;  
    }
    printf("\n");
    for(int j=0; j<length; ++j){
        price[j]*=2;//value at j position times 2
        printf("j=%d: %f, %f, %f, %f\n",j+1,price[0],price[1],price[2],price[3]);

    }
    return 0;
    }