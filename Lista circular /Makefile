contigua.o: circular.c
	gcc circular.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o circular.o
	gcc main.o circular.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o circular.o
