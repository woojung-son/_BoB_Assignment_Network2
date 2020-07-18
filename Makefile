add-nbo.out : a.o add-nbo.o
	g++ -o add-nbo.out a.o add-nbo.o

a.o : a.h a.cpp 
	g++ -c -o a.o a.cpp

main.o : main.c
	g++ -c -o main.o main.cpp

clean:
	rm *.o add-nbo.out
