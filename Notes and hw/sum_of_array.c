#include<stddef.h>
#include<stdio.h>

typedef struct _item{
    int amount;
    int price;
}item;

int calculate_sum(item list[],size_t length){
    int sum = 0;
    for(int p=0; p<length; p++){
        sum += list[p].amount*list[p].price;
    }
    return sum;
}

int main(){
    item list1[] = {{4,5},{3,1},{2,9},{4,4}};
    item list2[] = {{5,4},{1,1},{3,2}};

    int l1_sum = 0;
    for(int i=0; i<4; i++){
        l1_sum += list1[i].amount*list1[i].price;
    }printf("l1_sum: %d\n",l1_sum);

    int l2_sum = 0;
    for(int j=0; j<3; j++){
        l2_sum += list2[j].amount*list2[j].price;
    }printf("l2_sum: %d\n",l2_sum);

    printf("sum1: %d\n",calculate_sum(list1,4));
    printf("sum2: %d\n",calculate_sum(list2,3));
    //in visual studio jump to func definition by holding ctrl and left clicking name 
}