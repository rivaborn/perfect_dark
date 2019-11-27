#include <ultra64.h>
#include "constants.h"
#include "gvars/gvars.h"
#include "setup/setup_000000.h"
#include "setup/setup_0160b0.h"
#include "setup/setup_020df0.h"
#include "types.h"
#include "game/game_16cfa0.h"

GLOBAL_ASM(
glabel func0f152710
/*  f152710:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152714:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f152718:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f15271c:	3c02800b */ 	lui	$v0,0x800b
/*  f152720:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f152724:	03e00008 */ 	jr	$ra
/*  f152728:	9042c7fc */ 	lbu	$v0,-0x3804($v0)
);

GLOBAL_ASM(
glabel func0f15272c
/*  f15272c:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152730:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f152734:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f152738:	3c01800b */ 	lui	$at,0x800b
/*  f15273c:	002e0821 */ 	addu	$at,$at,$t6
/*  f152740:	03e00008 */ 	jr	$ra
/*  f152744:	a025c7fc */ 	sb	$a1,-0x3804($at)
);

GLOBAL_ASM(
glabel func0f152748
/*  f152748:	00047080 */ 	sll	$t6,$a0,0x2
/*  f15274c:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f152750:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f152754:	3c02800b */ 	lui	$v0,0x800b
/*  f152758:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f15275c:	03e00008 */ 	jr	$ra
/*  f152760:	8042c7fd */ 	lb	$v0,-0x3803($v0)
);

GLOBAL_ASM(
glabel func0f152764
/*  f152764:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152768:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f15276c:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f152770:	3c02800b */ 	lui	$v0,0x800b
/*  f152774:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f152778:	03e00008 */ 	jr	$ra
/*  f15277c:	8042c7fe */ 	lb	$v0,-0x3802($v0)
);

GLOBAL_ASM(
glabel func0f152780
/*  f152780:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152784:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f152788:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f15278c:	3c02800b */ 	lui	$v0,0x800b
/*  f152790:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f152794:	9442c800 */ 	lhu	$v0,-0x3800($v0)
/*  f152798:	304f0001 */ 	andi	$t7,$v0,0x1
/*  f15279c:	03e00008 */ 	jr	$ra
/*  f1527a0:	000f102b */ 	sltu	$v0,$zero,$t7
);

GLOBAL_ASM(
glabel func0f1527a4
/*  f1527a4:	00047080 */ 	sll	$t6,$a0,0x2
/*  f1527a8:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f1527ac:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f1527b0:	3c02800b */ 	lui	$v0,0x800b
/*  f1527b4:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f1527b8:	9442c800 */ 	lhu	$v0,-0x3800($v0)
/*  f1527bc:	304f0008 */ 	andi	$t7,$v0,0x8
/*  f1527c0:	03e00008 */ 	jr	$ra
/*  f1527c4:	000f102b */ 	sltu	$v0,$zero,$t7
);

GLOBAL_ASM(
glabel func0f1527c8
/*  f1527c8:	00047080 */ 	sll	$t6,$a0,0x2
/*  f1527cc:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f1527d0:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f1527d4:	3c02800b */ 	lui	$v0,0x800b
/*  f1527d8:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f1527dc:	9442c800 */ 	lhu	$v0,-0x3800($v0)
/*  f1527e0:	304f0002 */ 	andi	$t7,$v0,0x2
/*  f1527e4:	03e00008 */ 	jr	$ra
/*  f1527e8:	000f102b */ 	sltu	$v0,$zero,$t7
);

GLOBAL_ASM(
glabel func0f1527ec
/*  f1527ec:	00047080 */ 	sll	$t6,$a0,0x2
/*  f1527f0:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f1527f4:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f1527f8:	3c02800b */ 	lui	$v0,0x800b
/*  f1527fc:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f152800:	9442c800 */ 	lhu	$v0,-0x3800($v0)
/*  f152804:	304f0010 */ 	andi	$t7,$v0,0x10
/*  f152808:	03e00008 */ 	jr	$ra
/*  f15280c:	000f102b */ 	sltu	$v0,$zero,$t7
);

GLOBAL_ASM(
glabel func0f152810
/*  f152810:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152814:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f152818:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f15281c:	3c02800b */ 	lui	$v0,0x800b
/*  f152820:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f152824:	9442c800 */ 	lhu	$v0,-0x3800($v0)
/*  f152828:	304f0004 */ 	andi	$t7,$v0,0x4
/*  f15282c:	03e00008 */ 	jr	$ra
/*  f152830:	000f102b */ 	sltu	$v0,$zero,$t7
);

GLOBAL_ASM(
glabel func0f152834
/*  f152834:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152838:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f15283c:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f152840:	3c02800b */ 	lui	$v0,0x800b
/*  f152844:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f152848:	9442c800 */ 	lhu	$v0,-0x3800($v0)
/*  f15284c:	304f0020 */ 	andi	$t7,$v0,0x20
/*  f152850:	03e00008 */ 	jr	$ra
/*  f152854:	000f102b */ 	sltu	$v0,$zero,$t7
);

