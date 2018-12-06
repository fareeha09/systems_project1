#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/wait.h>
#include "functions.h"


int main(){

  // printf("SHELL\n");
  // char str[100];

  // fp = open("text.txt", O_RDONLY);
	
	while(1){
		printf("SHELL:");
		long size;
		char buf[1000];
		char * ptr;
		
		ptr = getcwd(buf, (size_t)size);
		printf("%s$", buf);
		
		char str[100];
		fgets(str, 100, stdin);
		str[strlen(str) - 1] = '\0';
			
		if (strstr(str, ">")){
			redirout(str);
		}
		else if (strstr(str, ">")){
			redirin(str);
		}
		else {
			char ** arr0 = parse_semicolon(str);
			
			for (int i=0; arr0[i]; i++){
				char ** arr = parse_space(str);
				strcpy(str, arr0[i]);
				//printf("arr[0]: %s, arr[1]: %s\n", arr[0], arr[1]);
				execute(arr);
			}
		}
	} 
	return 0;
  
}