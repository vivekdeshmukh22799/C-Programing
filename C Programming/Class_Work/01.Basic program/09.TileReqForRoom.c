#include <stdio.h>
void main() {

//area of square = 144 sq.m
// 1 sq.m = 10000sq.cm
int room_area = 144 * 10000;
//convert 144sq.m into 1440000sq.cm
int side=12; //cm

int tile_area= 12*12; //144 cm

int total_tile=room_area/tile_area;

printf("tile_required in room are = %d",total_tile);
}