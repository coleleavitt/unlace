__int64 __fastcall sub_304A0(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  char v7; // r13
  __int64 v8; // rax
  unsigned int v9; // r12d
  __int64 v10; // rbp
  __int64 v11; // rsi
  char v13; // al
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbp
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // esi

  if ( (~*(_BYTE *)(a3 + 32) & 0xF) == 0 )
  {
    v17 = *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26);
    v18 = a2[2];
    v19 = *a2;
    v20 = a2[1];
    if ( v18 < v20 + 1 )
    {
      v25 = qvector_reserve((__int64)a2, v19, v20 + 1, 8);
      *a2 = v25;
      v19 = v25;
      v20 = a2[1];
    }
    *(_QWORD *)(v19 + 8 * v20) = v17;
    ++a2[1];
    return 0;
  }
  v7 = sub_2CF00(a1, a3);
  if ( v7 && a4 )
    goto LABEL_4;
  v13 = *(_BYTE *)(a3 + 41);
  if ( v13 == 7 )
  {
    v26 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    v27 = *(_QWORD *)(a3 + 56) + 16LL * *(_QWORD *)a3;
    if ( v26 != v27 )
    {
      v28 = v27 & v26;
      if ( v27 != -1 )
        v27 = v28;
    }
    v29 = a2[1];
    v30 = *a2;
    if ( a2[2] < (unsigned __int64)(v29 + 1) )
    {
      v32 = qvector_reserve((__int64)a2, v30, v29 + 1, 8);
      *a2 = v32;
      v30 = v32;
      v29 = a2[1];
    }
    *(_QWORD *)(v30 + 8 * v29) = v27;
    v8 = a2[1] + 1;
    a2[1] = v8;
    if ( v7 )
    {
      v9 = 1;
      goto LABEL_5;
    }
    v9 = 0;
    if ( (*(_BYTE *)(a3 + 32) & 0xF) != 0xE )
      goto LABEL_5;
    return 0;
  }
  if ( *(_BYTE *)(a3 + 81) == 7 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    v22 = *(_QWORD *)(a3 + 96) + 16LL * *(_QWORD *)a3;
    if ( v22 == v21 )
    {
LABEL_26:
      v23 = a2[1];
      v24 = *a2;
      if ( a2[2] < (unsigned __int64)(v23 + 1) )
      {
        v31 = qvector_reserve((__int64)a2, v24, v23 + 1, 8);
        *a2 = v31;
        v24 = v31;
        v23 = a2[1];
      }
      *(_QWORD *)(v24 + 8 * v23) = v21;
      v9 = 0;
      v8 = a2[1] + 1;
      a2[1] = v8;
      goto LABEL_5;
    }
LABEL_24:
    v21 &= v22;
    if ( v22 == -1 )
      v21 = -1;
    goto LABEL_26;
  }
  if ( *(_BYTE *)(a3 + 121) == 7 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    v22 = *(_QWORD *)(a3 + 136) + 16LL * *(_QWORD *)a3;
    if ( v22 == v21 )
      goto LABEL_26;
    goto LABEL_24;
  }
  v14 = *(unsigned __int16 *)(a3 + 24);
  if ( (unsigned __int16)v14 > 0x52u )
  {
    if ( (unsigned __int16)v14 <= 0x128u )
    {
      v9 = -1;
      if ( (unsigned __int16)v14 > 0x124u || (_WORD)v14 == 166 || (unsigned __int16)(v14 - 274) <= 1u )
        return v9;
      goto LABEL_44;
    }
    if ( (unsigned __int16)(v14 - 470) > 1u )
      goto LABEL_44;
    return (unsigned int)-1;
  }
  if ( (unsigned __int16)v14 > 0x20u )
  {
    v15 = 1LL << ((unsigned __int8)v14 - 33);
    if ( (v15 & 0x2000000007108LL) == 0 )
    {
      if ( (_WORD)v14 == 42 )
      {
        v9 = -1;
        if ( *(char *)(a3 + 65) < 0 )
          return v9;
        goto LABEL_4;
      }
      if ( (v15 & 1) != 0 )
      {
        v9 = -1;
        if ( *(char *)(a3 + 105) < 0 )
          return v9;
        goto LABEL_4;
      }
      goto LABEL_44;
    }
    return (unsigned int)-1;
  }
  if ( (_WORD)v14 == 1 || (unsigned __int16)(v14 - 3) <= 1u )
    return (unsigned int)-1;
LABEL_44:
  if ( v13 == 1 && *(_WORD *)(a3 + 46) == 15 )
  {
    v33 = *(_QWORD *)(a1 + 16);
    v34 = *(_DWORD *)(v33 + 104);
    if ( v14 >= v34
      && v14 < *(_DWORD *)(v33 + 108)
      && (*(_BYTE *)(*(_QWORD *)(v33 + 112) + 16LL * (v14 - v34) + 8) & 4) != 0 )
    {
      return (unsigned int)-1;
    }
  }
LABEL_4:
  v8 = a2[1];
  v9 = 0;
LABEL_5:
  v10 = *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26);
  v11 = *a2;
  if ( a2[2] < (unsigned __int64)(v8 + 1) )
  {
    v16 = qvector_reserve((__int64)a2, v11, v8 + 1, 8);
    *a2 = v16;
    v11 = v16;
    v8 = a2[1];
  }
  *(_QWORD *)(v11 + 8 * v8) = v10;
  ++a2[1];
  return v9;
}
