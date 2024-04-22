#include<stdio.h>

int main(){
    int i = 1;
    printf("i: %d (i is 1)\n", i);
    printf("++i: %d (i + 1 = 2)\n", ++i);
    printf("--i: %d (2 - 1 = 1)\n\n",--i);

    int x = 30;
    printf("30==30: %d (true, 30 is equal to 30)\n", 30==x);
    printf("40==30: %d (false, 40 is not equal to 30)\n", 40==x);//careful, will redifine if only one = sign

    int o = 2;
    printf("30!=2: %d (true, 30 is not equal to 2)\n", 30!=o);

    printf("30<40: %d (true, 30 is smaller than 40)\n", 30<40);
    printf("30>40: %d (false, 30 is not larger than 40)\n", 30>40);
}