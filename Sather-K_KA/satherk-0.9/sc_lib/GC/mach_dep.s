gcc2_compiled.:
	.global __gc_arrays
.data
	.align 4
__gc_arrays:
	.word 0
	.skip 2048
	.skip 26628
	.global _aobjfreelist
	.global _objfreelist
	_aobjfreelist = __gc_arrays
	_objfreelist = __gc_arrays+0x804
	    .text
		.globl  __allocobj
		.globl  __allocaobj
		.globl  _allocobj
		.globl  _allocaobj
	_allocaobj:
		ba	__allocaobj
		nop
	_allocobj:
		ba	__allocobj
		nop
		.globl	_save_regs_in_stack
	_save_regs_in_stack:
		t	0x3   ! ST_FLUSH_WINDOWS
		mov	%sp,%o0
		retl
		nop
.text
	.align 4
	.global _mark_regs
	.proc 1
_mark_regs:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	call _save_regs_in_stack,0
	nop
	ret
	restore
	.global _last_hblk
	.common _last_hblk,8,"bss"
	.global _hblkfreelist
	.common _hblkfreelist,8,"bss"
	.global _hincr
	.common _hincr,8,"bss"
	.global _heaplim
	.common _heaplim,8,"bss"
	.global _stacktop
	.common _stacktop,8,"bss"
