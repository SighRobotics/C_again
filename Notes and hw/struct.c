#include <stdio.h>

//struct _position{
//    char x;
//    int y;
//};
//typedef struct _position position;

typedef struct _position{char x;int y;}position;
//shorter way of writing the first part
//typedef shortens the name

typedef struct _player{
    position pos;
    int s;
}player;


int main(){
    position p1_pos={'a',1};
    position p2_pos={.x='b',.y=2};
    position p3_pos;
    p3_pos.x = 'c';
    p3_pos.y = 3;
    //3 different methods of adding positions

    //to change value:
    //p2_pos.y = 1;
    printf("P2: x: %c y: %d\n", p2_pos.x, p2_pos.y);

    player p1_pla={p1_pos,100};
    printf("P1: x: %c y: %d s: %d\n", p1_pla.pos.x, p1_pla.pos.y, p1_pla.s);

    player p2_pla={{'b',2},90};
    printf("P2: x: %c y: %d s: %d\n", p2_pla.pos.x, p2_pla.pos.y, p2_pla.s);

}


//    char p1_x = 'a';
//    int p1_y = 1;
//    char p2_x = 'b';
//    int p2_y = 2;
//    char p3_x = 'c';
//    int p3_y = 3;
//a 3x3 table with 3 players in 3 positions added one by one