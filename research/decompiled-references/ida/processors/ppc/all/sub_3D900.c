__int64 __fastcall sub_3D900(__int64 a1)
{
  __int16 v1; // ax
  __int64 v3; // rbp
  __int64 v4; // r13
  const __m128i *v5; // rbp
  unsigned __int8 v6; // r13
  unsigned __int8 v7; // al
  bool v8; // r14
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned __int8 v10; // al
  bool v11; // dl
  bool v12; // cc
  bool v13; // al
  __int64 v14; // rax
  unsigned __int8 v15; // bp
  unsigned __int8 v16; // al
  bool v17; // r14
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  unsigned __int8 v19; // al
  bool v20; // dl
  bool v21; // al
  int v22; // ecx
  int v23; // eax
  __m128i *v24; // rax

  v1 = *(_WORD *)(a1 + 40);
  if ( v1 == 11 )
  {
    v4 = *(_QWORD *)(a1 + 864);
    if ( !*(_BYTE *)(v4 + 1) )
      goto LABEL_5;
    v5 = (const __m128i *)(a1 + 56);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
            a1,
            a1 + 56,
            *(_QWORD *)(a1 + 864)) )
      goto LABEL_31;
    v6 = *(_BYTE *)(v4 + 5);
    v7 = *(_BYTE *)(a1 + 61);
    v8 = v6 <= 0xF9u;
    if ( v7 <= 0xF9u )
    {
      if ( v6 <= 0xF9u && v7 < v6 && (v7 != 2 || !*(_BYTE *)(a1 + 8)) )
        goto LABEL_11;
    }
    else if ( v6 <= 0xF9u || v7 < v6 )
    {
LABEL_11:
      v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
      if ( v9 != sub_313C0 )
      {
        v10 = v9(a1, a1 + 56);
        v11 = v8 || v10 < v6;
        v12 = v10 <= 0xF9u;
        v13 = v8 && v10 < v6;
        if ( !v12 )
          v13 = v11;
        if ( !v13 )
          goto LABEL_15;
      }
LABEL_31:
      v1 = *(_WORD *)(a1 + 40);
      goto LABEL_2;
    }
LABEL_15:
    if ( *(_BYTE *)(a1 + 137) )
      v5 = (const __m128i *)(a1 + 96);
    v14 = v5[3].m128i_i64[0];
    goto LABEL_28;
  }
LABEL_2:
  if ( v1 != 346 )
    return 0;
  v3 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v3 + 1) )
  {
LABEL_5:
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
          a1,
          a1 + 56,
          *(_QWORD *)(a1 + 864)) )
    return 0;
  v15 = *(_BYTE *)(v3 + 5);
  v16 = *(_BYTE *)(a1 + 61);
  v17 = v15 <= 0xF9u;
  if ( v16 <= 0xF9u )
  {
    if ( v15 <= 0xF9u && v16 < v15 && (!*(_BYTE *)(a1 + 8) || v16 != 2) )
      goto LABEL_22;
  }
  else if ( v15 <= 0xF9u || v16 < v15 )
  {
LABEL_22:
    v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v18 == sub_313C0 )
      return 0;
    v19 = v18(a1, a1 + 56);
    v20 = v17 || v19 < v15;
    v12 = v19 <= 0xF9u;
    v21 = v17 && v19 < v15;
    if ( !v12 )
      v21 = v20;
    if ( v21 )
      return 0;
  }
  v22 = 32 - *(unsigned __int16 *)(a1 + 142);
  if ( (unsigned __int64)v22 > 0x1F )
    return 0;
  v5 = (const __m128i *)(a1 + 96);
  v14 = (unsigned int)((1 << v22) - 1);
LABEL_28:
  if ( (v14 & 0xFFFFFFFFFFFFFFF7LL) == 7 || (v14 & 0xFFFFFFFFFFFFFFDFLL) == 0x1F )
  {
    v23 = v14 + 1;
  }
  else
  {
    if ( v14 != 127 )
      return 0;
    v23 = 128;
  }
  *(_DWORD *)(a1 + 896) = v23;
  v24 = *(__m128i **)(a1 + 864);
  *v24 = _mm_loadu_si128(v5);
  v24[1] = _mm_loadu_si128(v5 + 1);
  v24[2].m128i_i32[0] = v5[2].m128i_i32[0];
  return 1;
}

