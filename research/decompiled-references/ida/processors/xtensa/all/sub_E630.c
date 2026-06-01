__int64 __fastcall sub_E630(__int64 a1)
{
  __int16 v1; // ax
  int v3; // eax
  __int64 v4; // rbp
  char v5; // al
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rcx
  char v7; // al
  unsigned __int8 v8; // bp
  unsigned __int8 v9; // al
  bool v10; // r13
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  unsigned __int8 v12; // al
  bool v13; // dl
  __int64 v14; // rbp
  char v15; // al
  __int64 (__fastcall *v16)(__int64, __int64, __int64); // rcx
  unsigned __int8 v17; // bp
  unsigned __int8 v18; // al
  bool v19; // r12
  __int64 (__fastcall *v20)(__int64, __int64); // rax
  unsigned __int8 v21; // al
  bool v22; // dl
  __int64 v23; // rax

  v1 = *(_WORD *)(a1 + 40);
  switch ( v1 )
  {
    case 2:
      v3 = 1;
      break;
    case 5:
      v3 = 2;
      break;
    case 6:
      v3 = 4;
      break;
    case 7:
      v3 = 8;
      break;
    default:
      return 0;
  }
  v4 = *(_QWORD *)(a1 + 864);
  *(_DWORD *)(a1 + 928) = v3;
  v5 = *(_BYTE *)(v4 + 1);
  if ( !v5 )
  {
LABEL_14:
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v6 != sub_9290 )
  {
    v7 = v6(a1, a1 + 56, v4);
LABEL_18:
    if ( !v7 )
      return 0;
    goto LABEL_19;
  }
  if ( v5 != *(_BYTE *)(a1 + 57) )
    return 0;
  if ( v5 != 99 )
  {
    if ( v5 == 100 )
    {
      v7 = *(_QWORD *)(a1 + 64) == *(_QWORD *)(v4 + 8);
    }
    else
    {
      if ( v5 != 1 )
        return 0;
      v7 = *(_WORD *)(a1 + 62) == *(_WORD *)(v4 + 6);
    }
    goto LABEL_18;
  }
LABEL_19:
  v8 = *(_BYTE *)(v4 + 5);
  v9 = *(_BYTE *)(a1 + 61);
  v10 = v8 <= 0xF9u;
  if ( v9 > 0xF9u )
  {
    if ( v8 > 0xF9u && v9 >= v8 )
      goto LABEL_28;
  }
  else if ( v8 > 0xF9u || v9 >= v8 || *(_BYTE *)(a1 + 8) && v9 == 2 )
  {
    goto LABEL_28;
  }
  v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v11 == sub_92F0 )
    return 0;
  v12 = v11(a1, a1 + 56);
  v13 = v10 || v12 < v8;
  if ( v12 <= 0xF9u )
    v13 = v10 && v12 < v8;
  if ( v13 )
    return 0;
LABEL_28:
  v14 = *(_QWORD *)(a1 + 864);
  v15 = *(_BYTE *)(v14 + 1);
  if ( !v15 )
    goto LABEL_14;
  v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v16 == sub_9290 )
  {
    if ( v15 != *(_BYTE *)(a1 + 97) )
      return 0;
    if ( v15 != 99 )
    {
      if ( v15 == 100 )
      {
        if ( *(_QWORD *)(a1 + 104) != *(_QWORD *)(v14 + 8) )
          return 0;
      }
      else if ( v15 != 1 || *(_WORD *)(a1 + 102) != *(_WORD *)(v14 + 6) )
      {
        return 0;
      }
    }
  }
  else if ( !(unsigned __int8)v16(a1, a1 + 96, *(_QWORD *)(a1 + 864)) )
  {
    return 0;
  }
  v17 = *(_BYTE *)(v14 + 5);
  v18 = *(_BYTE *)(a1 + 101);
  v19 = v17 <= 0xF9u;
  if ( v18 > 0xF9u )
  {
    if ( v17 > 0xF9u && v18 >= v17 )
      goto LABEL_44;
  }
  else if ( v17 > 0xF9u || v18 >= v17 || v18 == 2 && *(_BYTE *)(a1 + 8) )
  {
    goto LABEL_44;
  }
  v20 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v20 == sub_92F0 )
    return 0;
  v21 = v20(a1, a1 + 96);
  v22 = v19 || v21 < v17;
  if ( v21 <= 0xF9u )
    v22 = v19 && v21 < v17;
  if ( v22 )
    return 0;
LABEL_44:
  v23 = *(_QWORD *)(a1 + 864);
  *(__m128i *)(v23 + 40) = _mm_loadu_si128((const __m128i *)(a1 + 136));
  *(__m128i *)(v23 + 56) = _mm_loadu_si128((const __m128i *)(a1 + 152));
  *(_DWORD *)(v23 + 72) = *(_DWORD *)(a1 + 168);
  return 1;
}

