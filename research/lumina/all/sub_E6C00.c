__int64 *__fastcall sub_E6C00(__int64 *a1, __int64 *a2, __m128i *a3)
{
  __int64 *result; // rax
  __int64 v4; // r8
  const char *v7; // r15
  __int64 v8; // rbp
  int v9; // edi
  __int64 v10; // rax
  int v11; // r12d
  const char *v12; // rdx
  unsigned __int8 *i; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rdx
  __m128i *v18; // rdx
  __int64 v19; // [rsp+0h] [rbp-40h]
  __int64 *v20; // [rsp+0h] [rbp-40h]

  result = a2;
  if ( !a3 )
    return result;
  v4 = (__int64)a1;
  v7 = (const char *)a3->m128i_i64[0];
  v8 = *a1;
  if ( a3->m128i_i64[0] && a2 )
  {
    v9 = *(_DWORD *)a2;
    v10 = *(int *)a2;
    if ( *(int *)a2 <= 0 )
      goto LABEL_13;
    v11 = 0;
    while ( 1 )
    {
      v12 = v7;
      for ( i = (unsigned __int8 *)a2[6 * v11 + 2]; ; ++i )
      {
        v14 = *(unsigned __int8 *)v12;
        v15 = *i;
        if ( (_DWORD)v14 == (_DWORD)v15 )
          break;
        if ( byte_1BF000[v14] != byte_1BF000[v15] )
          goto LABEL_12;
LABEL_8:
        ++v12;
      }
      if ( *v12 )
        goto LABEL_8;
      v19 = v4;
      sub_DBD10(v4, "duplicate WITH table name: %s", v7);
      v9 = *(_DWORD *)a2;
      v4 = v19;
LABEL_12:
      ++v11;
      v10 = v9;
      if ( v9 <= v11 )
      {
LABEL_13:
        v16 = sub_DFAD0(v8, a2, 48 * v10 + 64);
        if ( !*(_BYTE *)(v8 + 103) )
          goto LABEL_14;
LABEL_17:
        sub_D7E70(v8, (__int64)a3);
        sub_C9250(v8, a3);
        return a2;
      }
    }
  }
  if ( a2 )
  {
    v10 = *(int *)a2;
    goto LABEL_13;
  }
  v16 = sub_DC1C0(*a1, 0x40u);
  if ( *(_BYTE *)(v8 + 103) )
    goto LABEL_17;
LABEL_14:
  v17 = *(int *)v16;
  v20 = v16;
  *(_DWORD *)v16 = v17 + 1;
  v18 = (__m128i *)&v16[6 * v17];
  v18[1] = _mm_loadu_si128(a3);
  v18[2] = _mm_loadu_si128(a3 + 1);
  v18[3] = _mm_loadu_si128(a3 + 2);
  sub_C9250(v8, a3);
  return v20;
}
