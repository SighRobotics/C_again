#include<stdio.h>

int main(int argc, char *argv[]){
    int prices[] = {4,1,9};
    size_t length = 3;
    int index = 0;//index commonly written as i

    while(index>=0){
        if(index<length){
            printf("Array[%d]: %d\n",index,prices[index]);//if allowed:
            ++index;
        }
        else{
            printf("Process not allowed\n");//if not allowed:
            return 0;
        }
    }
    return 0;
}
//while(index>=0 && index<length){} both statements have to be true

//A     B       A && B (if both are true)
//False False   False
//False True    False
//True  False   False
//True  True    True

//A     B       A || B (if one is true)
//False False   False
//False True    True
//True  False   True
//True  True    True

//if(i !=0){} (if i is not 0, then enter if statement)
//if(!(i==0)){} (if i is 0, then does not enter if statement)