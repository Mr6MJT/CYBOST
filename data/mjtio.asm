; #############################################################################################################
; hello guys i am Mr MJT,this header is coded by me,include this header by typing %include "mjt.asm"
; ##############################################################################################################
; https://github.com/Mr6MJT


; this header will help the programmers,hackers,and computer science students who learned assembly language


; print <textname>, <length of the string>
; input <TheNameThatYouTypedIn.bss>, <bytes>
; exit
%macro exit 0
	mov rax, 60
	mov rdi, 0
	syscall
%endmacro

%macro print 2
	mov rax, 1
	mov rdi, 1
	mov rsi, %1
	mov rdx, %2
	syscall
%endmacro


%macro input 2
	mov rax, 0
	mov rdi, 0
	mov rsi, %1
	mov rdx, %2
	syscall
%endmacro

%macro prInput 2
	mov rax, 1
	mov rdi, 1
	mov rsi, %1
	mov rdx, %2
	syscall
%endmacro
