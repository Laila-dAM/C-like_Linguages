CC = gcc
CFLAGS = -ffreestanding -O2 -Wall -Wextra -nostdlib -nostartfiles -fno-pic
LDFLAGS = -T linker.ld --nostdlib --nostartfiles
INCLUDE = -I.

SOURCES = kernel.c memory.c fs.c
OBJECTS = $(SOURCES:.c=.o)
KERNEL = kernel.bin

all: $(KERNEL)

$(KERNEL): $(OBJECTS) boot.bin
    $(LD) $(LDFLAGS) -o $(KERNEL) $(OBJECTS) boot.bin

clean:
    rm -f $(OBJECTS) $(KERNEL) boot.bin
