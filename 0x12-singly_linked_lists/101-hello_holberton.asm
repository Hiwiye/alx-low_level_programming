section .data
    hello_msg db "Hello, Holberton", 0   ; Define the message string with a null terminator

section .text
    extern printf                        ; Declare printf as an external symbol
    global main                          ; Define the global entry point for the program

main:
    ; Set up the arguments for printf
    mov rdi, hello_msg                   ; First argument: pointer to the message string
    xor rax, rax                         ; Clear rax to indicate no floating point arguments

    ; Call printf
    call printf                          ; Call the printf function

    ; Exit the program
    mov rax, 60                          ; System call number for exit
    xor rdi, rdi                         ; Exit code 0
    syscall                              ; Make the system call

section .note.GNU-stack noalloc noexec nowrite progbits
