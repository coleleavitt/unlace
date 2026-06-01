__int64 __fastcall sub_1ECD0(const __m128i *a1)
{
  __int16 v1; // ax
  __int64 v3; // rbp
  char v4; // al
  __int64 (__fastcall *v5)(__int64, __int64, __int64); // rcx
  bool v6; // al
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // al
  bool v9; // r12
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  unsigned __int8 v11; // al
  bool v12; // dl
  bool v13; // cc
  bool v14; // al
  __int64 v15; // rbp
  char v16; // al
  __int64 (__fastcall *v17)(__int64, __int64, __int64); // rcx
  unsigned __int8 v18; // bp
  unsigned __int8 v19; // al
  bool v20; // r12
  __int64 (__fastcall *v21)(__int64, __int64); // rax
  unsigned __int8 v22; // al
  bool v23; // dl
  bool v24; // al
  __m128i *v25; // rax

  v1 = a1[2].m128i_i16[4];
  if ( v1 == 37 )
  {
    if ( a1[3].m128i_i8[9] != 5 || a1[6].m128i_i8[1] != 1 )
      return 0;
    v15 = a1[54].m128i_i64[0];
    v16 = *(_BYTE *)(v15 + 1);
    if ( !v16 )
    {
LABEL_26:
      a1[49].m128i_i8[8] = 1;
      return 0;
    }
    v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1->m128i_i64[0] + 8);
    if ( v17 == sub_1CC00 )
    {
      if ( v16 != a1[8].m128i_i8[9] )
        return 0;
      if ( v16 != 99 )
      {
        if ( v16 == 100 )
        {
          if ( a1[9].m128i_i64[0] != *(_QWORD *)(v15 + 8) )
            return 0;
        }
        else if ( v16 != 1 || a1[8].m128i_i16[7] != *(_WORD *)(v15 + 6) )
        {
          return 0;
        }
      }
    }
    else if ( !(unsigned __int8)v17((__int64)a1, (__int64)&a1[8].m128i_i64[1], v15) )
    {
      return 0;
    }
    v18 = *(_BYTE *)(v15 + 5);
    v19 = a1[8].m128i_u8[13];
    v20 = v18 <= 0xF9u;
    if ( v19 > 0xF9u )
    {
      if ( v18 <= 0xF9u || v19 < v18 )
        goto LABEL_38;
    }
    else if ( v18 <= 0xF9u && v19 < v18 && (!a1->m128i_i8[8] || v19 != 2) )
    {
LABEL_38:
      v21 = *(__int64 (__fastcall **)(__int64, __int64))(a1->m128i_i64[0] + 32);
      if ( v21 == sub_1CC60 )
        return 0;
      v22 = v21((__int64)a1, (__int64)&a1[8].m128i_i64[1]);
      v23 = v20 || v22 < v18;
      v13 = v22 <= 0xF9u;
      v24 = v20 && v22 < v18;
      if ( !v13 )
        v24 = v23;
      if ( v24 )
        return 0;
    }
    v25 = (__m128i *)a1[54].m128i_i64[0];
    *v25 = _mm_loadu_si128(a1 + 6);
    v25[1] = _mm_loadu_si128(a1 + 7);
    v25[2].m128i_i32[0] = a1[8].m128i_i32[0];
    goto LABEL_22;
  }
  if ( v1 != 71 || a1[3].m128i_i8[9] != 5 )
    return 0;
  v3 = a1[54].m128i_i64[0];
  v4 = *(_BYTE *)(v3 + 1);
  if ( !v4 )
    goto LABEL_26;
  v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1->m128i_i64[0] + 8);
  if ( v5 == sub_1CC00 )
  {
    if ( v4 != a1[6].m128i_i8[1] )
      return 0;
    if ( v4 != 99 )
    {
      if ( v4 == 100 )
      {
        v6 = a1[6].m128i_i64[1] == *(_QWORD *)(v3 + 8);
      }
      else
      {
        if ( v4 != 1 )
          return 0;
        v6 = a1[6].m128i_i16[3] == *(_WORD *)(v3 + 6);
      }
      if ( !v6 )
        return 0;
    }
  }
  else if ( !(unsigned __int8)v5((__int64)a1, (__int64)a1[6].m128i_i64, v3) )
  {
    return 0;
  }
  v7 = *(_BYTE *)(v3 + 5);
  v8 = a1[6].m128i_u8[5];
  v9 = v7 <= 0xF9u;
  if ( v8 > 0xF9u )
  {
    if ( v7 <= 0xF9u || v8 < v7 )
      goto LABEL_18;
  }
  else if ( v7 <= 0xF9u && v8 < v7 && (!a1->m128i_i8[8] || v8 != 2) )
  {
LABEL_18:
    v10 = *(__int64 (__fastcall **)(__int64, __int64))(a1->m128i_i64[0] + 32);
    if ( v10 != sub_1CC60 )
    {
      v11 = v10((__int64)a1, (__int64)a1[6].m128i_i64);
      v12 = v9 || v11 < v7;
      v13 = v11 <= 0xF9u;
      v14 = v9 && v11 < v7;
      if ( !v13 )
        v14 = v12;
      if ( !v14 )
        goto LABEL_22;
    }
    return 0;
  }
LABEL_22:
  *(_QWORD *)(a1[23].m128i_i64[1] + 16) = (unsigned int)-a1[4].m128i_i32[0];
  return 1;
}
