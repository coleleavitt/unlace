__int64 __fastcall sub_BBD0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  __int64 v4; // rdx
  unsigned __int8 v5; // r13
  unsigned __int8 v6; // al
  bool v7; // bp
  unsigned __int8 v8; // al
  bool v9; // cl
  bool v10; // bp
  bool v11; // cc
  bool v12; // al
  __int64 v13; // rbp
  __int64 v14; // rdx
  unsigned __int8 v15; // r13
  unsigned __int8 v16; // al
  bool v17; // bp
  unsigned __int8 v18; // al
  bool v19; // cl
  bool v20; // bp
  __int64 v21; // rax

  v1 = *(int *)(a1 + 908);
  if ( (int)v1 <= 0 )
    return 0;
  if ( *(_WORD *)(a1 + 40) == 9 )
  {
    if ( *(_BYTE *)(a1 + 57) != 5 || v1 != *(_QWORD *)(a1 + 64) )
      return 0;
    v3 = *(_QWORD *)(a1 + 864);
    if ( !*(_BYTE *)(v3 + 1) )
    {
LABEL_31:
      *(_BYTE *)(a1 + 792) = 1;
      return 0;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 96, v3) )
    {
      v5 = *(_BYTE *)(v3 + 5);
      v6 = *(_BYTE *)(a1 + 101);
      v7 = v5 <= 0xF9u;
      if ( v6 > 0xF9u )
      {
        if ( v6 >= v5 && v5 > 0xF9u )
          goto LABEL_40;
      }
      else if ( v6 >= v5 || v5 > 0xF9u || *(_BYTE *)(a1 + 8) && v6 == 2 )
      {
        goto LABEL_40;
      }
      LOBYTE(v4) = v6 < v5;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 96, v4);
      v9 = v8 < v5 && v7;
      v10 = v8 < v5 || v7;
      v11 = v8 <= 0xF9u;
      v12 = v9;
      if ( !v11 )
        v12 = v10;
      if ( !v12 )
        goto LABEL_40;
    }
    LODWORD(v1) = *(_DWORD *)(a1 + 908);
  }
  if ( (_DWORD)v1 != 1 || *(_WORD *)(a1 + 40) != 2 )
    return 0;
  v13 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v13 + 1) )
    goto LABEL_31;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 96, v13) )
  {
    v15 = *(_BYTE *)(v13 + 5);
    v16 = *(_BYTE *)(a1 + 101);
    v17 = v15 <= 0xF9u;
    if ( v16 <= 0xF9u )
    {
      if ( v15 > 0xF9u || v16 >= v15 || v16 == 2 && *(_BYTE *)(a1 + 8) )
        goto LABEL_28;
    }
    else if ( v15 > 0xF9u && v16 >= v15 )
    {
      goto LABEL_28;
    }
    LOBYTE(v14) = v16 < v15;
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 96, v14);
    v19 = v18 < v15 && v17;
    v20 = v18 < v15 || v17;
    if ( v18 <= 0xF9u )
      v20 = v19;
    if ( v20 )
      return 0;
LABEL_28:
    if ( *(_BYTE *)(a1 + 57) != 1 || *(_BYTE *)(a1 + 97) != 1 || *(_WORD *)(a1 + 62) != *(_WORD *)(a1 + 102) )
    {
      v21 = *(_QWORD *)(a1 + 864);
      *(__m128i *)(v21 + 40) = _mm_loadu_si128((const __m128i *)(a1 + 56));
      *(__m128i *)(v21 + 56) = _mm_loadu_si128((const __m128i *)(a1 + 72));
      *(_DWORD *)(v21 + 72) = *(_DWORD *)(a1 + 88);
      return 1;
    }
LABEL_40:
    *(_BYTE *)(a1 + 515) = 1;
    return 1;
  }
  return 0;
}

