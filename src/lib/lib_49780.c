#include <ultra64.h>
#include "constants.h"
#include "game/data/data_000000.h"
#include "game/data/data_0083d0.h"
#include "game/data/data_00e460.h"
#include "game/data/data_0160b0.h"
#include "game/data/data_01a3a0.h"
#include "game/data/data_020df0.h"
#include "game/data/data_02da90.h"
#include "gvars/gvars.h"
#include "lib/lib_4b480.h"
#include "types.h"

GLOBAL_ASM(
glabel func00049780
/*    49780:	3c028006 */ 	lui	$v0,%hi(var80060910)
/*    49784:	03e00008 */ 	jr	$ra
/*    49788:	8c420910 */ 	lw	$v0,%lo(var80060910)($v0)
/*    4978c:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel __osViSwapContext
/*    49790:	27bdffb8 */ 	addiu	$sp,$sp,-72
/*    49794:	afb00018 */ 	sw	$s0,0x18($sp)
/*    49798:	afbf001c */ 	sw	$ra,0x1c($sp)
/*    4979c:	3c108006 */ 	lui	$s0,%hi(var80060914)
/*    497a0:	3c0ea440 */ 	lui	$t6,0xa440
/*    497a4:	8e100914 */ 	lw	$s0,%lo(var80060914)($s0)
/*    497a8:	8dcf0010 */ 	lw	$t7,0x10($t6)
/*    497ac:	8e050008 */ 	lw	$a1,0x8($s0)
/*    497b0:	31f80001 */ 	andi	$t8,$t7,0x1
/*    497b4:	afb8002c */ 	sw	$t8,0x2c($sp)
/*    497b8:	8e040004 */ 	lw	$a0,0x4($s0)
/*    497bc:	0c012d20 */ 	jal	osVirtualToPhysical
/*    497c0:	afa50044 */ 	sw	$a1,0x44($sp)
/*    497c4:	8fb9002c */ 	lw	$t9,0x2c($sp)
/*    497c8:	8fa50044 */ 	lw	$a1,0x44($sp)
/*    497cc:	960a0000 */ 	lhu	$t2,0x0($s0)
/*    497d0:	00194080 */ 	sll	$t0,$t9,0x2
/*    497d4:	01194021 */ 	addu	$t0,$t0,$t9
/*    497d8:	00084080 */ 	sll	$t0,$t0,0x2
/*    497dc:	00a83021 */ 	addu	$a2,$a1,$t0
/*    497e0:	8cc90028 */ 	lw	$t1,0x28($a2)
/*    497e4:	314b0002 */ 	andi	$t3,$t2,0x2
/*    497e8:	11600008 */ 	beqz	$t3,.L0004980c
/*    497ec:	01222021 */ 	addu	$a0,$t1,$v0
/*    497f0:	8cad0020 */ 	lw	$t5,0x20($a1)
/*    497f4:	8e0c0020 */ 	lw	$t4,0x20($s0)
/*    497f8:	2401f000 */ 	addiu	$at,$zero,-4096
/*    497fc:	01a17024 */ 	and	$t6,$t5,$at
/*    49800:	018e7825 */ 	or	$t7,$t4,$t6
/*    49804:	10000003 */ 	b	.L00049814
/*    49808:	ae0f0020 */ 	sw	$t7,0x20($s0)
.L0004980c:
/*    4980c:	8cb80020 */ 	lw	$t8,0x20($a1)
/*    49810:	ae180020 */ 	sw	$t8,0x20($s0)
.L00049814:
/*    49814:	96190000 */ 	lhu	$t9,0x0($s0)
/*    49818:	33280004 */ 	andi	$t0,$t9,0x4
/*    4981c:	51000035 */ 	beqzl	$t0,.L000498f4
/*    49820:	8cce002c */ 	lw	$t6,0x2c($a2)
/*    49824:	8cc3002c */ 	lw	$v1,0x2c($a2)
/*    49828:	c6040024 */ 	lwc1	$f4,0x24($s0)
/*    4982c:	3c014f80 */ 	lui	$at,0x4f80
/*    49830:	30690fff */ 	andi	$t1,$v1,0xfff
/*    49834:	44893000 */ 	mtc1	$t1,$f6
/*    49838:	05210004 */ 	bgez	$t1,.L0004984c
/*    4983c:	46803220 */ 	cvt.s.w	$f8,$f6
/*    49840:	44815000 */ 	mtc1	$at,$f10
/*    49844:	00000000 */ 	nop
/*    49848:	460a4200 */ 	add.s	$f8,$f8,$f10
.L0004984c:
/*    4984c:	46082402 */ 	mul.s	$f16,$f4,$f8
/*    49850:	24020001 */ 	addiu	$v0,$zero,0x1
/*    49854:	3c014f00 */ 	lui	$at,0x4f00
/*    49858:	444af800 */ 	cfc1	$t2,$31
/*    4985c:	44c2f800 */ 	ctc1	$v0,$31
/*    49860:	00000000 */ 	nop
/*    49864:	460084a4 */ 	cvt.w.s	$f18,$f16
/*    49868:	4442f800 */ 	cfc1	$v0,$31
/*    4986c:	00000000 */ 	nop
/*    49870:	30420078 */ 	andi	$v0,$v0,0x78
/*    49874:	50400013 */ 	beqzl	$v0,.L000498c4
/*    49878:	44029000 */ 	mfc1	$v0,$f18
/*    4987c:	44819000 */ 	mtc1	$at,$f18
/*    49880:	24020001 */ 	addiu	$v0,$zero,0x1
/*    49884:	46128481 */ 	sub.s	$f18,$f16,$f18
/*    49888:	44c2f800 */ 	ctc1	$v0,$31
/*    4988c:	00000000 */ 	nop
/*    49890:	460094a4 */ 	cvt.w.s	$f18,$f18
/*    49894:	4442f800 */ 	cfc1	$v0,$31
/*    49898:	00000000 */ 	nop
/*    4989c:	30420078 */ 	andi	$v0,$v0,0x78
/*    498a0:	14400005 */ 	bnez	$v0,.L000498b8
/*    498a4:	00000000 */ 	nop
/*    498a8:	44029000 */ 	mfc1	$v0,$f18
/*    498ac:	3c018000 */ 	lui	$at,0x8000
/*    498b0:	10000007 */ 	b	.L000498d0
/*    498b4:	00411025 */ 	or	$v0,$v0,$at
.L000498b8:
/*    498b8:	10000005 */ 	b	.L000498d0
/*    498bc:	2402ffff */ 	addiu	$v0,$zero,-1
/*    498c0:	44029000 */ 	mfc1	$v0,$f18
.L000498c4:
/*    498c4:	00000000 */ 	nop
/*    498c8:	0440fffb */ 	bltz	$v0,.L000498b8
/*    498cc:	00000000 */ 	nop
.L000498d0:
/*    498d0:	ae02002c */ 	sw	$v0,0x2c($s0)
/*    498d4:	8ccb002c */ 	lw	$t3,0x2c($a2)
/*    498d8:	2401f000 */ 	addiu	$at,$zero,-4096
/*    498dc:	44caf800 */ 	ctc1	$t2,$31
/*    498e0:	01616824 */ 	and	$t5,$t3,$at
/*    498e4:	004d6025 */ 	or	$t4,$v0,$t5
/*    498e8:	10000003 */ 	b	.L000498f8
/*    498ec:	ae0c002c */ 	sw	$t4,0x2c($s0)
/*    498f0:	8cce002c */ 	lw	$t6,0x2c($a2)
.L000498f4:
/*    498f4:	ae0e002c */ 	sw	$t6,0x2c($s0)
.L000498f8:
/*    498f8:	3c028006 */ 	lui	$v0,%hi(var8005cefc)
/*    498fc:	8c42cefc */ 	lw	$v0,%lo(var8005cefc)($v0)
/*    49900:	8ccf0030 */ 	lw	$t7,0x30($a2)
/*    49904:	0002c400 */ 	sll	$t8,$v0,0x10
/*    49908:	01f8c823 */ 	subu	$t9,$t7,$t8
/*    4990c:	03224021 */ 	addu	$t0,$t9,$v0
/*    49910:	afa80034 */ 	sw	$t0,0x34($sp)
/*    49914:	96030000 */ 	lhu	$v1,0x0($s0)
/*    49918:	8ca7001c */ 	lw	$a3,0x1c($a1)
/*    4991c:	30690020 */ 	andi	$t1,$v1,0x20
/*    49920:	11200002 */ 	beqz	$t1,.L0004992c
/*    49924:	306a0040 */ 	andi	$t2,$v1,0x40
/*    49928:	00003825 */ 	or	$a3,$zero,$zero
.L0004992c:
/*    4992c:	5140000d */ 	beqzl	$t2,.L00049964
/*    49930:	306b0080 */ 	andi	$t3,$v1,0x80
/*    49934:	ae00002c */ 	sw	$zero,0x2c($s0)
/*    49938:	8e040004 */ 	lw	$a0,0x4($s0)
/*    4993c:	afa70038 */ 	sw	$a3,0x38($sp)
/*    49940:	afa60024 */ 	sw	$a2,0x24($sp)
/*    49944:	0c012d20 */ 	jal	osVirtualToPhysical
/*    49948:	afa50044 */ 	sw	$a1,0x44($sp)
/*    4994c:	8fa50044 */ 	lw	$a1,0x44($sp)
/*    49950:	8fa60024 */ 	lw	$a2,0x24($sp)
/*    49954:	8fa70038 */ 	lw	$a3,0x38($sp)
/*    49958:	00402025 */ 	or	$a0,$v0,$zero
/*    4995c:	96030000 */ 	lhu	$v1,0x0($s0)
/*    49960:	306b0080 */ 	andi	$t3,$v1,0x80
.L00049964:
/*    49964:	51600010 */ 	beqzl	$t3,.L000499a8
/*    49968:	3c0fa440 */ 	lui	$t7,0xa440
/*    4996c:	960d0028 */ 	lhu	$t5,0x28($s0)
/*    49970:	3c0103ff */ 	lui	$at,0x3ff
/*    49974:	8e040004 */ 	lw	$a0,0x4($s0)
/*    49978:	000d6400 */ 	sll	$t4,$t5,0x10
/*    4997c:	01817024 */ 	and	$t6,$t4,$at
/*    49980:	ae0e002c */ 	sw	$t6,0x2c($s0)
/*    49984:	afa70038 */ 	sw	$a3,0x38($sp)
/*    49988:	afa60024 */ 	sw	$a2,0x24($sp)
/*    4998c:	0c012d20 */ 	jal	osVirtualToPhysical
/*    49990:	afa50044 */ 	sw	$a1,0x44($sp)
/*    49994:	8fa50044 */ 	lw	$a1,0x44($sp)
/*    49998:	8fa60024 */ 	lw	$a2,0x24($sp)
/*    4999c:	8fa70038 */ 	lw	$a3,0x38($sp)
/*    499a0:	00402025 */ 	or	$a0,$v0,$zero
/*    499a4:	3c0fa440 */ 	lui	$t7,0xa440
.L000499a8:
/*    499a8:	ade40004 */ 	sw	$a0,0x4($t7)
/*    499ac:	8cb80008 */ 	lw	$t8,0x8($a1)
/*    499b0:	3c19a440 */ 	lui	$t9,0xa440
/*    499b4:	3c09a440 */ 	lui	$t1,0xa440
/*    499b8:	af380008 */ 	sw	$t8,0x8($t9)
/*    499bc:	8ca8000c */ 	lw	$t0,0xc($a1)
/*    499c0:	3c0ba440 */ 	lui	$t3,0xa440
/*    499c4:	3c0ca440 */ 	lui	$t4,0xa440
/*    499c8:	ad280014 */ 	sw	$t0,0x14($t1)
/*    499cc:	8caa0010 */ 	lw	$t2,0x10($a1)
/*    499d0:	3c18a440 */ 	lui	$t8,0xa440
/*    499d4:	3c08a440 */ 	lui	$t0,0xa440
/*    499d8:	ad6a0018 */ 	sw	$t2,0x18($t3)
/*    499dc:	8cad0014 */ 	lw	$t5,0x14($a1)
/*    499e0:	3c0aa440 */ 	lui	$t2,0xa440
/*    499e4:	3c028006 */ 	lui	$v0,%hi(var80060910)
/*    499e8:	ad8d001c */ 	sw	$t5,0x1c($t4)
/*    499ec:	8cae0018 */ 	lw	$t6,0x18($a1)
/*    499f0:	3c0da440 */ 	lui	$t5,0xa440
/*    499f4:	24420910 */ 	addiu	$v0,$v0,%lo(var80060910)
/*    499f8:	adee0020 */ 	sw	$t6,0x20($t7)
/*    499fc:	af070024 */ 	sw	$a3,0x24($t8)
/*    49a00:	8fb90034 */ 	lw	$t9,0x34($sp)
/*    49a04:	3c0ea440 */ 	lui	$t6,0xa440
/*    49a08:	3c038006 */ 	lui	$v1,%hi(var80060914)
/*    49a0c:	ad190028 */ 	sw	$t9,0x28($t0)
/*    49a10:	8cc90034 */ 	lw	$t1,0x34($a2)
/*    49a14:	24630914 */ 	addiu	$v1,$v1,%lo(var80060914)
/*    49a18:	ad49002c */ 	sw	$t1,0x2c($t2)
/*    49a1c:	8ccb0038 */ 	lw	$t3,0x38($a2)
/*    49a20:	adab000c */ 	sw	$t3,0xc($t5)
/*    49a24:	8e0c0020 */ 	lw	$t4,0x20($s0)
/*    49a28:	02005825 */ 	or	$t3,$s0,$zero
/*    49a2c:	adcc0030 */ 	sw	$t4,0x30($t6)
/*    49a30:	8e0f002c */ 	lw	$t7,0x2c($s0)
/*    49a34:	260c0030 */ 	addiu	$t4,$s0,0x30
/*    49a38:	af0f0034 */ 	sw	$t7,0x34($t8)
/*    49a3c:	8e19000c */ 	lw	$t9,0xc($s0)
/*    49a40:	ad190000 */ 	sw	$t9,0x0($t0)
/*    49a44:	8c4a0000 */ 	lw	$t2,0x0($v0)
/*    49a48:	ac500000 */ 	sw	$s0,0x0($v0)
/*    49a4c:	ac6a0000 */ 	sw	$t2,0x0($v1)
.L00049a50:
/*    49a50:	8d610000 */ 	lw	$at,0x0($t3)
/*    49a54:	256b000c */ 	addiu	$t3,$t3,0xc
/*    49a58:	254a000c */ 	addiu	$t2,$t2,0xc
/*    49a5c:	ad41fff4 */ 	sw	$at,-0xc($t2)
/*    49a60:	8d61fff8 */ 	lw	$at,-0x8($t3)
/*    49a64:	ad41fff8 */ 	sw	$at,-0x8($t2)
/*    49a68:	8d61fffc */ 	lw	$at,-0x4($t3)
/*    49a6c:	156cfff8 */ 	bne	$t3,$t4,.L00049a50
/*    49a70:	ad41fffc */ 	sw	$at,-0x4($t2)
/*    49a74:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*    49a78:	8fb00018 */ 	lw	$s0,0x18($sp)
/*    49a7c:	27bd0048 */ 	addiu	$sp,$sp,0x48
/*    49a80:	03e00008 */ 	jr	$ra
/*    49a84:	00000000 */ 	nop
/*    49a88:	00000000 */ 	nop
/*    49a8c:	00000000 */ 	nop
);