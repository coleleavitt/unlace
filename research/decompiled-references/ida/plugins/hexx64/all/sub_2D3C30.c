unsigned __int64 __fastcall sub_2D3C30(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  bool (__fastcall *v4)(__int64); // rax
  unsigned __int64 *v5; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  void *v9; // r14
  __int64 v10; // rdi
  __m128i si128; // xmm0
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  __m128i v17; // xmm0
  unsigned __int64 v19; // rax
  char v20; // cl
  unsigned __int64 v21; // rdx
  _BYTE *v22; // rdx
  char v23; // dl
  unsigned __int64 v24; // rbp
  __int64 *v25; // rdi
  __int64 *v26; // rdi
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rax
  __m128i v30; // xmm1
  __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rdi
  _QWORD *exception; // rdi
  size_t n[2]; // [rsp+0h] [rbp-A8h] BYREF
  __m128i *v36; // [rsp+10h] [rbp-98h]
  __int64 v37; // [rsp+18h] [rbp-90h]
  __int64 *v38; // [rsp+28h] [rbp-80h] BYREF
  __m128i v39; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v40[2]; // [rsp+40h] [rbp-68h] BYREF
  char v41; // [rsp+50h] [rbp-58h]
  __m128i *v42; // [rsp+58h] [rbp-50h]
  unsigned __int64 v43; // [rsp+68h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  switch_dbctx();
  v39 = 0u;
  v2 = a1[5];
  v3 = v2 + 56LL * a1[6];
  v36 = &v39;
  if ( v3 == v2 )
    goto LABEL_15;
  do
  {
    while ( 1 )
    {
      v4 = **(bool (__fastcall ***)(__int64))v2;
      if ( v4 == sub_2AD170 )
        break;
      if ( v4(v2) )
        goto LABEL_6;
LABEL_3:
      v2 += 56;
      if ( v3 == v2 )
        goto LABEL_15;
    }
    if ( *(_QWORD *)(v2 + 8) == *(_QWORD *)(v2 + 40) )
      goto LABEL_3;
LABEL_6:
    v5 = (unsigned __int64 *)v39.m128i_i64[0];
    v38 = (__int64 *)(v2 + 8);
    if ( !v39.m128i_i64[0] )
    {
      v29 = qalloc();
      v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v29, (__m128i)(unsigned __int64)v29);
      if ( !v29 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v29 + 48) = 0;
      *(_OWORD *)(v29 + 16) = 0;
      *(_OWORD *)(v29 + 32) = 0;
      *(__m128i *)(v29 + 8) = v30;
      *(_QWORD *)v29 = v29 & 0xFFFFFFFFFFFFFFFCLL | 2;
      v39.m128i_i64[0] = v29;
      *(_QWORD *)v29 = v29 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v29 & 3LL;
      v31 = v39.m128i_i64[0];
      v32 = (__m128i)v39.m128i_u64[0];
      *(_QWORD *)v39.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64(v32, v32);
      *(_QWORD *)v39.m128i_i64[0] |= 2uLL;
      v5 = (unsigned __int64 *)v39.m128i_i64[0];
LABEL_8:
      v6 = sub_25E800(v36, v5, 1, &v38);
LABEL_9:
      v7 = v6 + 24;
      goto LABEL_10;
    }
    if ( !v39.m128i_i64[1] )
      goto LABEL_8;
    v19 = *(_QWORD *)v39.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v19 & 2) != 0 )
    {
      v23 = 1;
LABEL_29:
      v6 = sub_25E800(&v39, v5, v23, &v38);
      goto LABEL_9;
    }
    v5 = *(unsigned __int64 **)(v2 + 8);
    v20 = 1;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v19 + 24);
      v7 = v19 + 24;
      if ( (unsigned __int64)v5 < v21 )
      {
        v22 = *(_BYTE **)(v19 + 8);
        v20 = 1;
        if ( (*v22 & 2) != 0 )
          goto LABEL_27;
        goto LABEL_41;
      }
      if ( v21 >= (unsigned __int64)v5 )
        break;
      v22 = *(_BYTE **)(v19 + 16);
      v20 = 0;
      if ( (*v22 & 2) != 0 )
        goto LABEL_27;
