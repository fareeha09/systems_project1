# systems_project1
by Fareeha Tabassum

### Features:
- [x] reads commands and parses with space
- [x] cd and exit works (except you need an extra space which I will attempt tmrw
- [x] fork and exec other commands kind of
- [ ] Parses multiple commands on one line --> I'm getting there jfejrlfjr
- [ ] Redirects using >, <
- [ ] pipes :(	
### Attempted (I'll add stuff here tmrw when I've completed it to the best of my ability):
	
### Bugs (I'll add stuff here tmrw when I've completed it to the best of my ability):
	
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

### What I've learned:
  * That working alone sucks
  * To never fall behind cuz then I won't understand anything and will hand in the project late and cry inside
