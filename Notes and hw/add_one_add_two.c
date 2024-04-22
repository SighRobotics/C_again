#include<stdio.h>

//if we want to use a function in main() we have to place it before main()
//that is also why #include .h is also above everything

//variable_type function_name (parameters){
//return value}

int add_one(int x){
    x = x + 1;
    return x;
}

void add_two(int *x){
    (*x) += 2;
    //dereference the x to change actual value
    //if we did x += 2 it would change the address instead
}

int main(){
    int y = 2;
    int z = add_one(y);//add_one(y) returns the new value
    printf("y1 = %d\n",y);
    printf("z1 = %d\n",z);
//the value is y remains unchanged above since only a copy of the value is sent to add_one
//call by value principle

    y = add_one(y);
    printf("y2 = %d\n",y);
//the vaule of y will change here since we are redefining it

    int k = 5;
    printf("k1 = %d\n",k);
    add_two(&k);//add_two is asking for * so give it the write type of variable
    printf("k2 = %d\n",k);
//because we are calling the address and changing it's value, k will also be changed
//we also don't need the function to return the value, we just need to read it directly

    return 0;
}
//Address           Name            Value           Notes
//0x10002           y               2               Only valid in main()
//0x10006           z               3               Only valid in main()
//0x1000a           x               2+1             Only valid in add_one()
//
//
//0x10002           k               5
//0x10006           x               0x10002