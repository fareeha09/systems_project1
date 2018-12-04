#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

/*Takes one command from the command line
	ex. cd ..
	Parses that command and returns array*/
// char ** parse(char * str){
	// char ** array = malloc(100);
	// int i = 0;
	// while(str){
		// array[i] = strsep(&str, " ");
		// printf("\n arr[i]: %s\n", array[i]);
	// }
	// return array;
// }

int main(){

  // printf("SHELL\n");
  // char str[100];

  // fp = open("text.txt", O_RDONLY);
	
	while(1){
		long size;
		char * buf;
		char * ptr;
		
		ptr = getcwd(buf, (size_t)size);
		printf("SHELL: %s$", buf);
		
		char str[100];
		fgets(str, 100, stdin);
		
		if (!strcmp(str, "exit"))
			return 0;
		char ** array = malloc(100);
		int i = 0;
		while(str){
			array[i] = strsep(&str, " ");
			printf("\n arr[i]: %s\n", array[i]);
		}
		// char ** arr = parse(str);
	} 

  
}