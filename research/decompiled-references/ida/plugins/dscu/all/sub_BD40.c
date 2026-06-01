__int64 __fastcall sub_BD40(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 *v2; // rax
  __int64 *v3; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  _QWORD v10[3]; // [rsp+0h] [rbp-18h] BYREF

  v10[1] = __readfsqword(0x28u);
  v1 = *(_QWORD **)(a1 + 112);
  v2 = (__int64 *)v1[66];
  v3 = &v2[4 * v1[67]];
  if ( v2 == v3 )
    return 0;
  while ( (~(unsigned __int8)*((_DWORD *)v2 + 6) & 5) != 0 )
  {
    v2 += 4;
    if ( v3 == v2 )
      return 0;
  }
  if ( !v2 )
    return 0;
  v5 = v1[95];
  if ( v5 == -1 )
    return 0;
  v6 = *v2;
  if ( v5 < v6 )
    return 0;
  v7 = *(_QWORD *)(a1 + 104);
  v10[0] = v6;
  netnode_supset(v7, 3, v10, 8, 65);
  return sub_AC60(a1, 3, v8);
}

