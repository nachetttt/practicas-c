	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 26, 0	sdk_version 26, 2
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	wzr, [x29, #-4]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	mov	x9, sp
	sub	x8, x29, #5
	str	x8, [x9]
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	bl	_scanf
	ldursb	w8, [x29, #-5]
	subs	w8, w8, #83
	b.eq	LBB0_2
	b	LBB0_1
LBB0_1:
	ldursb	w8, [x29, #-5]
	subs	w8, w8, #115
	b.ne	LBB0_3
	b	LBB0_2
LBB0_2:
	mov	x8, sp
	mov	x9, #4719                       ; =0x126f
	movk	x9, #49283, lsl #16
	movk	x9, #8650, lsl #32
	movk	x9, #16393, lsl #48
	fmov	d0, x9
	str	d0, [x8]
	adrp	x0, l_.str.2@PAGE
	add	x0, x0, l_.str.2@PAGEOFF
	bl	_printf
	b	LBB0_3
LBB0_3:
	adrp	x0, l_.str.3@PAGE
	add	x0, x0, l_.str.3@PAGEOFF
	bl	_printf
	mov	w0, #0                          ; =0x0
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"\302\277Quieres conocer al n\303\272mero PI? (S/N)"

l_.str.1:                               ; @.str.1
	.asciz	"%c"

l_.str.2:                               ; @.str.2
	.asciz	"%f\n"

l_.str.3:                               ; @.str.3
	.asciz	"Fin de programa \n"

.subsections_via_symbols
