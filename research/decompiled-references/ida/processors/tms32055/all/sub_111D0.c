__int64 __fastcall sub_111D0(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, int a5, unsigned int *a6)
{
  unsigned int v10; // r12d
  const __m128i *v12; // rax
  __m128i v13; // xmm0
  __int32 v14; // eax
  __int64 v15; // rax
  void (__fastcall *v16)(__int64, __int64, __m128i *, const __m128i *, __int64); // r9
  char v17; // cl
  __int64 v18; // rsi
  char v19; // cl
  __int64 v20; // rdx
  __int64 v21; // rax
  __int32 v23; // edx
  __m128i *v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int32 v27; // edx
  __m128i *v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rax
  char v31; // al
  __int64 v32; // rax
  __m128i v33; // [rsp+0h] [rbp-48h] BYREF
  __m128i v34; // [rsp+10h] [rbp-38h] BYREF
  __int32 v35; // [rsp+20h] [rbp-28h]
  unsigned __int64 v36; // [rsp+28h] [rbp-20h]

  v10 = *a6;
  v36 = __readfsqword(0x28u);
  if ( v10 > 7 )
  {
    v14 = a2[22].m128i_i32[0];
    v33 = _mm_loadu_si128(a2 + 20);
    v13 = _mm_loadu_si128(a2 + 21);
  }
  else
  {
    v12 = (const __m128i *)((char *)a2 + 40 * v10 + 40);
    v33 = _mm_loadu_si128(v12);
    v13 = _mm_loadu_si128(v12 + 1);
    v14 = v12[2].m128i_i32[0];
  }
  v35 = v14;
  v34 = v13;
  v15 = a3 + 16LL * a5;
  v16 = *(void (__fastcall **)(__int64, __int64, __m128i *, const __m128i *, __int64))(v15 + 24);
  if ( !v16 )
    return 0;
  v17 = *(_BYTE *)(a3 + 16);
  v18 = *(_QWORD *)(v15 + 32);
  if ( v17 != 5 )
  {
    if ( v17 != 6 )
    {
      if ( !v18 )
        goto LABEL_14;
      if ( v18 >> 30 == 1 )
      {
        v18 &= 0xC00000003FFFFFFFLL;
        goto LABEL_14;
      }
      if ( v18 >> 30 == 2 )
      {
        v19 = 1;
        v20 = v18 & a4 & 0xC00000003FFFFFFFLL;
        if ( (v18 & 1) == 0 )
          goto LABEL_10;
LABEL_50:
        LOBYTE(v18) = v20;
        goto LABEL_13;
      }
      v20 = v18 & a4 & 0xC00000003FFFFFFFLL;
      if ( (v18 & 1) == 0 )
      {
        v19 = 0;
LABEL_10:
        v21 = *(_QWORD *)(v15 + 32);
        v18 = v20;
        do
        {
          v21 >>= 1;
          v18 >>= 1;
        }
        while ( (v21 & 1) == 0 );
        goto LABEL_12;
      }
LABEL_28:
      v18 = v20;
      goto LABEL_14;
    }
    if ( !v18 )
      goto LABEL_14;
    v30 = v18 >> 46;
    if ( v18 >> 46 == 1 )
    {
      v18 &= 0x3FFFFFFFFFFFuLL;
      goto LABEL_14;
    }
    if ( v30 == 2 )
    {
      v20 = v18 & a4 & 0x3FFFFFFFFFFFLL;
      v31 = 1;
      if ( (v18 & 1) != 0 )
      {
LABEL_39:
        v18 = (v20 & 1) == 0;
        goto LABEL_14;
      }
      do
      {
LABEL_37:
        v18 >>= 1;
        v20 >>= 1;
      }
      while ( (v18 & 1) == 0 );
      v18 = v20;
      if ( !v31 )
        goto LABEL_14;
      goto LABEL_39;
    }
    if ( !v30 )
    {
      v20 = v18 & a4;
      if ( (v18 & 1) != 0 )
        goto LABEL_28;
      v31 = 0;
      goto LABEL_37;
    }
    goto LABEL_53;
  }
  if ( !v18 )
    goto LABEL_14;
  v26 = v18 >> 38;
  if ( v18 >> 38 == 1 )
  {
    v18 &= 0x3FFFFFFFFFuLL;
    goto LABEL_14;
  }
  if ( v26 == 2 )
  {
    v20 = v18 & a4 & 0x3FFFFFFFFFLL;
    if ( (v18 & 1) != 0 )
      goto LABEL_50;
    v19 = 1;
  }
  else
  {
    if ( v26 )
    {
      if ( under_debugger )
        goto LABEL_55;
      interr();
LABEL_53:
      if ( !under_debugger )
        interr();
LABEL_55:
      BUG();
    }
    v20 = v18 & a4;
    v19 = 0;
    if ( (v18 & 1) != 0 )
      goto LABEL_28;
  }
  v32 = v18;
  v18 = v20;
  do
  {
    v32 >>= 1;
    v18 >>= 1;
  }
  while ( (v32 & 1) == 0 );
LABEL_12:
  if ( v19 )
LABEL_13:
    v18 = (v18 & 1) == 0;
LABEL_14:
  v16(a3, v18, &v33, a2, a1 + 260);
  if ( !v33.m128i_i8[1] )
    return 1;
  if ( v33.m128i_u8[0] == v10 )
  {
    if ( v10 <= 7 )
    {
      v27 = v35;
      v28 = (__m128i *)&a2[2].m128i_u64[5 * v10 + 1];
      *v28 = _mm_load_si128(&v33);
      v29 = _mm_load_si128(&v34);
      v28[2].m128i_i32[0] = v27;
      v28[1] = v29;
      *a6 = v10 + 1;
      return 1;
    }
  }
  else if ( v33.m128i_i8[0] <= 7u )
  {
    v23 = v35;
    v24 = (__m128i *)&a2[2].m128i_u64[5 * v33.m128i_u8[0] + 1];
    *v24 = _mm_load_si128(&v33);
    v25 = _mm_load_si128(&v34);
    v24[2].m128i_i32[0] = v23;
    v24[1] = v25;
    return 1;
  }
  return 0;
}

