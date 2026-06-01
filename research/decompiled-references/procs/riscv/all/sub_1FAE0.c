unsigned __int64 __fastcall sub_1FAE0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  char *v4; // rbp
  __int16 v5; // ax
  __int16 v6; // ax
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  char *haystack; // [rsp+10h] [rbp-38h] BYREF
  __int128 v9; // [rsp+18h] [rbp-30h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( (unsigned int)getinf(5) != 18 )
    return v10 - __readfsqword(0x28u);
  netnode_check(&v7, "$ attributes", 0, 0);
  if ( v7 == -1 )
    return v10 - __readfsqword(0x28u);
  v2 = netnode_hashval_long(v7, "riscv", 72);
  if ( !v2 )
    return v10 - __readfsqword(0x28u);
  v9 = 0;
  haystack = nullptr;
  v3 = netnode_qsupstr(v2, &haystack, 5, 83);
  v4 = haystack;
  if ( v3 <= 0 )
  {
LABEL_11:
    if ( !v4 )
      return v10 - __readfsqword(0x28u);
    goto LABEL_8;
  }
  if ( !(_QWORD)v9 )
    goto LABEL_7;
  if ( strstr(haystack, "xandes") )
  {
    v5 = *(_WORD *)(a1 + 468);
    LOBYTE(v5) = v5 & 0x3F | 0x80;
    *(_WORD *)(a1 + 468) = v5;
    goto LABEL_11;
  }
  if ( strstr(v4, "xthead") )
  {
    v6 = *(_WORD *)(a1 + 468);
    LOBYTE(v6) = v6 & 0x3F;
    *(_WORD *)(a1 + 468) = v6 | 0x40;
    goto LABEL_11;
  }
LABEL_7:
  if ( v4 )
  {
LABEL_8:
    *(_QWORD *)&v9 = 0;
    qfree(v4);
  }
  return v10 - __readfsqword(0x28u);
}
