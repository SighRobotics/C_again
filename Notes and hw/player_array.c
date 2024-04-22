#include<stdio.h>

typedef struct _position{
    char x;
    int y;
}position;

typedef struct _player{
    int score;
    position pos;
}player;

int main(){
    player p1 = {15,{'a',1}};
    player p2 = {30,{'b',2}};
    player player_array[] = {p1,p2};//define the array with the same type that the values inside the array get
    printf("P1 Score:           %d (should be 15)\n",player_array[0].score);
    printf("P1 Position char:   %c  (should be a)\n",player_array[0].pos.x);
    printf("P1 Position int:    %d  (should be 1)\n",player_array[0].pos.y);
    printf("P2 Score:           %d (should be 30)\n",player_array[1].score);
    printf("P2 Position char:   %c  (should be b)\n",player_array[1].pos.x);
    printf("P2 Position int:    %d  (should be 2)\n",player_array[1].pos.y);
    //can put arrays in structs, structs in arrays, structs in structs, arrays in arrays etc.
}