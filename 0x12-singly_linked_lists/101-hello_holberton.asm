section .data
    hello_msg db "Hello, Holberton", 0xA  ; Message to print with a newline at the end

section .text
    global _start                         ; Entry point for the program

_start:
    ; Write the message to stdout
    mov rax, 1                            ; syscall: write
    mov rdi, 1                            ; file descriptor: stdout
    mov rsi, hello_msg                    ; pointer to the message
    mov rdx, 18                           ; length of the message
    syscall                               ; make the syscall

    ; Exit the program
    mov rax, 60                           ; syscall: exit
    xor rdi, rdi                          ; exit code 0
    syscall                               ; make the syscall
