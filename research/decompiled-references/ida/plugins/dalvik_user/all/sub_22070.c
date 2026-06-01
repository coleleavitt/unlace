__int64 __fastcall sub_22070(__int64 *a1, __int64 a2)
{
  char *v4; // rbp
  char v5; // al
  char v6; // dl
  __int64 v7; // r14
  __int64 v8; // rbx
  const char *v9; // rsi
  __int64 v10; // r12
  _QWORD *v11; // rax
  char v13; // al
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 i; // r14
  const char *v17; // rsi
  const char *v18; // rbp
  __int32 v19; // eax
  __m128i v20; // xmm1
  const char *v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 j; // r14
  _QWORD *v25; // rbx
  __int64 v26; // [rsp+8h] [rbp-D8h]
  __int64 v27; // [rsp+18h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+20h] [rbp-C0h]
  char *needle; // [rsp+38h] [rbp-A8h] BYREF
  __m128i v30; // [rsp+40h] [rbp-A0h] BYREF
  __m256i v31; // [rsp+58h] [rbp-88h] BYREF
  int v32; // [rsp+78h] [rbp-68h]
  char *v33; // [rsp+80h] [rbp-60h]
  __m128i v34; // [rsp+88h] [rbp-58h]
  unsigned __int64 v35; // [rsp+A0h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v27 = 0;
  needle = nullptr;
  v30.m128i_i64[0] = 0;
  memset(&v31, 0, 24);
  v28 = 0;
  LODWORD(v4) = sub_1D840((unsigned __int8 *)&needle, a2);
  if ( !(_BYTE)v4 )
  {
    if ( byte_7FAF8 )
    {
      if ( (_BYTE)needle )
      {
        sub_5D660(&v30, 0xFFFFFFFFLL);
        LOWORD(needle) = 0;
LABEL_32:
        v9 = (const char *)v31.m256i_i64[0];
        if ( v31.m256i_i64[1] > 1uLL )
        {
LABEL_33:
          sub_11270((__int64)"ADB %s", v9);
          if ( !v31.m256i_i64[0] )
            goto LABEL_18;
          goto LABEL_17;
        }
LABEL_16:
        if ( !v9 )
        {
LABEL_18:
          v8 = v27;
          LODWORD(v4) = 0;
          goto LABEL_19;
        }
LABEL_17:
        v31.m256i_i64[1] = 0;
        qfree();
        goto LABEL_18;
      }
      goto LABEL_15;
    }
LABEL_31:
    LOWORD(needle) = 0;
    goto LABEL_32;
  }
  if ( !byte_7FAF8 )
  {
    v5 = sub_1E130(&v27, (__int64)&v31, (__int64)"%s", "jdwp");
    v6 = byte_7FAF8;
    if ( v5 )
      goto LABEL_4;
LABEL_28:
    if ( v6 )
    {
      if ( (_BYTE)needle )
      {
        sub_5D660(&v30, 0xFFFFFFFFLL);
        goto LABEL_31;
      }
LABEL_15:
      v9 = (const char *)v31.m256i_i64[0];
      if ( v31.m256i_i64[1] > 1uLL )
        goto LABEL_33;
      goto LABEL_16;
    }
    goto LABEL_31;
  }
  v13 = sub_20460((__int64)&needle, &v27, v31.m256i_i64, "jdwp");
  v6 = byte_7FAF8;
  if ( !v13 )
    goto LABEL_28;
LABEL_4:
  if ( !v6 )
  {
LABEL_36:
    LOWORD(needle) = 0;
    goto LABEL_6;
  }
  if ( (_BYTE)needle )
  {
    sub_5D660(&v30, 0xFFFFFFFFLL);
    goto LABEL_36;
  }
LABEL_6:
  if ( v31.m256i_i64[0] )
  {
    v31.m256i_i64[1] = 0;
    qfree();
  }
  v7 = v28;
  v8 = v27;
  if ( !(_QWORD)v28 )
  {
    if ( v27 )
      goto LABEL_25;
    return (unsigned int)v4;
  }
  if ( *(_QWORD *)(v27 + 8) && !strcmp(*(const char **)v27, "error: device not found") )
  {
    if ( v8 )
    {
LABEL_21:
      v10 = 0;
      do
      {
        v11 = (_QWORD *)(v8 + 24 * v10);
        if ( *v11 )
        {
          v11[1] = 0;
          qfree();
          v8 = v27;
        }
        ++v10;
      }
      while ( v10 != v7 );
      goto LABEL_25;
    }
    return (unsigned int)v4;
  }
  v14 = *a1;
  if ( *a1 )
  {
    v15 = a1[1];
    if ( v15 )
    {
      for ( i = 0; i != v15; ++i )
      {
        v4 = (char *)(v14 + (i << 6));
        if ( *((_QWORD *)v4 + 5) )
        {
          *((_QWORD *)v4 + 6) = 0;
          qfree();
        }
        if ( *((_QWORD *)v4 + 1) )
        {
          *((_QWORD *)v4 + 2) = 0;
          qfree();
        }
        v14 = *a1;
      }
    }
    a1[1] = 0;
    qfree();
    *a1 = 0;
    v7 = v28;
    a1[2] = 0;
    v8 = v27;
  }
  v26 = v8 + 24 * v7;
  if ( v26 == v8 )
    goto LABEL_78;
  while ( 1 )
  {
    v18 = nptr;
    if ( *(_QWORD *)(v8 + 8) )
      v18 = *(const char **)v8;
    v30 = 0;
    needle = nullptr;
    sub_21B60((__int64 *)&needle, nullptr, (__int64)v18, a2);
    memset(&v31.m256i_u64[1], 0, 24);
    v19 = strtol(v18, nullptr, 10);
    v20 = _mm_loadu_si128(&v30);
    v4 = needle;
    v31.m256i_i32[0] = v19;
    v32 = 0;
    v33 = needle;
    needle = nullptr;
    v34 = v20;
    v30 = 0;
    if ( n )
      break;
    if ( byte_7FAF1 )
    {
      v21 = v4;
      if ( !v20.m128i_i64[0] )
        v21 = nptr;
      if ( strstr(nptr, v21) )
        goto LABEL_64;
    }
LABEL_52:
    sub_1F7E0((__int64)a1, (__int64)&v31);
    if ( v4 )
      qfree();
    if ( needle )
    {
      v30.m128i_i64[0] = 0;
      qfree();
    }
    v8 += 24;
    if ( v26 == v8 )
      goto LABEL_77;
  }
  if ( !*haystack )
    goto LABEL_52;
  v17 = nptr;
  if ( v20.m128i_i64[0] )
    v17 = v4;
  if ( !strstr(haystack, v17) )
    goto LABEL_52;
LABEL_64:
  v22 = *a1;
  if ( *a1 )
  {
    v23 = a1[1];
    if ( v23 )
    {
      for ( j = 0; j != v23; ++j )
      {
        v25 = (_QWORD *)(v22 + (j << 6));
        if ( v25[5] )
        {
          v25[6] = 0;
          qfree();
        }
        if ( v25[1] )
        {
          v25[2] = 0;
          qfree();
        }
        v22 = *a1;
      }
    }
    a1[1] = 0;
    qfree();
    *a1 = 0;
    a1[2] = 0;
  }
  sub_1F7E0((__int64)a1, (__int64)&v31);
  if ( v4 )
    qfree();
  if ( needle )
  {
    v30.m128i_i64[0] = 0;
    qfree();
  }
LABEL_77:
  v8 = v27;
LABEL_78:
  LOBYTE(v4) = a1[1] != 0;
LABEL_19:
  if ( v8 )
  {
    v7 = v28;
    if ( (_QWORD)v28 )
      goto LABEL_21;
LABEL_25:
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  return (unsigned int)v4;
}

