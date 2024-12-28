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
    
}