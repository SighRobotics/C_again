#include<stdio.h>

int main(){
    int sum = 0;
    int number = 984;

    printf("Sum:%d, Num:%d\n",sum,number);
    //expected result for sum of digits is 21 = 9+8+4
    while(number > 0){
        sum += number%10;
        number /= 10;
        printf("Sum:%d, Num:%d\n",sum,number);
    }
    printf("Sum:%d, Num:%d (Sum should be 21)\n",sum,number);
    return 0;
}