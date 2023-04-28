/** Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.

 * global main: Declares the symbol main as a global symbol
 * extern printf: Declares the printf function
 * main: Defines the entry point of the program
 * mov edi, format: Moves the address of the string
 * xor eax, eax: clears the eax register
 * call printf: calls the printf function with the arguments
 * mov eax: sets the return value of the main function
 * ret: returns control to the operating system, terminating the program
 * format: db 'Hello, Holberton\n',0: This line defines the string
*/

global   main
	  extern    printf
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
	  ret
format: db `Hello, Holberton\n`,0

