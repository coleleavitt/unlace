__int64 __fastcall sub_118D0(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v8; // rbp
  char v9; // al
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rcx
  bool v11; // al
  unsigned __int8 v12; // bp
  unsigned __int8 v13; // al
  bool v14; // r12
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  unsigned __int8 v16; // al
  bool v17; // dl
  bool v18; // cc
  bool v19; // al
  __m128i *v20; // rax
  int *v21; // rdx
  __int64 v22; // rcx
  int v23; // edi
  unsigned int v24; // esi
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d

  if ( a1[2].m128i_i16[4] != 1159 || a1[14].m128i_i64[0] > 3uLL )
    return 0;
  v8 = a1[54].m128i_i64[0];
  v9 = *(_BYTE *)(v8 + 1);
  if ( !v9 )
  {
    a1[49].m128i_i8[8] = 1;
    return 0;
  }
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1->m128i_i64[0] + 8);
  if ( v10 == sub_110E0 )
  {
    if ( v9 != a1[3].m128i_i8[9] )
      return 0;
    if ( v9 != 99 )
    {
      if ( v9 == 100 )
      {
        v11 = a1[4].m128i_i64[0] == *(_QWORD *)(v8 + 8);
      }
      else
      {
        if ( v9 != 1 )
          return 0;
        v11 = a1[3].m128i_i16[7] == *(_WORD *)(v8 + 6);
      }
      if ( !v11 )
        return 0;
    }
  }
  else if ( !(unsigned __int8)v10((__int64)a1, (__int64)&a1[3].m128i_i64[1], v8) )
  {
    return 0;
  }
  v12 = *(_BYTE *)(v8 + 5);
  v13 = a1[3].m128i_u8[13];
  v14 = v12 <= 0xF9u;
  if ( v13 > 0xF9u )
  {
    if ( v13 >= v12 && v12 > 0xF9u )
      goto LABEL_23;
  }
  else if ( v13 >= v12 || v12 > 0xF9u || a1->m128i_i8[8] && v13 == 2 )
  {
    goto LABEL_23;
  }
  v15 = *(__int64 (__fastcall **)(__int64, __int64))(a1->m128i_i64[0] + 32);
  if ( v15 == sub_11140 )
    return 0;
  v16 = v15((__int64)a1, (__int64)&a1[3].m128i_i64[1]);
  v17 = v14 || v16 < v12;
  v18 = v16 <= 0xF9u;
  v19 = v14 && v16 < v12;
  if ( !v18 )
    v19 = v17;
  if ( v19 )
    return 0;
LABEL_23:
  v20 = (__m128i *)a1[54].m128i_i64[0];
  *v20 = _mm_loadu_si128(a1 + 6);
  v20[1] = _mm_loadu_si128(a1 + 7);
  v20[2].m128i_i32[0] = a1[8].m128i_i32[0];
  v21 = (int *)a1[23].m128i_i64[1];
  v22 = a1[14].m128i_i64[0];
  v23 = *v21;
  v24 = *v21 & 0xFFFFFBFB;
  *v21 = v24;
  if ( (_DWORD)v22 == 2 )
  {
    *v21 = v24 | 4;
    return 1;
  }
  if ( 1 << v22 > 4 )
  {
    if ( (_DWORD)v22 == 3 )
    {
      *v21 = v23 | 0x404;
      return 1;
    }
    goto LABEL_38;
  }
  if ( !(_DWORD)v22 )
  {
    *v21 = v24 | 0x400;
    return 1;
  }
  if ( (_DWORD)v22 != 1 )
  {
LABEL_38:
    sub_112B0();
    sub_11AC0(v23, v24, v25, v26, v27, v28, a7);
  }
  return 1;
}