GLOBAL_ASM(
glabel func0f152858
/*  f152858:	00047080 */ 	sll	$t6,$a0,0x2
/*  f15285c:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f152860:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f152864:	3c02800b */ 	lui	$v0,0x800b
/*  f152868:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f15286c:	9442c800 */ 	lhu	$v0,-0x3800($v0)
/*  f152870:	304f0040 */ 	andi	$t7,$v0,0x40
/*  f152874:	03e00008 */ 	jr	$ra
/*  f152878:	000f102b */ 	sltu	$v0,$zero,$t7
);

GLOBAL_ASM(
glabel func0f15287c
/*  f15287c:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152880:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f152884:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f152888:	3c02800b */ 	lui	$v0,0x800b
/*  f15288c:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f152890:	9442c800 */ 	lhu	$v0,-0x3800($v0)
/*  f152894:	304f0200 */ 	andi	$t7,$v0,0x200
/*  f152898:	03e00008 */ 	jr	$ra
/*  f15289c:	000f102b */ 	sltu	$v0,$zero,$t7
);

GLOBAL_ASM(
glabel func0f1528a0
/*  f1528a0:	00047080 */ 	sll	$t6,$a0,0x2
/*  f1528a4:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f1528a8:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f1528ac:	3c02800b */ 	lui	$v0,0x800b
/*  f1528b0:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f1528b4:	9442c800 */ 	lhu	$v0,-0x3800($v0)
/*  f1528b8:	304f0400 */ 	andi	$t7,$v0,0x400
/*  f1528bc:	03e00008 */ 	jr	$ra
/*  f1528c0:	000f102b */ 	sltu	$v0,$zero,$t7
);

GLOBAL_ASM(
glabel func0f1528c4
/*  f1528c4:	00047080 */ 	sll	$t6,$a0,0x2
/*  f1528c8:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f1528cc:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f1528d0:	3c02800b */ 	lui	$v0,0x800b
/*  f1528d4:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f1528d8:	9442c800 */ 	lhu	$v0,-0x3800($v0)
/*  f1528dc:	304f0800 */ 	andi	$t7,$v0,0x800
/*  f1528e0:	03e00008 */ 	jr	$ra
/*  f1528e4:	000f102b */ 	sltu	$v0,$zero,$t7
);

GLOBAL_ASM(
glabel func0f1528e8
/*  f1528e8:	00047080 */ 	sll	$t6,$a0,0x2
/*  f1528ec:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f1528f0:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f1528f4:	3c02800b */ 	lui	$v0,0x800b
/*  f1528f8:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f1528fc:	9442c800 */ 	lhu	$v0,-0x3800($v0)
/*  f152900:	304f8000 */ 	andi	$t7,$v0,0x8000
/*  f152904:	03e00008 */ 	jr	$ra
/*  f152908:	000f102b */ 	sltu	$v0,$zero,$t7
);

GLOBAL_ASM(
glabel func0f15290c
/*  f15290c:	3c028008 */ 	lui	$v0,0x8008
/*  f152910:	03e00008 */ 	jr	$ra
/*  f152914:	9042fa90 */ 	lbu	$v0,-0x570($v0)
);

GLOBAL_ASM(
glabel func0f152918
/*  f152918:	3c028008 */ 	lui	$v0,0x8008
/*  f15291c:	03e00008 */ 	jr	$ra
/*  f152920:	9042fa94 */ 	lbu	$v0,-0x56c($v0)
);

GLOBAL_ASM(
glabel func0f152924
/*  f152924:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152928:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f15292c:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f152930:	3c02800b */ 	lui	$v0,0x800b
/*  f152934:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f152938:	9442c800 */ 	lhu	$v0,-0x3800($v0)
/*  f15293c:	304f0080 */ 	andi	$t7,$v0,0x80
/*  f152940:	03e00008 */ 	jr	$ra
/*  f152944:	000f102b */ 	sltu	$v0,$zero,$t7
);

