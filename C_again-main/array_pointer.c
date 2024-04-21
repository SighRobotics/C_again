#include<stdio.h>

int main(int argc, char *argv[]){
    int array[]={2,4,6,8};
    //array[0] == *array;
    //the value stored in the first block in an array is the same as the...
    //dereferenced value of what the pointer is pointing towards

    printf("array[0] = %d, *array = %d\n", array[0],*array);
    printf("array[1] = %d, *(array+1) = %d\n", array[1],*(array+1));
    printf("array[2] = %d, *(array+2) = %d\n", array[2],*(array+2));
    printf("array[3] = %d, *(array+3) = %d\n\n", array[3],*(array+3));
    //don't forget brackets

    printf("Address of array[0]    %p\n", &array[0]);
    printf("Address of array       %p\n\n", array);
    
    printf("Address of array[1]    %p\n", &array[1]);
    printf("Address of array+1     %p\n\n", array+1);
    
    printf("Address of array[2]    %p\n", &array[2]);
    printf("Address of array+2     %p\n\n", array+2);

    printf("Address of array[3]    %p\n", &array[3]);
    printf("Address of array+3     %p\n\n", array+3);

    int * new_array = array;
    printf("When int * new_array = array:\n");
    printf("Address of new_array    %p (the same as array)\n", new_array);
    printf("Value of *new_array     %d\n",*new_array);
    printf("Value of *(new_array+1) %d\n",*(new_array+1));
    printf("Value of *(new_array+2) %d\n",*(new_array+2));
    printf("Value of *(new_array+3) %d\n",*(new_array+3));

    printf("\nAddress           Name            Value\n");
    printf("0x10002           array[0]        2\n");
    printf("0x10006           array[1]        4\n");
    printf("0x1000a           array[2]        6\n");
    printf("0x1000e           array[3]        8\n");
    printf("0x10012           new_array       0x10002\n");

    return 0;
}
//Address           Name            Value
//0x10002           array[0]        2
//0x10006           array[1]        4
//0x1000a           array[2]        6
//0x1000e           array[3]        8
//0x10012           new_array       0x10002
