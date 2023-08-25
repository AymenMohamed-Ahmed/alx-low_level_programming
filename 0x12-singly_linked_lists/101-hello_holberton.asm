section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0
    newline db 10, 0

section .text
    global main
    extern printf, exit

main:
    push rbp
    mov rdi, format
    mov rsi, hello
    call printf
    mov rdi, format
    mov rsi, newline
    call printf
    pop rbp
    xor rdi, rdi     ; Exit status code 0
    call exit
