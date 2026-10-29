__int64 __fastcall sub_116E0(const __m128i *a1)
{
  __int64 v2; // rbp
  char v3; // al
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // rcx
  char v5; // al
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // al
  bool v8; // r12
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned __int8 v10; // al
  bool v11; // dl
  bool v12; // cc
  bool v13; // al
  const __m128i *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned int *v16; // rsi
  unsigned int v17; // edx
  unsigned int v18; // eax
  __m128i *v19; // rax

  if ( (unsigned __int16)(a1[2].m128i_i16[4] - 1277) > 1u )
    return 0;
  v2 = a1[54].m128i_i64[0];
  v3 = *(_BYTE *)(v2 + 1);
  if ( !v3 )
  {
    a1[49].m128i_i8[8] = 1;
    return 0;
  }
  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1->m128i_i64[0] + 8);
  if ( v4 != sub_110E0 )
  {
    v5 = v4((__int64)a1, (__int64)&a1[3].m128i_i64[1], a1[54].m128i_i64[0]);
LABEL_13:
    if ( !v5 )
      return 0;
    goto LABEL_14;
  }
  if ( v3 != a1[3].m128i_i8[9] )
    return 0;
  if ( v3 != 99 )
  {
    if ( v3 == 100 )
    {
      v5 = a1[4].m128i_i64[0] == *(_QWORD *)(v2 + 8);
    }
    else
    {
      if ( v3 != 1 )
        return 0;
      v5 = a1[3].m128i_i16[7] == *(_WORD *)(v2 + 6);
    }
    goto LABEL_13;
  }
LABEL_14:
  v6 = *(_BYTE *)(v2 + 5);
  v7 = a1[3].m128i_u8[13];
  v8 = v6 <= 0xF9u;
  if ( v7 > 0xF9u )
  {
    if ( v6 > 0xF9u && v7 >= v6 )
      goto LABEL_23;
  }
  else if ( v6 > 0xF9u || v7 >= v6 || v7 == 2 && a1->m128i_i8[8] )
  {
    goto LABEL_23;
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64))(a1->m128i_i64[0] + 32);
  if ( v9 == sub_11140 )
    return 0;
  v10 = v9((__int64)a1, (__int64)&a1[3].m128i_i64[1]);
  v11 = v8 || v10 < v6;
  v12 = v10 <= 0xF9u;
  v13 = v8 && v10 < v6;
  if ( !v12 )
    v13 = v11;
  if ( v13 )
    return 0;
LABEL_23:
  v14 = a1 + 6;
  if ( a1[8].m128i_i8[9] )
    v14 = (const __m128i *)((char *)a1 + 136);
  v15 = v14[1].m128i_u64[0];
  if ( v14->m128i_i16[3] || v15 > 3 )
    return 0;
  v16 = (unsigned int *)a1[23].m128i_i64[1];
  v17 = *v16 & 0xFFFFFBFB;
  if ( (_DWORD)v15 == 2 )
  {
    *v16 = v17 | 4;
  }
  else if ( 1 << v15 > 4 )
  {
    *v16 |= 0x404u;
  }
  else
  {
    v18 = *v16 & 0xFFFFFBFB;
    if ( !(_DWORD)v15 )
    {
      BYTE1(v18) = BYTE1(v17) | 4;
      v17 = v18;
    }
    *v16 = v17;
  }
  if ( a1[8].m128i_i8[9] )
  {
    v19 = (__m128i *)a1[54].m128i_i64[0];
    *v19 = _mm_loadu_si128(a1 + 6);
    v19[1] = _mm_loadu_si128(a1 + 7);
    v19[2].m128i_i32[0] = a1[8].m128i_i32[0];
  }
  return 1;
}

