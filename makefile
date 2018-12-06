all: main.o functions.o functions.h
	gcc -o test main.o functions.o
	
main.o: main.c
	gcc -c main.c

functions.o: functions.c
	gcc -c functions.c
	
run:
	./test
	
clean:
	rm *.o
	./test
	
	
   