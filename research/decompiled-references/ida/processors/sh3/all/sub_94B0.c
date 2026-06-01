bool __fastcall sub_94B0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // edx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v15; // rcx
  _DWORD *v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rax
  _DWORD *i; // rax

  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(unsigned __int16 *)(a2 + 24);
  v9 = *(_DWORD *)(v7 + 104);
  if ( (int)v8 < v9 )
    return 0;
  if ( *(_DWORD *)(v7 + 108) <= (int)v8 )
    return 0;
  v12 = (unsigned int)(v8 - v9);
  v13 = *(unsigned int *)(*(_QWORD *)(v7 + 112) + 16LL * (int)v12 + 8);
  if ( !(_DWORD)v13 )
    return 0;
  if ( a4 == -1 )
  {
    if ( (v13 & 2) != 0 )
      return (unsigned int)(a3 - 8) > 7;
  }
  else if ( (v13 & 2) != 0 )
  {
    if ( !(unsigned __int8)has_insn_feature(v8, 0x8000, v13, v12, a5, a6)
      || *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26) != a4 )
    {
      return (unsigned int)(a3 - 8) > 7;
    }
    return 0;
  }
  v15 = a2 + 41;
  v16 = &unk_11DA0;
  v17 = a2 + 161;
  v18 = v15;
  while ( (*v16 & (unsigned int)v13) == 0
       || *(_BYTE *)v18 != 3
       || (unsigned __int8)(*(_BYTE *)(v18 + 31) - 1) > 1u
       || *(unsigned __int16 *)(v18 + 5) != a3 )
  {
    v18 += 40;
    ++v16;
    if ( v18 == v17 )
    {
      for ( i = &unk_11DC0; (*i & (unsigned int)v13) == 0 || *(_BYTE *)v15 != 1 || a3 != *(unsigned __int16 *)(v15 + 5); ++i )
      {
        v15 += 40;
        if ( v15 == v17 )
          return 0;
      }
      return 1;
    }
  }
  return 1;
}

