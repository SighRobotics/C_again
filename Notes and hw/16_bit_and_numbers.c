#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//a<<b == a*2^b == left sift operator
//a>>b == a/2^b == right sift operator
//1<<1 == 00000000 00000001 changes to 00000000 00000010
//1<<8 == 00000000 00000001 changes to 00000001 00000000
//
//a & b         Bitwise AND
//a and b binary, if both are 1 then 1, then convert to decimal
//a = 12 = 00001100
//b = 25 = 00011001
//         00001000 = 8
//
//a | b         Bitwise OR       
//a and b binary, if either is 1 then 1, if both 1 then 1, then convert to decimal
//a = 12 = 00001100
//b = 25 = 00011001
//         00011101 = 29
//
//a ^ b         Bitwise XOR (exclusive OR)
//a and b binary, if either 1 then 1, if both 1 then 0, then convert to dec
//a = 12 = 00001100
//b = 25 = 00011001
//         00010101 = 21
//
//a ~ b         Bitwise complement (inverts binary)
//a and b binary, if 1 then 0, if 0 then 1, then convert to dec
//a = 35 = 00100011
//         11011100 = 220
//

int main(int argc, char *argv[]){
    
    int number = 0b100110;
    printf("Number: %d\n", number);
    number = number <<2;//10011000
    printf("Number: %d\n", number);

    int a = 35;
    int b = 12;
    int c = a|b;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);

    int mess;
    mess = mess |(1<<2);
    printf("mess: %d\n", mess);
    mess = mess |0b100;
    printf("mess: %d\n", mess);
    mess = mess |4;
    printf("mess: %d\n", mess);


    int result = mess & 0b100;
    printf("result: %d\n", result);
    int x = 0b100110 ^ 0b110010;
    int y = ~0b100;
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    x = x | 3 ;
    x |= 3;
    printf("x: %d\n", x);

    y = y & 4;
    y &= 4;
    printf("y: %d\n", y);

    return 0;
}