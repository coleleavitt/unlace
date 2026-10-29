unsigned __int64 __fastcall sub_26E40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbp
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // rdx
  __m128i *v12; // r13
  __int64 v13; // rbx
  __m128i *v14; // r12
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __m128i *v17; // rbx
  __int64 *v18; // rdi
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdi
  __int64 v21; // rcx
  __m128i *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  const __m128i *v25; // rdx
  __m128i v26; // xmm0
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __m128i v31; // xmm0
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __m128i v37; // [rsp+0h] [rbp-48h] BYREF
  __int64 v38; // [rsp+10h] [rbp-38h]
  unsigned __int64 v39; // [rsp+18h] [rbp-30h]

  v39 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a3 + 161) != 5 )
  {
    if ( under_debugger )
      BUG();
    interr(10489);
    goto LABEL_52;
  }
  v6 = (__int64 *)a2;
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) > 3u )
    return v39 - __readfsqword(0x28u);
  v8 = *(_QWORD *)(a3 + 168);
  if ( !v8 )
    return v39 - __readfsqword(0x28u);
  v9 = *(_QWORD **)a2;
  v10 = *(_QWORD *)(a2 + 8);
  v11 = &v9[3 * v10];
  if ( v9 == v11 )
    goto LABEL_47;
  if ( ((24 * (_BYTE)v10) & 8) == 0 || (*v9 <<= v8, v9 += 3, v11 != v9) )
  {
    do
    {
      *v9 <<= v8;
      v9[3] <<= v8;
      v9 += 6;
    }
    while ( v11 != v9 );
  }
  v10 = v6[1];
  v12 = (__m128i *)*v6;
  v13 = 24 * v10;
  v14 = (__m128i *)(*v6 + 24 * v10);
  if ( (__m128i *)*v6 == v14 )
  {
LABEL_47:
    if ( !v10 )
      return v39 - __readfsqword(0x28u);
    v27 = 0;
    goto LABEL_38;
  }
  v15 = 0xAAAAAAAAAAAAAAABLL * (v13 >> 3);
  if ( !v15 )
  {
    sub_26B10(*v6, (__m128i *)(*v6 + 24 * v10), -2, v8, a5, a6);
    goto LABEL_40;
  }
  _BitScanReverse64(&v16, v15);
  sub_26B10(*v6, (__m128i *)(*v6 + 24 * v10), 2LL * (int)v16, v8, a5, a6);
  if ( v13 <= 384 )
  {
LABEL_40:
    sub_24B10(v12, v14);
    goto LABEL_14;
  }
  v17 = v12 + 24;
  sub_24B10(v12, v12 + 24);
  do
  {
    v18 = (__int64 *)v17;
    v17 = (__m128i *)((char *)v17 + 24);
    sub_24AB0(v18);
  }
  while ( v14 != v17 );
LABEL_14:
  v19 = v6[1];
  v20 = *v6;
  v21 = *v6 + 24 * v19;
  if ( *v6 == v21 )
  {
LABEL_52:
    if ( !v19 )
      return v39 - __readfsqword(0x28u);
    v27 = 0;
    goto LABEL_38;
  }
  v22 = (__m128i *)(v20 + 24);
  if ( 24 * v19 == 24 )
  {
    v27 = 1;
  }
  else
  {
    v23 = *(_QWORD *)(v20 + 8);
    while ( 1 )
    {
      v24 = v23;
      v23 = v22->m128i_i64[1];
      if ( v23 == v24 && v22[-2].m128i_i64[1] == v22->m128i_i64[0] )
        break;
      v22 = (__m128i *)((char *)v22 + 24);
      if ( (__m128i *)v21 == v22 )
        goto LABEL_54;
    }
    v22 = (__m128i *)((char *)v22 - 24);
    if ( (__m128i *)v21 == v22 )
    {
LABEL_54:
      v27 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v22->m128i_i64 - v20) >> 3);
      goto LABEL_29;
    }
    v25 = v22 + 3;
    if ( (__m128i *)v21 != &v22[3] )
    {
      do
      {
        while ( v22->m128i_i64[1] != v25->m128i_i64[1] || v22->m128i_i64[0] != v25->m128i_i64[0] )
        {
          v26 = _mm_loadu_si128(v25);
          v25 = (const __m128i *)((char *)v25 + 24);
          v22 = (__m128i *)((char *)v22 + 24);
          *v22 = v26;
          v22[1].m128i_i32[0] = v25[-1].m128i_i32[2];
          if ( (const __m128i *)v21 == v25 )
            goto LABEL_27;
        }
        v25 = (const __m128i *)((char *)v25 + 24);
      }
      while ( (const __m128i *)v21 != v25 );
LABEL_27:
      v20 = *v6;
      v19 = v6[1];
    }
    v27 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)&v22[1].m128i_i64[1] - v20) >> 3);
  }
LABEL_29:
  if ( v27 != v19 )
  {
    LODWORD(v38) = 0;
    v37 = (__m128i)-1LL;
    if ( v27 >= v19 )
    {
      v28 = v6[2];
      if ( (unsigned __int64)&v37 < v20 || (unsigned __int64)&v37 >= v20 + 24 * v28 )
      {
        if ( v28 < v27 )
        {
          v35 = qvector_reserve(v6, v20, v27, 24);
          v19 = v6[1];
          *v6 = v35;
        }
        if ( v19 < v27 )
        {
          v31 = _mm_load_si128(&v37);
          v32 = v38;
          v33 = 24 * v19;
          do
          {
            v34 = *v6;
            ++v19;
            *(_QWORD *)(v34 + v33 + 16) = v32;
            *(__m128i *)(v34 + v33) = v31;
            v33 += 24;
          }
          while ( v19 != v27 );
        }
      }
      else
      {
        if ( v28 < v27 )
        {
          v36 = qvector_reserve(v6, v20, v27, 24);
          v19 = v6[1];
          *v6 = v36;
        }
        if ( v19 < v27 )
        {
          v29 = 24 * v19;
          do
          {
            ++v19;
            v30 = v29 + *v6;
            v29 += 24;
            *(_DWORD *)(v30 + 16) = 0;
            *(_OWORD *)v30 = -1;
          }
          while ( v19 != v27 );
        }
      }
    }
LABEL_38:
    v6[1] = v27;
  }
  return v39 - __readfsqword(0x28u);
}
