char **__fastcall sub_1FC40(__int64 a1)
{
  __int16 v2; // ax
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // dl
  __int16 v9; // ax
  bool v10; // zf
  char **result; // rax

  v2 = netnode_altval(*(_QWORD *)(a1 + 152), -1, 65);
  v3 = *(_QWORD *)(a1 + 152);
  *(_WORD *)(a1 + 468) = v2;
  if ( !(unsigned int)netnode_altval(v3, -2, 65) )
    *(_WORD *)(a1 + 468) |= 0x40u;
  v8 = getinf_flag(11, 4, v4, v5, v6, v7);
  v9 = *(_WORD *)(a1 + 468);
  if ( v8 )
  {
    v9 |= 2u;
    *(_WORD *)(a1 + 468) = v9;
  }
  v10 = (v9 & 1) == 0;
  result = (char **)&off_34620;
  if ( v10 )
    result = off_342E0;
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) = result;
  return result;
}
