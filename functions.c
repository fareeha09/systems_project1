#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/wait.h>
#include "functions.h"

/*Takes one argument from fgets which is the command to be executed
	ex. cd ..
	Parses that command at any space, 
	puts it in an array,
	and returns the array*/
char ** parse_space(char * str){
	char ** array = malloc(100);
	int i = 0;
	while(str){
		char * h = strsep(&str, " ");
		if (h)
			array[i] = h; 
		i++;
	} 
	return array;
}

/*Takes one argument from fgets which is the command to be executed
	ex. cd ..
	Parses that command at semicolon, 
	puts it in an array,
	and returns the array*/
char ** parse_semicolon(char *str){
	char ** array = malloc(100);
	int i=0;
	while(str){
		char * h = strsep(&str, ";");
		array[i]= h;
		i++;
	}
	return array;
}

/*Takes one argument which is an array of the command the user puts in
	if it's cd or exit, it just does it.
	it it's any other command it execs
	returns a char pointer idk why*/
char * execute(char ** arr){
	
	//cd AND exit ARE ONLY WORKING WHEN I'M ADDING A SPACE AFTER EX. 'cd .. '
	// if command is exit
	if (!strcmp(arr[0], "exit")){
		printf("exiting\n");
		exit(EXIT_SUCCESS); //WHY IS IT NOT EXITINGNNG			
	}
	
	//if command is cd
	if (!strcmp(arr[0], "cd")){
		int p = chdir(arr[1]);
		if (p)
			printf("%s\n", strerror(errno));
	} 
	
	//if command is anything other than those two
	else {
		int f = fork();
		if (f){ //parent process
			int status;
			wait(&status);
		} else { //child process
			execvp(arr[0], arr);
			exit(EXIT_SUCCESS);
		}
	}
}