GLOBAL_ASM(
glabel func0f152948
/*  f152948:	10a0000b */ 	beqz	$a1,.L0f152978
/*  f15294c:	00044080 */ 	sll	$t0,$a0,0x2
/*  f152950:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152954:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f152958:	3c0f800b */ 	lui	$t7,%hi(var800ac7b8)
/*  f15295c:	25efc7b8 */ 	addiu	$t7,$t7,%lo(var800ac7b8)
/*  f152960:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f152964:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f152968:	94580048 */ 	lhu	$t8,0x48($v0)
/*  f15296c:	37190001 */ 	ori	$t9,$t8,0x1
/*  f152970:	03e00008 */ 	jr	$ra
/*  f152974:	a4590048 */ 	sh	$t9,0x48($v0)
.L0f152978:
/*  f152978:	01044021 */ 	addu	$t0,$t0,$a0
/*  f15297c:	3c09800b */ 	lui	$t1,%hi(var800ac7b8)
/*  f152980:	2529c7b8 */ 	addiu	$t1,$t1,%lo(var800ac7b8)
/*  f152984:	00084140 */ 	sll	$t0,$t0,0x5
/*  f152988:	01091021 */ 	addu	$v0,$t0,$t1
/*  f15298c:	944a0048 */ 	lhu	$t2,0x48($v0)
/*  f152990:	314bfffe */ 	andi	$t3,$t2,0xfffe
/*  f152994:	a44b0048 */ 	sh	$t3,0x48($v0)
/*  f152998:	03e00008 */ 	jr	$ra
/*  f15299c:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f1529a0
/*  f1529a0:	10a0000b */ 	beqz	$a1,.L0f1529d0
/*  f1529a4:	00044080 */ 	sll	$t0,$a0,0x2
/*  f1529a8:	00047080 */ 	sll	$t6,$a0,0x2
/*  f1529ac:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f1529b0:	3c0f800b */ 	lui	$t7,%hi(var800ac7b8)
/*  f1529b4:	25efc7b8 */ 	addiu	$t7,$t7,%lo(var800ac7b8)
/*  f1529b8:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f1529bc:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f1529c0:	94580048 */ 	lhu	$t8,0x48($v0)
/*  f1529c4:	37190008 */ 	ori	$t9,$t8,0x8
/*  f1529c8:	03e00008 */ 	jr	$ra
/*  f1529cc:	a4590048 */ 	sh	$t9,0x48($v0)
.L0f1529d0:
/*  f1529d0:	01044021 */ 	addu	$t0,$t0,$a0
/*  f1529d4:	3c09800b */ 	lui	$t1,%hi(var800ac7b8)
/*  f1529d8:	2529c7b8 */ 	addiu	$t1,$t1,%lo(var800ac7b8)
/*  f1529dc:	00084140 */ 	sll	$t0,$t0,0x5
/*  f1529e0:	01091021 */ 	addu	$v0,$t0,$t1
/*  f1529e4:	944a0048 */ 	lhu	$t2,0x48($v0)
/*  f1529e8:	314bfff7 */ 	andi	$t3,$t2,0xfff7
/*  f1529ec:	a44b0048 */ 	sh	$t3,0x48($v0)
/*  f1529f0:	03e00008 */ 	jr	$ra
/*  f1529f4:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f1529f8
/*  f1529f8:	10a0000b */ 	beqz	$a1,.L0f152a28
/*  f1529fc:	00044080 */ 	sll	$t0,$a0,0x2
/*  f152a00:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152a04:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f152a08:	3c0f800b */ 	lui	$t7,%hi(var800ac7b8)
/*  f152a0c:	25efc7b8 */ 	addiu	$t7,$t7,%lo(var800ac7b8)
/*  f152a10:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f152a14:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f152a18:	94580048 */ 	lhu	$t8,0x48($v0)
/*  f152a1c:	37190002 */ 	ori	$t9,$t8,0x2
/*  f152a20:	03e00008 */ 	jr	$ra
/*  f152a24:	a4590048 */ 	sh	$t9,0x48($v0)
.L0f152a28:
/*  f152a28:	01044021 */ 	addu	$t0,$t0,$a0
/*  f152a2c:	3c09800b */ 	lui	$t1,%hi(var800ac7b8)
/*  f152a30:	2529c7b8 */ 	addiu	$t1,$t1,%lo(var800ac7b8)
/*  f152a34:	00084140 */ 	sll	$t0,$t0,0x5
/*  f152a38:	01091021 */ 	addu	$v0,$t0,$t1
/*  f152a3c:	944a0048 */ 	lhu	$t2,0x48($v0)
/*  f152a40:	314bfffd */ 	andi	$t3,$t2,0xfffd
/*  f152a44:	a44b0048 */ 	sh	$t3,0x48($v0)
/*  f152a48:	03e00008 */ 	jr	$ra
/*  f152a4c:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f152a50
/*  f152a50:	10a0000b */ 	beqz	$a1,.L0f152a80
/*  f152a54:	00044080 */ 	sll	$t0,$a0,0x2
/*  f152a58:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152a5c:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f152a60:	3c0f800b */ 	lui	$t7,%hi(var800ac7b8)
/*  f152a64:	25efc7b8 */ 	addiu	$t7,$t7,%lo(var800ac7b8)
/*  f152a68:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f152a6c:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f152a70:	94580048 */ 	lhu	$t8,0x48($v0)
/*  f152a74:	37190010 */ 	ori	$t9,$t8,0x10
/*  f152a78:	03e00008 */ 	jr	$ra
/*  f152a7c:	a4590048 */ 	sh	$t9,0x48($v0)
.L0f152a80:
/*  f152a80:	01044021 */ 	addu	$t0,$t0,$a0
/*  f152a84:	3c09800b */ 	lui	$t1,%hi(var800ac7b8)
/*  f152a88:	2529c7b8 */ 	addiu	$t1,$t1,%lo(var800ac7b8)
/*  f152a8c:	00084140 */ 	sll	$t0,$t0,0x5
/*  f152a90:	01091021 */ 	addu	$v0,$t0,$t1
/*  f152a94:	944a0048 */ 	lhu	$t2,0x48($v0)
/*  f152a98:	314bffef */ 	andi	$t3,$t2,0xffef
/*  f152a9c:	a44b0048 */ 	sh	$t3,0x48($v0)
/*  f152aa0:	03e00008 */ 	jr	$ra
/*  f152aa4:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f152aa8
/*  f152aa8:	10a0000b */ 	beqz	$a1,.L0f152ad8
/*  f152aac:	00044080 */ 	sll	$t0,$a0,0x2
/*  f152ab0:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152ab4:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f152ab8:	3c0f800b */ 	lui	$t7,%hi(var800ac7b8)
/*  f152abc:	25efc7b8 */ 	addiu	$t7,$t7,%lo(var800ac7b8)
/*  f152ac0:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f152ac4:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f152ac8:	94580048 */ 	lhu	$t8,0x48($v0)
/*  f152acc:	37190004 */ 	ori	$t9,$t8,0x4
/*  f152ad0:	03e00008 */ 	jr	$ra
/*  f152ad4:	a4590048 */ 	sh	$t9,0x48($v0)
.L0f152ad8:
/*  f152ad8:	01044021 */ 	addu	$t0,$t0,$a0
/*  f152adc:	3c09800b */ 	lui	$t1,%hi(var800ac7b8)
/*  f152ae0:	2529c7b8 */ 	addiu	$t1,$t1,%lo(var800ac7b8)
/*  f152ae4:	00084140 */ 	sll	$t0,$t0,0x5
/*  f152ae8:	01091021 */ 	addu	$v0,$t0,$t1
/*  f152aec:	944a0048 */ 	lhu	$t2,0x48($v0)
/*  f152af0:	314bfffb */ 	andi	$t3,$t2,0xfffb
/*  f152af4:	a44b0048 */ 	sh	$t3,0x48($v0)
/*  f152af8:	03e00008 */ 	jr	$ra
/*  f152afc:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f152b00
/*  f152b00:	10a0000b */ 	beqz	$a1,.L0f152b30
/*  f152b04:	00044080 */ 	sll	$t0,$a0,0x2
/*  f152b08:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152b0c:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f152b10:	3c0f800b */ 	lui	$t7,%hi(var800ac7b8)
/*  f152b14:	25efc7b8 */ 	addiu	$t7,$t7,%lo(var800ac7b8)
/*  f152b18:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f152b1c:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f152b20:	94580048 */ 	lhu	$t8,0x48($v0)
/*  f152b24:	37190020 */ 	ori	$t9,$t8,0x20
/*  f152b28:	03e00008 */ 	jr	$ra
/*  f152b2c:	a4590048 */ 	sh	$t9,0x48($v0)
.L0f152b30:
/*  f152b30:	01044021 */ 	addu	$t0,$t0,$a0
/*  f152b34:	3c09800b */ 	lui	$t1,%hi(var800ac7b8)
/*  f152b38:	2529c7b8 */ 	addiu	$t1,$t1,%lo(var800ac7b8)
/*  f152b3c:	00084140 */ 	sll	$t0,$t0,0x5
/*  f152b40:	01091021 */ 	addu	$v0,$t0,$t1
/*  f152b44:	944a0048 */ 	lhu	$t2,0x48($v0)
/*  f152b48:	314bffdf */ 	andi	$t3,$t2,0xffdf
/*  f152b4c:	a44b0048 */ 	sh	$t3,0x48($v0)
/*  f152b50:	03e00008 */ 	jr	$ra
/*  f152b54:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f152b58
/*  f152b58:	10a0000b */ 	beqz	$a1,.L0f152b88
/*  f152b5c:	00044080 */ 	sll	$t0,$a0,0x2
/*  f152b60:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152b64:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f152b68:	3c0f800b */ 	lui	$t7,%hi(var800ac7b8)
/*  f152b6c:	25efc7b8 */ 	addiu	$t7,$t7,%lo(var800ac7b8)
/*  f152b70:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f152b74:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f152b78:	94580048 */ 	lhu	$t8,0x48($v0)
/*  f152b7c:	37190040 */ 	ori	$t9,$t8,0x40
/*  f152b80:	03e00008 */ 	jr	$ra
/*  f152b84:	a4590048 */ 	sh	$t9,0x48($v0)
.L0f152b88:
/*  f152b88:	01044021 */ 	addu	$t0,$t0,$a0
/*  f152b8c:	3c09800b */ 	lui	$t1,%hi(var800ac7b8)
/*  f152b90:	2529c7b8 */ 	addiu	$t1,$t1,%lo(var800ac7b8)
/*  f152b94:	00084140 */ 	sll	$t0,$t0,0x5
/*  f152b98:	01091021 */ 	addu	$v0,$t0,$t1
/*  f152b9c:	944a0048 */ 	lhu	$t2,0x48($v0)
/*  f152ba0:	314bffbf */ 	andi	$t3,$t2,0xffbf
/*  f152ba4:	a44b0048 */ 	sh	$t3,0x48($v0)
/*  f152ba8:	03e00008 */ 	jr	$ra
/*  f152bac:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f152bb0
/*  f152bb0:	10a0000b */ 	beqz	$a1,.L0f152be0
/*  f152bb4:	00044080 */ 	sll	$t0,$a0,0x2
/*  f152bb8:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152bbc:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f152bc0:	3c0f800b */ 	lui	$t7,%hi(var800ac7b8)
/*  f152bc4:	25efc7b8 */ 	addiu	$t7,$t7,%lo(var800ac7b8)
/*  f152bc8:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f152bcc:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f152bd0:	94580048 */ 	lhu	$t8,0x48($v0)
/*  f152bd4:	37190200 */ 	ori	$t9,$t8,0x200
/*  f152bd8:	03e00008 */ 	jr	$ra
/*  f152bdc:	a4590048 */ 	sh	$t9,0x48($v0)
.L0f152be0:
/*  f152be0:	01044021 */ 	addu	$t0,$t0,$a0
/*  f152be4:	3c09800b */ 	lui	$t1,%hi(var800ac7b8)
/*  f152be8:	2529c7b8 */ 	addiu	$t1,$t1,%lo(var800ac7b8)
/*  f152bec:	00084140 */ 	sll	$t0,$t0,0x5
/*  f152bf0:	01091021 */ 	addu	$v0,$t0,$t1
/*  f152bf4:	944a0048 */ 	lhu	$t2,0x48($v0)
/*  f152bf8:	314bfdff */ 	andi	$t3,$t2,0xfdff
/*  f152bfc:	a44b0048 */ 	sh	$t3,0x48($v0)
/*  f152c00:	03e00008 */ 	jr	$ra
/*  f152c04:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f152c08
/*  f152c08:	10a0000b */ 	beqz	$a1,.L0f152c38
/*  f152c0c:	00044080 */ 	sll	$t0,$a0,0x2
/*  f152c10:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152c14:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f152c18:	3c0f800b */ 	lui	$t7,%hi(var800ac7b8)
/*  f152c1c:	25efc7b8 */ 	addiu	$t7,$t7,%lo(var800ac7b8)
/*  f152c20:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f152c24:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f152c28:	94580048 */ 	lhu	$t8,0x48($v0)
/*  f152c2c:	37190400 */ 	ori	$t9,$t8,0x400
/*  f152c30:	03e00008 */ 	jr	$ra
/*  f152c34:	a4590048 */ 	sh	$t9,0x48($v0)
.L0f152c38:
/*  f152c38:	01044021 */ 	addu	$t0,$t0,$a0
/*  f152c3c:	3c09800b */ 	lui	$t1,%hi(var800ac7b8)
/*  f152c40:	2529c7b8 */ 	addiu	$t1,$t1,%lo(var800ac7b8)
/*  f152c44:	00084140 */ 	sll	$t0,$t0,0x5
/*  f152c48:	01091021 */ 	addu	$v0,$t0,$t1
/*  f152c4c:	944a0048 */ 	lhu	$t2,0x48($v0)
/*  f152c50:	314bfbff */ 	andi	$t3,$t2,0xfbff
/*  f152c54:	a44b0048 */ 	sh	$t3,0x48($v0)
/*  f152c58:	03e00008 */ 	jr	$ra
/*  f152c5c:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f152c60
/*  f152c60:	10a0000b */ 	beqz	$a1,.L0f152c90
/*  f152c64:	00044080 */ 	sll	$t0,$a0,0x2
/*  f152c68:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152c6c:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f152c70:	3c0f800b */ 	lui	$t7,%hi(var800ac7b8)
/*  f152c74:	25efc7b8 */ 	addiu	$t7,$t7,%lo(var800ac7b8)
/*  f152c78:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f152c7c:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f152c80:	94580048 */ 	lhu	$t8,0x48($v0)
/*  f152c84:	37190800 */ 	ori	$t9,$t8,0x800
/*  f152c88:	03e00008 */ 	jr	$ra
/*  f152c8c:	a4590048 */ 	sh	$t9,0x48($v0)
.L0f152c90:
/*  f152c90:	01044021 */ 	addu	$t0,$t0,$a0
/*  f152c94:	3c09800b */ 	lui	$t1,%hi(var800ac7b8)
/*  f152c98:	2529c7b8 */ 	addiu	$t1,$t1,%lo(var800ac7b8)
/*  f152c9c:	00084140 */ 	sll	$t0,$t0,0x5
/*  f152ca0:	01091021 */ 	addu	$v0,$t0,$t1
/*  f152ca4:	944a0048 */ 	lhu	$t2,0x48($v0)
/*  f152ca8:	314bf7ff */ 	andi	$t3,$t2,0xf7ff
/*  f152cac:	a44b0048 */ 	sh	$t3,0x48($v0)
/*  f152cb0:	03e00008 */ 	jr	$ra
/*  f152cb4:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f152cb8
/*  f152cb8:	10a0000b */ 	beqz	$a1,.L0f152ce8
/*  f152cbc:	00044080 */ 	sll	$t0,$a0,0x2
/*  f152cc0:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152cc4:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f152cc8:	3c0f800b */ 	lui	$t7,%hi(var800ac7b8)
/*  f152ccc:	25efc7b8 */ 	addiu	$t7,$t7,%lo(var800ac7b8)
/*  f152cd0:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f152cd4:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f152cd8:	94580048 */ 	lhu	$t8,0x48($v0)
/*  f152cdc:	37198000 */ 	ori	$t9,$t8,0x8000
/*  f152ce0:	03e00008 */ 	jr	$ra
/*  f152ce4:	a4590048 */ 	sh	$t9,0x48($v0)
.L0f152ce8:
/*  f152ce8:	01044021 */ 	addu	$t0,$t0,$a0
/*  f152cec:	3c09800b */ 	lui	$t1,%hi(var800ac7b8)
/*  f152cf0:	2529c7b8 */ 	addiu	$t1,$t1,%lo(var800ac7b8)
/*  f152cf4:	00084140 */ 	sll	$t0,$t0,0x5
/*  f152cf8:	01091021 */ 	addu	$v0,$t0,$t1
/*  f152cfc:	944a0048 */ 	lhu	$t2,0x48($v0)
/*  f152d00:	314b7fff */ 	andi	$t3,$t2,0x7fff
/*  f152d04:	a44b0048 */ 	sh	$t3,0x48($v0)
/*  f152d08:	03e00008 */ 	jr	$ra
/*  f152d0c:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f152d10
/*  f152d10:	3c018008 */ 	lui	$at,0x8008
/*  f152d14:	03e00008 */ 	jr	$ra
/*  f152d18:	a024fa90 */ 	sb	$a0,-0x570($at)
);

