CFLAGS=-Wall -g

all: boot write

boot:
		nasm boot.asm -f bin -o boot.bin

write:
		cc write.c -o write

clean:
		rm write boot.bin boot.img
