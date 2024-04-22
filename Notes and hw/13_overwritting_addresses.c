#include<stdio.h>

int func(int x){
    int y = x+3;
    return y;
}

int main(){
    int z = 5;
    int g = 0;
    g = func(z);
    int b = 10;
    int a = 4;
}
//heap on a stack
//when int z = 5 is defined, it saves on an address a name and a value, then goes to the next address
//when int g = 0 is defined, same process as above
//when func is called and entered, it will take the value saved in z, which is 5, and bring it along
//when int x is defined in func, it will take the value of z which is taken, and saved in the next address
//when in y in func is defined and calculated, it will save the value in the next address after g = 0
//when the value of y is returned to main, the addresses used in func will be freed
//when int b = 10 is defined, it will be saved on the address where x was on, overwriting it
//
//This is how it looks like at the end of func:
//Address           Name            Value
//0x1004F300        z               5
//0x1004F304        g               0
//0x1004F308        x               5
//0x1004F30C        y               8
//
//
//This is how it looks like at the end of main:
//Address           Name            Value
//0x1004F300        z               5
//0x1004F304        g               8
//0x1004F308        b               10
//0x1004F30C        a               4
//notice that the value of g has changed, and that x and y are overwritten
//
//we however sometimes don't want the overwrite to happen, hence we can use malloc and free