GLOBAL_ASM(
glabel func0f152d1c
/*  f152d1c:	3c018008 */ 	lui	$at,0x8008
/*  f152d20:	03e00008 */ 	jr	$ra
/*  f152d24:	a024fa94 */ 	sb	$a0,-0x56c($at)
);

GLOBAL_ASM(
glabel func0f152d28
/*  f152d28:	10a0000b */ 	beqz	$a1,.L0f152d58
/*  f152d2c:	00044080 */ 	sll	$t0,$a0,0x2
/*  f152d30:	00047080 */ 	sll	$t6,$a0,0x2
/*  f152d34:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f152d38:	3c0f800b */ 	lui	$t7,%hi(var800ac7b8)
/*  f152d3c:	25efc7b8 */ 	addiu	$t7,$t7,%lo(var800ac7b8)
/*  f152d40:	000e7140 */ 	sll	$t6,$t6,0x5
/*  f152d44:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f152d48:	94580048 */ 	lhu	$t8,0x48($v0)
/*  f152d4c:	37190080 */ 	ori	$t9,$t8,0x80
/*  f152d50:	03e00008 */ 	jr	$ra
/*  f152d54:	a4590048 */ 	sh	$t9,0x48($v0)
.L0f152d58:
/*  f152d58:	01044021 */ 	addu	$t0,$t0,$a0
/*  f152d5c:	3c09800b */ 	lui	$t1,%hi(var800ac7b8)
/*  f152d60:	2529c7b8 */ 	addiu	$t1,$t1,%lo(var800ac7b8)
/*  f152d64:	00084140 */ 	sll	$t0,$t0,0x5
/*  f152d68:	01091021 */ 	addu	$v0,$t0,$t1
/*  f152d6c:	944a0048 */ 	lhu	$t2,0x48($v0)
/*  f152d70:	314bff7f */ 	andi	$t3,$t2,0xff7f
/*  f152d74:	a44b0048 */ 	sh	$t3,0x48($v0)
/*  f152d78:	03e00008 */ 	jr	$ra
/*  f152d7c:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f152d80
/*  f152d80:	3c0e8009 */ 	lui	$t6,0x8009
/*  f152d84:	91ce0af0 */ 	lbu	$t6,0xaf0($t6)
/*  f152d88:	24010001 */ 	addiu	$at,$zero,0x1
/*  f152d8c:	3c02800a */ 	lui	$v0,0x800a
/*  f152d90:	15c10003 */ 	bne	$t6,$at,.L0f152da0
/*  f152d94:	00000000 */ 	sll	$zero,$zero,0x0
/*  f152d98:	03e00008 */ 	jr	$ra
/*  f152d9c:	00001025 */ 	or	$v0,$zero,$zero
.L0f152da0:
/*  f152da0:	8c4219c4 */ 	lw	$v0,0x19c4($v0)
/*  f152da4:	2401000d */ 	addiu	$at,$zero,0xd
/*  f152da8:	3c048007 */ 	lui	$a0,%hi(var80071448)
/*  f152dac:	14410012 */ 	bne	$v0,$at,.L0f152df8
/*  f152db0:	24841448 */ 	addiu	$a0,$a0,%lo(var80071448)
/*  f152db4:	0000c0c0 */ 	sll	$t8,$zero,0x3
/*  f152db8:	0300c023 */ 	subu	$t8,$t8,$zero
/*  f152dbc:	0018c140 */ 	sll	$t8,$t8,0x5
/*  f152dc0:	0300c023 */ 	subu	$t8,$t8,$zero
/*  f152dc4:	0018c100 */ 	sll	$t8,$t8,0x4
/*  f152dc8:	3c19800a */ 	lui	$t9,0x800a
/*  f152dcc:	ac800000 */ 	sw	$zero,0x0($a0)
/*  f152dd0:	0338c821 */ 	addu	$t9,$t9,$t8
/*  f152dd4:	8f39e4f8 */ 	lw	$t9,-0x1b08($t9)
/*  f152dd8:	3c08800a */ 	lui	$t0,0x800a
/*  f152ddc:	13200006 */ 	beqz	$t9,.L0f152df8
/*  f152de0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f152de4:	8d08dfc0 */ 	lw	$t0,-0x2040($t0)
/*  f152de8:	11000003 */ 	beqz	$t0,.L0f152df8
/*  f152dec:	00000000 */ 	sll	$zero,$zero,0x0
/*  f152df0:	03e00008 */ 	jr	$ra
/*  f152df4:	00001025 */ 	or	$v0,$zero,$zero
.L0f152df8:
/*  f152df8:	3c048007 */ 	lui	$a0,%hi(var80071448)
/*  f152dfc:	24841448 */ 	addiu	$a0,$a0,%lo(var80071448)
/*  f152e00:	8c890000 */ 	lw	$t1,0x0($a0)
/*  f152e04:	3c03800a */ 	lui	$v1,0x800a
/*  f152e08:	3c06800a */ 	lui	$a2,%hi(g_Vars)
/*  f152e0c:	000950c0 */ 	sll	$t2,$t1,0x3
/*  f152e10:	01495023 */ 	subu	$t2,$t2,$t1
/*  f152e14:	000a5080 */ 	sll	$t2,$t2,0x2
/*  f152e18:	01495021 */ 	addu	$t2,$t2,$t1
/*  f152e1c:	000a50c0 */ 	sll	$t2,$t2,0x3
/*  f152e20:	01495023 */ 	subu	$t2,$t2,$t1
/*  f152e24:	000a5100 */ 	sll	$t2,$t2,0x4
/*  f152e28:	006a1821 */ 	addu	$v1,$v1,$t2
/*  f152e2c:	8c63e4f8 */ 	lw	$v1,-0x1b08($v1)
/*  f152e30:	24c69fc0 */ 	addiu	$a2,$a2,%lo(g_Vars)
/*  f152e34:	5060000f */ 	beqzl	$v1,.L0f152e74
/*  f152e38:	8cce006c */ 	lw	$t6,0x6c($a2)
/*  f152e3c:	8c640000 */ 	lw	$a0,0x0($v1)
/*  f152e40:	3c0b8007 */ 	lui	$t3,%hi(menudialog_control4)
/*  f152e44:	256b2174 */ 	addiu	$t3,$t3,%lo(menudialog_control4)
/*  f152e48:	11640007 */ 	beq	$t3,$a0,.L0f152e68
/*  f152e4c:	3c0c8007 */ 	lui	$t4,%hi(menudialog_control3)
/*  f152e50:	258c2120 */ 	addiu	$t4,$t4,%lo(menudialog_control3)
/*  f152e54:	11840004 */ 	beq	$t4,$a0,.L0f152e68
/*  f152e58:	3c0d8007 */ 	lui	$t5,%hi(menudialog_control2)
/*  f152e5c:	25ad20cc */ 	addiu	$t5,$t5,%lo(menudialog_control2)
/*  f152e60:	55a40004 */ 	bnel	$t5,$a0,.L0f152e74
/*  f152e64:	8cce006c */ 	lw	$t6,0x6c($a2)
.L0f152e68:
/*  f152e68:	03e00008 */ 	jr	$ra
/*  f152e6c:	00001025 */ 	or	$v0,$zero,$zero
/*  f152e70:	8cce006c */ 	lw	$t6,0x6c($a2)
.L0f152e74:
/*  f152e74:	00001825 */ 	or	$v1,$zero,$zero
/*  f152e78:	00002025 */ 	or	$a0,$zero,$zero
/*  f152e7c:	11c00003 */ 	beqz	$t6,.L0f152e8c
/*  f152e80:	00002825 */ 	or	$a1,$zero,$zero
/*  f152e84:	10000001 */ 	beqz	$zero,.L0f152e8c
/*  f152e88:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f152e8c:
/*  f152e8c:	8ccf0068 */ 	lw	$t7,0x68($a2)
/*  f152e90:	11e00003 */ 	beqz	$t7,.L0f152ea0
/*  f152e94:	00000000 */ 	sll	$zero,$zero,0x0
/*  f152e98:	10000001 */ 	beqz	$zero,.L0f152ea0
/*  f152e9c:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f152ea0:
/*  f152ea0:	8cd80064 */ 	lw	$t8,0x64($a2)
/*  f152ea4:	13000003 */ 	beqz	$t8,.L0f152eb4
/*  f152ea8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f152eac:	10000001 */ 	beqz	$zero,.L0f152eb4
/*  f152eb0:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f152eb4:
/*  f152eb4:	8cd90070 */ 	lw	$t9,0x70($a2)
/*  f152eb8:	00003025 */ 	or	$a2,$zero,$zero
/*  f152ebc:	13200003 */ 	beqz	$t9,.L0f152ecc
/*  f152ec0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f152ec4:	10000001 */ 	beqz	$zero,.L0f152ecc
/*  f152ec8:	24060001 */ 	addiu	$a2,$zero,0x1
.L0f152ecc:
/*  f152ecc:	00c54021 */ 	addu	$t0,$a2,$a1
/*  f152ed0:	01044821 */ 	addu	$t1,$t0,$a0
/*  f152ed4:	01235021 */ 	addu	$t2,$t1,$v1
/*  f152ed8:	29410002 */ 	slti	$at,$t2,0x2
/*  f152edc:	10200003 */ 	beqz	$at,.L0f152eec
/*  f152ee0:	24010003 */ 	addiu	$at,$zero,0x3
/*  f152ee4:	14410003 */ 	bne	$v0,$at,.L0f152ef4
/*  f152ee8:	00000000 */ 	sll	$zero,$zero,0x0
.L0f152eec:
/*  f152eec:	03e00008 */ 	jr	$ra
/*  f152ef0:	00001025 */ 	or	$v0,$zero,$zero
.L0f152ef4:
/*  f152ef4:	3c028008 */ 	lui	$v0,0x8008
/*  f152ef8:	8c42fab0 */ 	lw	$v0,-0x550($v0)
/*  f152efc:	03e00008 */ 	jr	$ra
/*  f152f00:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f152f04
/*  f152f04:	3c028008 */ 	lui	$v0,0x8008
/*  f152f08:	03e00008 */ 	jr	$ra
/*  f152f0c:	8c42fab0 */ 	lw	$v0,-0x550($v0)
);

