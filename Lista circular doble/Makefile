cirdoble.o: cirdoble.c
 gcc cirdoble.c -c
main.o: main.c
 gcc main.c -c

a.out: main.o cirdoble.o
 gcc main.o cirdoble.o

run: a.out
 ./a.out

clean:
 rm -f a.out main.o cirdoble.o
