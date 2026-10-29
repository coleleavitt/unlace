unsigned __int64 __fastcall sub_2CF3B0(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  bool (__fastcall *v3)(__int64); // rax
  unsigned __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned __int64 v7; // rcx
  void *v8; // r14
  __m128i si128; // xmm0
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __m128i v15; // xmm0
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rsi
  char v19; // cl
  unsigned __int64 v20; // rdx
  _BYTE *v21; // rdx
  char v22; // dl
  unsigned __int64 v23; // rbp
  __int64 *v24; // rdi
  __int64 *v25; // rdi
  __int64 v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rax
  __m128i v29; // xmm1
  __int64 v30; // rax
  __m128i v31; // xmm0
  _QWORD *exception; // rdi
  size_t n[2]; // [rsp+0h] [rbp-A8h] BYREF
  __m128i *v34; // [rsp+10h] [rbp-98h]
  unsigned __int64 v35; // [rsp+18h] [rbp-90h]
  __int64 *v36; // [rsp+28h] [rbp-80h] BYREF
  __m128i v37; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v38[2]; // [rsp+40h] [rbp-68h] BYREF
  char v39; // [rsp+50h] [rbp-58h]
  __m128i *v40; // [rsp+58h] [rbp-50h]
  unsigned __int64 v41; // [rsp+68h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  switch_dbctx();
  v37 = 0u;
  v1 = a1[5];
  v2 = v1 + 56LL * a1[6];
  v34 = &v37;
  if ( v2 == v1 )
    goto LABEL_15;
  do
  {
    while ( 1 )
    {
      v3 = **(bool (__fastcall ***)(__int64))v1;
      if ( v3 == sub_2A88F0 )
        break;
      if ( v3(v1) )
        goto LABEL_6;
LABEL_3:
      v1 += 56;
      if ( v2 == v1 )
        goto LABEL_15;
    }
    if ( *(_QWORD *)(v1 + 8) == *(_QWORD *)(v1 + 40) )
      goto LABEL_3;
LABEL_6:
    v4 = (unsigned __int64 *)v37.m128i_i64[0];
    v36 = (__int64 *)(v1 + 8);
    if ( !v37.m128i_i64[0] )
    {
      v28 = qalloc();
      v29 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)(unsigned __int64)v28);
      if ( !v28 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v28 + 48) = 0;
      *(_OWORD *)(v28 + 16) = 0;
      *(_OWORD *)(v28 + 32) = 0;
      *(__m128i *)(v28 + 8) = v29;
      *(_QWORD *)v28 = v28 & 0xFFFFFFFFFFFFFFFCLL | 2;
      v37.m128i_i64[0] = v28;
      *(_QWORD *)v28 = v28 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v28 & 3LL;
      v30 = v37.m128i_i64[0];
      v31 = (__m128i)v37.m128i_u64[0];
      *(_QWORD *)v37.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v30 + 8) = _mm_unpacklo_epi64(v31, v31);
      *(_QWORD *)v37.m128i_i64[0] |= 2uLL;
      v4 = (unsigned __int64 *)v37.m128i_i64[0];
LABEL_8:
      v5 = sub_259F80(v34, v4, 1, &v36);
LABEL_9:
      v6 = v5 + 24;
      goto LABEL_10;
    }
    if ( !v37.m128i_i64[1] )
      goto LABEL_8;
    v17 = *(_QWORD *)v37.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v17 & 2) != 0 )
    {
      v22 = 1;
LABEL_29:
      v5 = sub_259F80(&v37, v4, v22, &v36);
      goto LABEL_9;
    }
    v18 = *(_QWORD *)(v1 + 8);
    v19 = 1;
    while ( 1 )
    {
      v20 = *(_QWORD *)(v17 + 24);
      v6 = v17 + 24;
      if ( v18 < v20 )
      {
        v21 = *(_BYTE **)(v17 + 8);
        v19 = 1;
        if ( (*v21 & 2) != 0 )
          goto LABEL_27;
        goto LABEL_41;
      }
      if ( v20 >= v18 )
        break;
      v21 = *(_BYTE **)(v17 + 16);
      v19 = 0;
      if ( (*v21 & 2) != 0 )
        goto LABEL_27;
LABEL_41:
      v17 = (unsigned __int64)v21;
    }
    if ( !v17 )
    {
LABEL_27:
      v22 = v19;
      v4 = (unsigned __int64 *)v17;
      goto LABEL_29;
    }
