all: ourserver.c
	gcc -o ourserver ourserver.c
preprocess:
	gcc -o ourserver.p -E ourserver.c
compile:
	gcc -S ourserver.c
assemble:
	gcc -c ourserver.c
clean:
	rm ourserver ourserver.p ourserver.s ourserver.o
