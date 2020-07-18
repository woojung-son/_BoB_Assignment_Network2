main.out : a.o main.o
	gcc -o main.out a.o main.o

a.o : a.c
	gcc -c -o a.o a.c

main.o : main.c
	gcc -c -o main.o main.c

clean:
	rm *.o main.out
