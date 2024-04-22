#include<stdio.h>
#include<stdlib.h>//malloc() is in here

typedef struct _mystruct{
    int amount;
    float price;
    int price_discount;
}mystruct;

int* read_num_from_file(){
    int* numbers = malloc(100*sizeof(int));//space is reserved
    printf("We are reserving in read_num_from_file\n");
    printf("We are filling read_num_from_file\n");//reserved should be filled with numbers here
    return numbers;//we receieve a pointer back, and can use it in the main
}

int main(int argc, char *argv[]){
    int x = 4;
    int* myVar = malloc(sizeof(x));
    //how many bytes to reserve, sizeof() automatically gives us the size of a variable type
    //malloc reserved storage space, recieves address of storage space, and stores it in myVar
    
    //malloc retuns a void * (void pointer)
    //a void doesn't return anything, but void * is a universal pointer for any variable type

    printf("*myVar old: %d\n",*myVar);//cheaking to see if there is anything saved on myVar, not always 0
    *myVar = 10;//redefining *myVar, always do this
    printf("*myVar new: %d\n",*myVar);

    //malloc doesn't always succeed, and will return a NULL pointer
    //it can fail if we have no more storage space
    //a negative number doesn't work

/*    int* myVar2 = malloc(-4);
    if(myVar2 == NULL){
        perror("Malloc failed.");
        exit(12);//error code
    }//the programm will end here if malloc is negative, always check for this*/

    //Alwyas rmb to free the memory before ending programm
    free(myVar);
    printf("*myVar freed: %d\n\n",*myVar);

    printf("sizeof(int): %lu\n",sizeof(int));
    printf("sizeof(long): %lu\n",sizeof(long));
    printf("sizeof(float): %lu\n",sizeof(float));
    printf("sizeof(unsigned int): %lu\n",sizeof(unsigned int));
    printf("sizeof(long long): %lu\n\n",sizeof(long long));
    //here are some examples of their outputs

    int i = 10;
    int * myDynamicArray = malloc(i*sizeof(int));//reserve 10 * 4 spaces with malloc
    for(int y=0;y<10;y++){
        printf("%d\n",myDynamicArray[y]);
        myDynamicArray[y] = y*2;
    }
    free(myDynamicArray);

    mystruct* my = malloc(sizeof(mystruct));//directly place the struct in there
    printf("(*my).amount = %d\n",((*my).amount=4));
    printf("my->amount = %d\n\n",(my->amount=6));
    free(my);

    int * nums = read_num_from_file();
    printf("We are defining int* nums =  read_num_from_file\n");
    //no need to malloc for nums again since it is done in the function
    free(nums);
    printf("We are freeing nums and read_num_from_file\n");

    return 0;
}
