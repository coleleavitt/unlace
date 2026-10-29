__int64 __fastcall sub_BEB0(__int64 a1)
{
  __int64 v2; // r12
  _BYTE *v3; // rbp
  __int64 v4; // rdx
  unsigned __int8 v5; // r13
  unsigned __int8 v6; // al
  bool v7; // bp
  unsigned __int8 v8; // al
  bool v9; // cl
  bool v10; // bp
  __int64 v11; // rdx
  unsigned __int8 v12; // r13
  unsigned __int8 v13; // al
  bool v14; // bp
  unsigned __int8 v15; // al
  bool v16; // cl
  bool v17; // bp
  __int64 v18; // rbp
  __int64 v19; // rdx
  unsigned __int8 v20; // bp
  unsigned __int8 v21; // al
  bool v22; // r13
  unsigned __int8 v23; // al
  bool v24; // dl
  __m128i *v25; // rax
  __int64 v26; // rdx
  unsigned __int8 v27; // r14
  unsigned __int8 v28; // al
  bool v29; // bp
  unsigned __int8 v30; // al
  bool v31; // cl
  bool v32; // bp

  if ( *(_WORD *)(a1 + 40) != 125 )
    return 0;
  v2 = a1 + 56;
  v3 = *(_BYTE **)(a1 + 864);
  if ( v3[41] )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v3 + 40) )
      goto LABEL_16;
    v5 = v3[45];
    v6 = *(_BYTE *)(a1 + 61);
    v7 = v5 <= 0xF9u;
    if ( v6 > 0xF9u )
    {
      if ( v6 < v5 || v5 <= 0xF9u )
      {
LABEL_13:
        LOBYTE(v4) = v6 < v5;
        v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 56, v4);
        v9 = v8 < v5 && v7;
        v10 = v8 < v5 || v7;
        if ( v8 <= 0xF9u )
          v10 = v9;
        if ( v10 )
          goto LABEL_16;
      }
    }
    else if ( v6 < v5 && v5 <= 0xF9u && (v6 != 2 || !*(_BYTE *)(a1 + 8)) )
    {
      goto LABEL_13;
    }
    v3 = *(_BYTE **)(a1 + 864);
    if ( !v3[1] )
      goto LABEL_4;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
           a1,
           a1 + 96,
           *(_QWORD *)(a1 + 864)) )
    {
      v27 = v3[5];
      v28 = *(_BYTE *)(a1 + 101);
      v29 = v27 <= 0xF9u;
      if ( v28 > 0xF9u )
      {
        if ( v28 >= v27 && v27 > 0xF9u )
          goto LABEL_34;
      }
      else if ( v28 >= v27 || v27 > 0xF9u || *(_BYTE *)(a1 + 8) && v28 == 2 )
      {
        goto LABEL_34;
      }
      LOBYTE(v26) = v28 < v27;
      v30 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 96, v26);
      v31 = v30 < v27 && v29;
      v32 = v30 < v27 || v29;
      if ( v30 <= 0xF9u )
        v32 = v31;
      if ( !v32 )
        goto LABEL_34;
    }
LABEL_16:
    v3 = *(_BYTE **)(a1 + 864);
    if ( !v3[1] )
      goto LABEL_5;
    goto LABEL_17;
  }
LABEL_4:
  *(_BYTE *)(a1 + 792) = 1;
  if ( !v3[1] )
  {
LABEL_5:
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
LABEL_17:
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 8LL))(a1, v2, v3) )
    return 0;
  v12 = v3[5];
  v13 = *(_BYTE *)(a1 + 61);
  v14 = v12 <= 0xF9u;
  if ( v13 <= 0xF9u )
  {
    if ( v13 >= v12 || v12 > 0xF9u || *(_BYTE *)(a1 + 8) && v13 == 2 )
      goto LABEL_24;
  }
  else if ( v13 >= v12 && v12 > 0xF9u )
  {
    goto LABEL_24;
  }
  LOBYTE(v11) = v13 < v12;
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, v2, v11);
  v16 = v15 < v12 && v14;
  v17 = v15 < v12 || v14;
  if ( v15 <= 0xF9u )
    v17 = v16;
  if ( v17 )
    return 0;
LABEL_24:
  v18 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v18 + 41) )
    goto LABEL_5;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 96, v18 + 40) )
    return 0;
  v20 = *(_BYTE *)(v18 + 45);
  v21 = *(_BYTE *)(a1 + 101);
  v22 = v20 <= 0xF9u;
  if ( v21 > 0xF9u )
  {
    if ( v20 > 0xF9u && v21 >= v20 )
      goto LABEL_34;
  }
  else if ( v20 > 0xF9u || v21 >= v20 || *(_BYTE *)(a1 + 8) && v21 == 2 )
  {
    goto LABEL_34;
  }
  LOBYTE(v19) = v21 < v20;
  v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 96, v19);
  v24 = v22 || v23 < v20;
  if ( v23 <= 0xF9u )
    v24 = v22 && v23 < v20;
  if ( v24 )
    return 0;
LABEL_34:
  v25 = *(__m128i **)(a1 + 864);
  *v25 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v25[1] = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v25[2].m128i_i32[0] = *(_DWORD *)(a1 + 88);
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 41LL) = 0;
  return 1;
}

