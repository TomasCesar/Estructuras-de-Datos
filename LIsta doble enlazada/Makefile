doble.o: doble.c
	gcc doble.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o doble.o
	gcc main.o doble.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o doble.o