LABEL_41:
      v19 = (unsigned __int64)v22;
    }
    if ( !v19 )
    {
LABEL_27:
      v23 = v20;
      v5 = (unsigned __int64 *)v19;
      goto LABEL_29;
    }
LABEL_10:
    v8 = *(_QWORD *)(v2 + 24);
    v9 = nullptr;
    if ( v8 )
    {
      v37 = *(_QWORD *)(v2 + 24);
      n[0] = 4 * v8;
      v9 = (void *)qalloc_or_throw(4 * v8, (__int64)v5, 4 * v8, v8);
      memcpy(v9, *(const void **)(v2 + 16), n[0]);
      v8 = v37;
    }
    v10 = *(_QWORD *)(v7 + 8);
    si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v8);
    if ( v10 )
    {
      *(_QWORD *)(v7 + 16) = 0;
      *(__m128i *)n = si128;
      qfree(v10);
      si128 = _mm_load_si128((const __m128i *)n);
    }
    v2 += 56;
    *(_QWORD *)(v7 + 8) = v9;
    *(__m128i *)(v7 + 16) = si128;
  }
  while ( v3 != v2 );
LABEL_15:
  v12 = a1[10];
  v13 = a1[8];
  v41 = 117;
  v40[1] = v12;
  v40[0] = &off_4E10F0;
  v42 = &v39;
  sub_2B6200(v13, (__int64)v40);
  v14 = v39.m128i_i64[0];
  if ( !v39.m128i_i64[0] )
    return v43 - __readfsqword(0x28u);
  v15 = *(_QWORD *)v39.m128i_i64[0];
  if ( v39.m128i_i64[1] )
  {
    v24 = v15 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v15 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_38:
      *(_QWORD *)v14 = v15 & 3 | v14 & 0xFFFFFFFFFFFFFFFCLL;
      v27 = v39.m128i_i64[0];
      v28 = (__m128i)v39.m128i_u64[0];
      *(_QWORD *)v39.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64(v28, v28);
      *(_QWORD *)v39.m128i_i64[0] |= 2uLL;
      v39.m128i_i64[1] = 0;
      goto LABEL_18;
    }
    v25 = *(__int64 **)(v24 + 8);
    if ( (*(_BYTE *)v25 & 2) != 0 )
    {
      v26 = *(__int64 **)(v24 + 16);
      if ( (*(_BYTE *)v26 & 2) != 0 )
        goto LABEL_47;
    }
    else
    {
      sub_2B0BD0(v25);
      v26 = *(__int64 **)(v24 + 16);
      if ( (*(_BYTE *)v26 & 2) != 0 )
        goto LABEL_34;
    }
    sub_2B0BD0(v26);
LABEL_34:
    if ( (*(_BYTE *)v24 & 2) != 0 )
    {
LABEL_35:
      if ( v15 > 3 )
        qfree(v15 & 0xFFFFFFFFFFFFFFFCLL);
      v14 = v39.m128i_i64[0];
      v15 = *(_QWORD *)v39.m128i_i64[0];
      goto LABEL_38;
    }
LABEL_47:
    v33 = *(_QWORD *)(v24 + 32);
    if ( v33 )
    {
      *(_QWORD *)(v24 + 40) = 0;
      qfree(v33);
    }
    *(_QWORD *)v24 |= 2uLL;
    goto LABEL_35;
  }
  *(_QWORD *)v39.m128i_i64[0] = *(_QWORD *)v39.m128i_i64[0] & 3LL | v39.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  v16 = v39.m128i_i64[0];
  v17 = (__m128i)v39.m128i_u64[0];
  *(_QWORD *)v39.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64(v17, v17);
  *(_QWORD *)v39.m128i_i64[0] |= 2uLL;
LABEL_18:
  if ( v39.m128i_i64[0] )
    qfree(v39.m128i_i64[0]);
  return v43 - __readfsqword(0x28u);
}

