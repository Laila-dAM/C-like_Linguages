#include "types.h"

void kernel main(void) {
    initialize_interrupts();
    print("Minimal OS Kernel Loaded!");
    initialize memory();

    while(1){
    
    }
}