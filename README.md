# systems_project1
by Fareeha Tabassum

### Features:
- [x] Reads commands and parses with space
- [x] cd and exit works
- [x] fork and exec other commands work
- [x] Parses multiple commands on one line with ; works 
- [ ] Redirects using >, <
- [ ] pipes 

### Attempted, but not completely succeeded:
* Basic Redirection - everything works until you get to the dup2 part
* pipes

### Bugs:
* Basic Redirection is forever looping
### Files & Function Headers:
* main.c *Handles making the shell*
	
* function.c *Handles every function such as parsing, executing, etc.*
	* /*======== char * parse_space() ==========
		* Inputs: char * str (the command)
		* Returns: an array of strings of the command after parsing 

		* Takes one argument from fgets which is the command to be executed
		* ex. cd ..
		* Parses that command at any space, 
		* puts it in an array,
		* and returns the array
	* ====================*/

	* /*======== char ** parse_semicolon() ==========
		* Inputs:  char * str (the commands including the ;)
		* Returns: an array of strings of the seperate commands after parsing 

		* Takes one argument from fgets which is the command to be executed
		* ex. cd ..
		* Parses that command at semicolon, 
		* puts it in an array,
		* and returns the array
	* ====================*/

	* /*======== char * execute() ==========
		* Inputs:  char ** arr
		* Returns: a char pointer

		* Takes one argument which is an array of the command the user puts in
		* if it's cd or exit, it just does it.
		* it it's any other command it execs
		* returns a char pointer idk why
	* ====================*/
	* /*======== char * redirout() ==========
		* Inputs:  char * str
		* Returns: a char pointer
		
		* Takes one argument from fgets which is the command to be executed
		* ex. ls>hoo.c
		* Parses that command at >, 
		* puts it in an array,
		* does dup and redirects it
		* returns a pointer to str
	* ====================*/
	* /*======== char * redirin() ==========
		* Inputs:  char * str
		* Returns: a char pointer

		* Takes one argument from fgets which is the command to be executed
		* ex. ls<hoo.c
		* Parses that command at <, 
		* puts it in an array,
		* does dup and redirects it
		* returns a pointer to str
	* ====================*/

### What I've learned:
  * That working alone sucks
