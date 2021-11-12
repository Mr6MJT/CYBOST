section .data
        text db "Hello World",10
       
section .text
        global _start
        
_start:
        mov rax, 0
        mov rdi, 0
        mov rsi, text
        mov rdx, 12
        syscall
        
        mov rax, 60
        mov rdi, 0
        syscall
        

