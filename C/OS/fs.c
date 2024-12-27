#include "types.h"
#include "kernel.h"

#define MAX_FILES 10
#define MAX_FILE_NAME 255

typedef struct {
    char name[MAX_FILE_NAME];
    uint32_t size;
    uint32_t start_address;
} File;

File files[MAX_FILES];

void initialize_filesystem(void) {
    for(int i = 0; i < MAX_FILES; i++){
        files[i].name[0] = '\0';
        files[i].size = 0;
        files[i].start_address = 0;
    }
}
int create_file(char* name, uint32_t size){
    for(int i = 0; i < MAX_FILES; i++){
        if(files[i].name[0] == '\0'){
            strncpy(files[i].name, name, MAX_FILE_NAME);
            files[i].size = size;
            files[i].start_address = (uint32_t)malloc(size);
            return 0;
        }
    }
    return -1;
}