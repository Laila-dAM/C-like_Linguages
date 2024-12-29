#include <stdio.h>
#include <stdlib.h>

#define SIZE 6
char labyrinths[5][SIZE][SIZE] = {
    {
        "S   E",
        "|/  |",
        " |/ |",
        "   | ",
        "  |  "
    },
    {
        "S   E",
        "|/  |",
        " |/ |",
        "|  | ",
        "   | "
    },
    {
        "S   E",
        "|/  |",
        "|/  |",
        " | | ",
        "   | "
    },
    {
        "S  E",
        "|/ | ",
        " |/ | ",
        "| |  |",
        "   |  "
    },
    {
        "S  E",
        "|/ | ",
        "|/ | ",
        "| |/|",
        "   |/ "
    }
};
void printLabyrinth(char labyrinth[SIZE][SIZE]){
    for(int i=0; i < SIZE; i++){
        printf("%s\n", labyrinth[i]);
    }
}
int movePlaver(int *x, int *y, char direction, char labyrinth[SIZE][SIZE]) {
    int newX = *x;
    int newY = *y;

if(direction == 'w') newX--;
    else if(direction == 's') newX++;
    else if(direction == 'a') newY--;
    else if(direction == 'd') newY++;

if(newX >= 0 && newX < SIZE && newY >= 0 && newY >= 0 && newY < SIZE && labyrinth[newX][newY] != '|' && labyrinth[newX][newY] !='/' && labyrinth[newX][newY] !='\\' && labyrinth[newX][newY] !='#') {
    *x = newX;
    *y = newY;
    return 1;
}
    return 0;
}
int main() {
    int level = 0;
    int x = 0, y = 0;
    char direction;
    int won = 0;
}