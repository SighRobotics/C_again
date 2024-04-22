#include <stdio.h>

int main(){
    float item_1_price = 3.40;
    float item_2_price = 6.40;
    float item_3_price = 7.40;
    float item_4_price = 8.42;

    //we have 4 items with 4 prices, we can simplify this with an array

    int i = 100; //don't use this, value larger than array size, number cannot be negative so use another variable type
    int o = -10; //don't use this, number cannot be negative
    size_t p = 3; //use this, sizt_t is a macro for positive numbers

    float all_prices_1[] = {3.40, 6.40, 7.40, 8.42};
    //in array all_prices_1 we now have 4 different prices
    //note that item 1 starts at position 0
    printf("Item 1:   %f\n",all_prices_1[0]);
    printf("Item 2:   %f\n",all_prices_1[1]);
    printf("Item 3:   %f\n",all_prices_1[2]);
    printf("Item 4:   %f\n",all_prices_1[3]);
    printf("Item 10:  %f (Outside array boundary)\n",all_prices_1[9]); //compiler will show error :)
    printf("Item 100: %f (Outside array boundary)\n",all_prices_1[i]); //compiler will not show error :(
    printf("Item -10: %f (Outside array boundary)\n",all_prices_1[o]); //compiler will not show error :(
    printf("Item 4:   %f (defined properly with size_t :))\n\n",all_prices_1[p]);


    all_prices_1[2] = 3.33; //redefining value in 3rd position
    all_prices_1[3] = all_prices_1[3]/2; //halving value in 4th position
    printf("Item 3:   %f (after redefining value)\n",all_prices_1[2]);
    printf("Item 4:   %f (half off)\n",all_prices_1[3]);
    

    float all_prices_2[4];
    //in array all_prices_2 we now have space for 4 prices with no values
}