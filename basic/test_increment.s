	.file	"test_increment.c"
	.text
.globl main
	.type	main, @function
main:
	leal	4(%esp), %ecx
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%ecx
	subl	$16, %esp
	movl	$0, -12(%ebp)
	movl	$9, -8(%ebp)
	jmp	.L2
.L3:
	addl	$1, -12(%ebp)
.L2:
	cmpl	$9, -12(%ebp)
	jle	.L3
	jmp	.L5
.L6:
	subl	$1, -8(%ebp)
.L5:
	cmpl	$0, -8(%ebp)
	jne	.L6
	addl	$16, %esp
	popl	%ecx
	popl	%ebp
	leal	-4(%ecx), %esp
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.1.2 20080704 (Red Hat 4.1.2-48)"
	.section	.note.GNU-stack,"",@progbits
