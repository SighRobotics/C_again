#include<stdio.h>

int main(void){
    char letter1 = 'a';
    char letter2 = 'b';

    printf("Character: %c %c\n",letter1, letter2);
    printf("Ascii value: %d %d\n",letter1, letter2);
    printf("Type __ man ascii __ for more information\n");
    //man ascii in terminal to see more information

    int i = 65;
    char letter3 = 'A';
    while(i<91){
        printf("%d: %c \n",i, letter3);
        letter3++;
        i++;
    }
    printf("\n");
    i = 97;
    letter3 = 'a';
    while(i<123){
        printf("%d: %c \n",i, letter3);
        letter3++;
        i++;
    }

    char letter4 = 'A'+1;
    printf("\n%d: %c \n",letter4, letter4);

    return 0;
}