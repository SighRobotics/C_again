#include<stdio.h>

int main(){
    int h = 90;
    int x = (3+5)*2; //x = 16
    int y = x-3; //y = 13
    int g = y/2; //g = 6, it is int, values after comma will be cut off
    float z = y/2;//cause y is int, z will not have values after comma
    float a = 13;
    float f = a/2; //f = 6.5, it is float, values after comma will show
    int v = 23%4;//v = 3, rest of 23/4=20+3
    printf("h ist: %d\n",h);
    printf("x ist: %d\n",x);
    printf("y ist: %d\n",y);
    printf("g ist: %d\n",g);
    printf("z ist: %f\n",z);
    printf("f ist: %f\n",f);
    printf("v ist: %d\n",v);
}
//clang variable.c -o variable (to compile)
//./variable (to run)