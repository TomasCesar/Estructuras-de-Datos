a.out: main.o raiz.o
	gcc main.o raiz.o
main.o: main.c
	gcc -c main.c
raiz.o: raiz.c
	gcc -c raiz.c
run: a.out
	./a.out
clear:
	rm a.out main.o raiz.o
