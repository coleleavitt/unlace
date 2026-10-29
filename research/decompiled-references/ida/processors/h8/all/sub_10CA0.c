__int64 __fastcall sub_10CA0(__int64 a1, _QWORD *a2, _BYTE *a3, int a4)
{
  int v6; // eax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int8 v16; // al
  bool v17; // r14
  unsigned __int8 v18; // al
  bool v19; // cl
  bool v20; // r14
  __int16 v21; // ax
  unsigned __int8 v22; // [rsp+Fh] [rbp-39h]

  v6 = *(unsigned __int16 *)(a1 + 40);
  if ( (*(_WORD *)(a1 + 40) & 0xFFFD) == 1 )
  {
    if ( *(_BYTE *)(a1 + 57) != 5 )
      return 0;
    v9 = *(_QWORD *)(a1 + 864);
    if ( (_WORD)v6 == 3 )
    {
      v12 = *(unsigned __int8 *)(v9 + 5);
      if ( *(unsigned __int8 *)(a1 + 101) + 1 != (_DWORD)v12 )
        return 0;
      if ( *(_BYTE *)(a1 + 97) != 1 )
        return 0;
      if ( *(_BYTE *)(v9 + 1) != 1 )
        return 0;
      v13 = *(unsigned __int16 *)(a1 + 102);
      if ( (unsigned int)((v13 >> 3) - 1) > 1
        || (unsigned __int8)v12 > 2u
        || *(unsigned __int16 *)(v9 + 6) != *((_DWORD *)qword_18240 + 3 * (v13 & 7) + v12) )
      {
        return 0;
      }
      goto LABEL_25;
    }
    v10 = a1 + 96;
  }
  else
  {
    v7 = (unsigned int)(v6 - 41);
    if ( (unsigned __int16)v7 > 0x27u )
      return 0;
    v8 = 0x8000000041LL;
    if ( !_bittest64(&v8, v7) || *(_BYTE *)(a1 + 57) != 5 )
      return 0;
    v9 = *(_QWORD *)(a1 + 864);
    v10 = a1 + 96;
  }
  if ( !*(_BYTE *)(v9 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, v10, v9) )
    return 0;
  v15 = *(unsigned __int8 *)(v9 + 5);
  v16 = *(_BYTE *)(a1 + 101);
  v17 = (unsigned __int8)v15 <= 0xF9u;
  if ( v16 <= 0xF9u )
  {
    if ( v16 >= (unsigned __int8)v15 || (unsigned __int8)v15 > 0xF9u || *(_BYTE *)(a1 + 8) && v16 == 2 )
      goto LABEL_25;
  }
  else if ( v16 >= (unsigned __int8)v15 && (unsigned __int8)v15 > 0xF9u )
  {
    goto LABEL_25;
  }
  v22 = v15;
  LOBYTE(v14) = v16 < (unsigned __int8)v15;
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, v10, v15, v14);
  v19 = v18 < v22 && v17;
  v20 = v18 < v22 || v17;
  if ( v18 <= 0xF9u )
    v20 = v19;
  if ( v20 )
    return 0;
LABEL_25:
  *a2 = *(_QWORD *)(a1 + 64);
  *a3 = *(_BYTE *)(a1 + 101);
  v21 = *(_WORD *)(a1 + 40);
  if ( v21 == 3 )
  {
    *a2 <<= 8 * (unsigned __int8)get_dtype_size();
    *(_BYTE *)(a1 + a4 + 512) = 0;
  }
  else if ( v21 == 80 || v21 == 41 )
  {
    *a2 = -*a2;
  }
  return 1;
}

