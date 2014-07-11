all: ourclient.c
	gcc -o ourclient ourclient.c
preprocess:
	gcc -o ourclient.p -E ourclient.c
compile:
	gcc -S ourclient.c
assemble:
	gcc -c ourclient.c
clean:
	rm ourclient ourclient.p ourclient.s ourclient.o
