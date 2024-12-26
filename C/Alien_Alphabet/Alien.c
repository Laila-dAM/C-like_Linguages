#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_CHARACTERS 100
#define GRID_SIZE 20
#define MAX_WORD_LENGTH 100

typedef struct {
    int id;
    char drawing[GRID_SIZE][GRID_SIZE];
} Character;

typedef struct {
    Character characters[MAX_CHARACTERS];
    int numCharacters;
} Alphabet;

typedef struct {
    char content[MAX_WORD_LENGTH];
} Word;

void generateCharacter(Character *character, int complexity);
void drawCharacter(char grid[GRID_SIZE][GRID_SIZE]);
char* applyRules(char* baseWord, int ruleType);