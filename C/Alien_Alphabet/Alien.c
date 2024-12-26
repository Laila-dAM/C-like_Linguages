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
int validateWord(char* word);
void showMenu();
void captureInput();
void displayAlphabet(Alphabet *alphabet);
void saveAsText(char* fileName, Alphabet *alphabet);
void saveAsImage(char* fileName, Alphabet *alphabet);

void clearGrid(char grid[GRID_SIZE][GIRD_SIZE]);
void printGrid(char grid[GRID_SIZE][GRID_SIZE]);

int main(){
    Alphabet alphabet;
    alphabet.numCharacters = 0;

    char choice;
    do {
        showMenu();
        scanf("%c", &choice);
        switch (choice){
            case '1' {
                printf("Enter number of characters to generate (max %d): ", MAX_CHARACTERS);
        int num;
        scanf("%d", &num);

        if(num > MAX_CHARACTERS) num = MAX_CHARACTERS;
        printf("Enter visual complexity (1-10): ");
        int complexity;
        scanf("%d", &complexity);
    for (int i = 0; i < num; i++){
        generateCharacter(&alphabet.characters[i], complexity);
    }
    alphabet.numCharacters = num;
            }
        }
    }
}