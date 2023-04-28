global main: declares the symbol main as a global symbol
extern printf: declares the printf function
main: defines the entry point of the program
mov edi, format: moves the address of the string
xor eax, eax: clears the eax register
call printf: calls the printf function with the arguments
mov eax: sets the return value of the main function
ret: returns control to the operating system, terminating the program
format: db 'Hello, Holberton\n',0: this line defines the string

