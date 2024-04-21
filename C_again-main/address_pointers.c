#include<stdio.h>

int main(int argc, char *argv[])
{
    int x = 3;
    printf("Value of x: %d\nAddress of x: %p\n",x,&x);//&x means address of a variable

    //this is an integer pointer variable: int *
    int * addr_of_x = &x;//we save in the address of x the address of x lol
    printf("Address of x: %p\n",addr_of_x);
    //the addresses may not be the same, but the system will consistently call the same address
    //so do not worry

    //dereference and int pointer both use * but are very different
    printf("Value of whatever addr_of_x is pointing at: %d\n",*addr_of_x);//see table below
    //we are calling int x and not &x, so we use %d instead of %p
    printf("\nReference table:\nAddress         Name         Value\n0x10002         x            3\n0x10006         addr_of_x    0x10002\n");

    *addr_of_x = 10;//we are changing the value of int x = 3 to int x = 10
    printf("\nNew value of x: %d\nAddress of x: %p\n",x,&x);

    printf("\nAddress of x+1: %p (int difference is exactly 4)\n",addr_of_x+1);
    //int is 4 Bytes large, so +1 gives the next pointer which is 4 Bytes away

    return 0;
}
//pointer data types
//we have an address with the int named x holding the vaule 3
//we have another address with the int * (int pointer) named addr_of_x...
//holding the address of the int named x
//
//Address         Name          Value
//0x10002         x             3
//0x10006         addr_of_x     0x10002