LABEL_10:
    v7 = *(_QWORD *)(v1 + 24);
    v8 = nullptr;
    if ( v7 )
    {
      v35 = *(_QWORD *)(v1 + 24);
      n[0] = 4 * v7;
      v8 = (void *)qalloc_or_throw();
      memcpy(v8, *(const void **)(v1 + 16), n[0]);
      v7 = v35;
    }
    si128 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
    if ( *(_QWORD *)(v6 + 8) )
    {
      *(_QWORD *)(v6 + 16) = 0;
      *(__m128i *)n = si128;
      qfree();
      si128 = _mm_load_si128((const __m128i *)n);
    }
    v1 += 56;
    *(_QWORD *)(v6 + 8) = v8;
    *(__m128i *)(v6 + 16) = si128;
  }
  while ( v2 != v1 );
LABEL_15:
  v10 = a1[10];
  v11 = a1[8];
  v39 = 117;
  v38[1] = v10;
  v38[0] = &off_4C1830;
  v40 = &v37;
  sub_2B1980(v11, (__int64)v38);
  v12 = v37.m128i_i64[0];
  if ( !v37.m128i_i64[0] )
    return v41 - __readfsqword(0x28u);
  v13 = *(_QWORD *)v37.m128i_i64[0];
  if ( v37.m128i_i64[1] )
  {
    v23 = v13 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_38:
      *(_QWORD *)v12 = v13 & 3 | v12 & 0xFFFFFFFFFFFFFFFCLL;
      v26 = v37.m128i_i64[0];
      v27 = (__m128i)v37.m128i_u64[0];
      *(_QWORD *)v37.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v26 + 8) = _mm_unpacklo_epi64(v27, v27);
      *(_QWORD *)v37.m128i_i64[0] |= 2uLL;
      v37.m128i_i64[1] = 0;
      goto LABEL_18;
    }
    v24 = *(__int64 **)(v23 + 8);
    if ( (*(_BYTE *)v24 & 2) != 0 )
    {
      v25 = *(__int64 **)(v23 + 16);
      if ( (*(_BYTE *)v25 & 2) != 0 )
        goto LABEL_47;
    }
    else
    {
      sub_2AC350(v24);
      v25 = *(__int64 **)(v23 + 16);
      if ( (*(_BYTE *)v25 & 2) != 0 )
        goto LABEL_34;
    }
    sub_2AC350(v25);
LABEL_34:
    if ( (*(_BYTE *)v23 & 2) != 0 )
    {
LABEL_35:
      if ( v13 > 3 )
        qfree();
      v12 = v37.m128i_i64[0];
      v13 = *(_QWORD *)v37.m128i_i64[0];
      goto LABEL_38;
    }
LABEL_47:
    if ( *(_QWORD *)(v23 + 32) )
    {
      *(_QWORD *)(v23 + 40) = 0;
      qfree();
    }
    *(_QWORD *)v23 |= 2uLL;
    goto LABEL_35;
  }
  *(_QWORD *)v37.m128i_i64[0] = *(_QWORD *)v37.m128i_i64[0] & 3LL | v37.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  v14 = v37.m128i_i64[0];
  v15 = (__m128i)v37.m128i_u64[0];
  *(_QWORD *)v37.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64(v15, v15);
  *(_QWORD *)v37.m128i_i64[0] |= 2uLL;
LABEL_18:
  if ( v37.m128i_i64[0] )
    qfree();
  return v41 - __readfsqword(0x28u);
}

