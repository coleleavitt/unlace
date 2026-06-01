char __fastcall sub_BA90(__int64 a1, int a2, unsigned int a3)
{
  __int64 v5; // rsi
  unsigned int v6; // r13d
  unsigned __int16 v7; // bx
  char result; // al
  unsigned int v9; // r13d
  unsigned __int8 v10; // cl
  unsigned __int16 v11; // dx
  __int64 ph; // rax
  int v13; // edx
  int v14; // r15d
  int v15; // ecx
  _DWORD *v16; // r12
  __int64 v17; // rbp
  int v18; // ecx
  __int16 v19; // r14
  unsigned int dtype_size; // eax
  unsigned int v21; // eax
  int v22; // [rsp+Ch] [rbp-3Ch]

  v5 = a3;
  v6 = sub_A2A0(a2, a3);
  v7 = v6;
  result = 0;
  v9 = HIWORD(v6);
  v10 = v7 | v9;
  if ( v7 | (unsigned __int16)v9 )
  {
    v11 = *(_WORD *)(a1 + 24);
    if ( v11 == 85 )
      return v10 != 0;
    if ( v11 <= 0x55u )
    {
      result = 1;
      if ( v11 == 24 )
        return result;
      if ( v11 == 30 )
        return ((unsigned __int8)v7 | v9 & 0x3FF) != 0;
    }
    else if ( v11 > 0x98u )
    {
      if ( v11 == 154 )
        return (v9 & 0x800 | v10) != 0;
    }
    else if ( v11 > 0x96u || v11 == 87 )
    {
      return v7 > 0xFFu || (unsigned __int16)v9 > 0x3FFu;
    }
    ph = get_ph();
    v13 = *(unsigned __int16 *)(a1 + 24);
    v14 = 0;
    v15 = *(_DWORD *)(ph + 104);
    if ( v13 >= v15 && v13 < *(_DWORD *)(ph + 108) )
      v14 = *(_DWORD *)(*(_QWORD *)(ph + 112) + 16LL * (v13 - v15) + 8);
    v16 = &dword_15FC0;
    v17 = a1 + 41;
    v18 = 0;
    v19 = 0;
    do
    {
      if ( (*v16 & v14) != 0 && *(_BYTE *)v17 == 1 )
      {
        v22 = v18;
        dtype_size = get_dtype_size(*(unsigned __int8 *)(v17 + 4), v5, &unk_15FD4);
        v5 = dtype_size;
        v21 = sub_A2A0(*(unsigned __int16 *)(v17 + 5), dtype_size);
        v19 |= v21;
        v18 = HIWORD(v21) | v22;
      }
      ++v16;
      v17 += 40;
    }
    while ( v16 != (_DWORD *)&unk_15FD4 );
    return (v9 & (unsigned __int16)v18 | (unsigned __int16)(v7 & v19)) != 0;
  }
  return result;
}

