unsigned __int64 __fastcall sub_11B90(
        __int64 a1,
        unsigned int a2,
        const char *a3,
        __int64 a4,
        int *a5,
        char a6,
        __int64 *a7)
{
  const char *v7; // r10
  char v10; // al
  bool v11; // r13
  const char *v12; // rbx
  char *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  char v16; // bl
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  char v24; // [rsp+Ch] [rbp-5Ch]
  __m128i v25; // [rsp+10h] [rbp-58h] BYREF
  __int16 v26; // [rsp+20h] [rbp-48h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v7 = a3;
  v27 = __readfsqword(0x28u);
  if ( !a3 )
    goto LABEL_26;
  v10 = *a3;
  v11 = 0;
  if ( !*a3 )
    goto LABEL_9;
  v12 = a3;
  if ( v10 == 36 )
  {
    if ( a3[1] == 76 )
    {
      v11 = 1;
      if ( a3[2] == 78 )
        goto LABEL_9;
    }
  }
  else if ( v10 == 95 )
  {
    do
      ++v12;
    while ( *v12 == 95 );
  }
  v24 = a6;
  v13 = strstr(v12, "catch$");
  v7 = a3;
  a6 = v24;
  if ( !v13 )
  {
    v13 = strstr(v12, "unwindfunclet$");
    v7 = a3;
    a6 = v24;
    if ( !v13 )
    {
LABEL_26:
      v11 = 0;
      goto LABEL_9;
    }
  }
  v11 = 1;
  if ( v12 != v13 )
    v11 = *(v13 - 1) == 36;
LABEL_9:
  if ( *(_BYTE *)(a1 + 56) )
  {
    v14 = 56324;
    if ( a6 )
    {
      add_entry(a4, a4, v7, 1, 1);
      goto LABEL_24;
    }
  }
  else
  {
    v14 = a6 == 0 ? 56324 : 56322;
  }
  set_name(a4, v7, v14);
  v15 = a4 + 1;
  if ( v11 )
  {
    auto_mark_range(a4, v15, 20);
    v16 = 0;
    goto LABEL_13;
  }
  auto_mark_range(a4, v15, 20);
  auto_mark_range(a4, a4 + 1, 30);
LABEL_24:
  v16 = 1;
LABEL_13:
  if ( (unsigned __int8)sub_9170(*(_QWORD *)(a1 + 40), a2, &v25, a5) )
  {
    if ( *(_BYTE *)(a1 + 382) )
    {
      v26 = __ROL2__(v26, 8);
      v25 = _mm_unpacklo_epi64(
              _mm_unpacklo_epi32(
                _mm_cvtsi32_si128(_byteswap_ulong(v25.m128i_u32[0])),
                _mm_cvtsi32_si128(_byteswap_ulong(v25.m128i_u32[1]))),
              _mm_unpacklo_epi32(
                _mm_cvtsi32_si128(_byteswap_ulong(v25.m128i_u32[2])),
                _mm_cvtsi32_si128(_byteswap_ulong(v25.m128i_u32[3]))));
    }
    if ( v16 )
    {
      if ( a7 )
      {
        v17 = a7[1];
        v18 = *a7;
        v19 = v17 + 1;
        if ( a7[2] < (unsigned __int64)(v17 + 1) )
        {
          v18 = qvector_reserve(a7, *a7, v17 + 1, 12);
          v17 = a7[1];
          *a7 = v18;
          v19 = v17 + 1;
        }
        a7[1] = v19;
        v20 = v18 + 12 * v17;
        *(_QWORD *)v20 = a4;
        *(_DWORD *)(v20 + 8) = v25.m128i_i32[1];
      }
      else
      {
        sub_11A80(a4, v25.m128i_u32[1]);
      }
    }
  }
  return v27 - __readfsqword(0x28u);
}
