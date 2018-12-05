all: main.o functions.o functions.h
	gcc -o test main.o

main.o: main.c functions.h
	gcc -c main.c

functions.o: functions.c functions.h
	gcc -c functions.c
	
run:
	./test
	
clean:
	rm *.o
	
	
   