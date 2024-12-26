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
    printf("Alphabet generated with %d characters.\n", num);
    break;
            }

    case '2': {
        displayAlphabet(&alphabet);
        break;
    }
    case '3': {
        printf("Enter file name to save as text: ");
        char fileName[100];
        scanf("%s", fileName);
        saveAsText(fileName, &alphabet);
        break;
    }
    case '4': {
        printf("Enter file name to save as image: ");
        char fileName[100];
        scanf("%s", fileName);
        saveAsImage(fileName, &alphabet);
        break;
    }
    case 'q': {
        printf("Exiting application.\n");
        break;
    }
    default: {
        printf("Invalid choice. Try again.\n");
        break;
        }
    }
} while (choice !='q');
    return 0;
}
void generateCharacter(Character *character, int complexity) {
    character->id = rand() % 1000;
    clearGrid(character->drawing);

    for(int i = 0; i < complexity; i++){
        int x = rand() % GRID_SIZE;
        int y = rand() % GRID_SIZE;
        character->drawing[x][y] = '#';
    }
}
void drawCharacter(char grid[GRID_SIZE][GRID_SIZE]) {
    printGrid(grid);
}

char* applyRules(char* baseWord, int ruleType) {
    static char modifiedWord[MAX_WORD_LENGTH];
    strcpy(modifiedWord, baseWord);

    if(ruleType == 1) {
        for(int i = 0; i < strlen(modifiedWord); i++) {
            if(strchr("aeiou", modifiedWord[i])) {
                modifiedWord[i] = '*';
            }
        }
    }
return modifiedWord;
}
int validateWord(char* word){
    for(int i = 1; i < strlen(word); i++){
        if(word[i] == word[i - 1]) {
            return 0;
        }
    }
    return 1;
}
void showMenu(){
    printf("\nAlien Alphabet Creation Machine\n");
    printf("1. Generate new alphabet\n");
    printf("2. Display alphabet\n");
    printf("3. Save alphabet as text\n");
    printf("4. Save alphabet as ASCII image\n");
    printf("q. Quit\n");
    printf("Choose an option: ");
}
void captureInput(){
    
}
void displayAlphabet(Alphabet *alphabet){
    for(int i = 0; i < alphabet->numCharacters; i++){
        printf("Character %d:\n" alphabet->character[i].id);
        drawCharacter(alphabet->characters[i].drawing);
        
    }
}
void saveAsText(char* fileName, Alphabet *alphabet){
    FILE *file = fopen(fileName, "w");
    if (file == NULL){
        printf("Error: Could not open file for writing.\n");
        return;
    }
for (int i = 0; i < alphabet->numCharacters; i++){
    fprintf(file, "Character %d:\n", alphabet->characters[i].id);
    for(int x = 0; x < GRID_SIZE; x++){
        for (int y = 0; y < GRID_SIZE; y++){
            fputc(alphabet->characters[i].drawing[x][y],file);
            
        }
    fputc('\n', file);
    }
    fprintf(file, "\n");
}
    fclose(file);
    printf("Alphabet saved to %s\n", fileName);
}
void saveAsImage(char* fileName, Alphabet *alphabet){
    printf("Feature not yet implemented.\n");
}
void clearGrid(char grid[GRID_SIZE][GRID_SIZE]) {
    for(int x = 0; x < GRID_SIZE; x++){
        for (int y = 0; y < GRID_SIZE; y++){
            grid[x][y] = '';
        }
    }
}
void printGrid(char grid[GRID_SIZE][GRID_SIZE]) {
    for(int x = 0; x < GRID_SIZE; x++){
        for(int y = 0; y < GRID_SIZE; y++){
            putchar(grid[x][y]);
        }
        putchar('\n');
    }
}