GLOBAL_ASM(
glabel func0f152f10
/*  f152f10:	3c018008 */ 	lui	$at,0x8008
/*  f152f14:	03e00008 */ 	jr	$ra
/*  f152f18:	ac24fab0 */ 	sw	$a0,-0x550($at)
);

GLOBAL_ASM(
glabel func0f152f1c
/*  f152f1c:	3c028008 */ 	lui	$v0,0x8008
/*  f152f20:	03e00008 */ 	jr	$ra
/*  f152f24:	8c42fab4 */ 	lw	$v0,-0x54c($v0)
);

GLOBAL_ASM(
glabel func0f152f28
/*  f152f28:	3c018008 */ 	lui	$at,0x8008
/*  f152f2c:	03e00008 */ 	jr	$ra
/*  f152f30:	ac24fab4 */ 	sw	$a0,-0x54c($at)
);

GLOBAL_ASM(
glabel func0f152f34
/*  f152f34:	3c028008 */ 	lui	$v0,0x8008
/*  f152f38:	03e00008 */ 	jr	$ra
/*  f152f3c:	9042fab8 */ 	lbu	$v0,-0x548($v0)
);

GLOBAL_ASM(
glabel func0f152f40
/*  f152f40:	3c018008 */ 	lui	$at,0x8008
/*  f152f44:	afa40000 */ 	sw	$a0,0x0($sp)
/*  f152f48:	03e00008 */ 	jr	$ra
/*  f152f4c:	a024fab8 */ 	sb	$a0,-0x548($at)
);

GLOBAL_ASM(
glabel func0f152f50
/*  f152f50:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f152f54:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f152f58:	0fc5b3e8 */ 	jal	func0f16cfa0
/*  f152f5c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f152f60:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f152f64:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f152f68:	03e00008 */ 	jr	$ra
/*  f152f6c:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f152f70
/*  f152f70:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f152f74:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f152f78:	afa40018 */ 	sw	$a0,0x18($sp)
/*  f152f7c:	308effff */ 	andi	$t6,$a0,0xffff
/*  f152f80:	0fc5b3fa */ 	jal	func0f16cfe8
/*  f152f84:	01c02025 */ 	or	$a0,$t6,$zero
/*  f152f88:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f152f8c:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f152f90:	03e00008 */ 	jr	$ra
/*  f152f94:	00000000 */ 	sll	$zero,$zero,0x0
/*  f152f98:	00000000 */ 	sll	$zero,$zero,0x0
/*  f152f9c:	00000000 */ 	sll	$zero,$zero,0x0
);