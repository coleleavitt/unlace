unsigned __int64 __fastcall sub_3BFF20(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD *exception; // rdi
  __int64 v7; // rdi
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // rax
  _QWORD *v11; // r14
  unsigned __int64 v12; // r15
  size_t v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rbp
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 *i; // rsi
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __m128i v23; // xmm0
  _BYTE *v24; // rdi
  _BYTE *v25; // rdi
  __int64 v26; // rax
  __m128i v27; // xmm1
  __int64 v28; // rdx
  __int64 v29; // rax
  __m128i v30; // xmm0
  const void *v31; // r9
  void *v32; // rdi
  char v33; // cl
  unsigned __int64 v34; // rdx
  _BYTE *v35; // rdx
  char v36; // dl
  __int64 v37; // rax
  const void *v38; // [rsp+10h] [rbp-78h]
  unsigned __int64 v39; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int64 *v40; // [rsp+28h] [rbp-60h] BYREF
  __m128i v41; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 112);
  v39 = a3;
  v42 = __readfsqword(0x28u);
  v41 = 0u;
  sub_2B2A20(v7, (__int64)&v41, a2);
  if ( *(_QWORD *)(a4 + 8) <= 1u )
  {
    if ( !v41.m128i_i64[0] )
      goto LABEL_11;
    i = (__int64 *)(*(_QWORD *)v41.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
    if ( i )
    {
      if ( (*(_BYTE *)i & 2) != 0 )
        goto LABEL_11;
      v21 = i[3];
      if ( v39 >= v21 )
        goto LABEL_25;
LABEL_22:
      for ( i = (__int64 *)i[1]; ; i = (__int64 *)i[2] )
      {
        if ( (*(_BYTE *)i & 2) != 0 )
          goto LABEL_11;
        v21 = i[3];
        if ( v39 < v21 )
          goto LABEL_22;
LABEL_25:
        if ( v21 >= v39 )
          break;
      }
      if ( (__int64 *)v41.m128i_i64[0] == i )
        goto LABEL_11;
    }
    sub_340E00((unsigned __int64 **)&v41, i);
    goto LABEL_11;
  }
  v9 = (unsigned __int64 *)v41.m128i_i64[0];
  v40 = &v39;
  if ( !v41.m128i_i64[0] )
  {
    v26 = qalloc();
    v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
    if ( !v26 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v26 + 16) = 0;
    *(_OWORD *)(v26 + 32) = 0;
    *(_OWORD *)(v26 + 48) = 0;
    *(_QWORD *)v26 = v26 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v41.m128i_i64[0] = v26;
    v28 = *(_QWORD *)v26;
    *(__m128i *)(v26 + 8) = v27;
    *(_QWORD *)v26 = v26 & 0xFFFFFFFFFFFFFFFCLL | v28 & 3;
    v29 = v41.m128i_i64[0];
    v30 = (__m128i)v41.m128i_u64[0];
    *(_QWORD *)v41.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v29 + 8) = _mm_unpacklo_epi64(v30, v30);
    *(_QWORD *)v41.m128i_i64[0] |= 2uLL;
    v9 = (unsigned __int64 *)v41.m128i_i64[0];
    goto LABEL_4;
  }
  if ( !v41.m128i_i64[1] )
  {
LABEL_4:
    v10 = sub_306620(&v41, v9, 1, (__int64 **)&v40);
LABEL_5:
    v11 = (_QWORD *)(v10 + 24);
    goto LABEL_6;
  }
  v10 = *(_QWORD *)v41.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v10 & 2) != 0 )
  {
    v36 = 1;
LABEL_50:
    v10 = sub_306620(&v41, v9, v36, (__int64 **)&v40);
    goto LABEL_5;
  }
  v33 = 1;
  while ( 1 )
  {
    v34 = *(_QWORD *)(v10 + 24);
    v11 = (_QWORD *)(v10 + 24);
    if ( v39 < v34 )
    {
      v35 = *(_BYTE **)(v10 + 8);
      v33 = 1;
      goto LABEL_47;
    }
    if ( v34 >= v39 )
      break;
    v35 = *(_BYTE **)(v10 + 16);
    v33 = 0;
LABEL_47:
    if ( (*v35 & 2) != 0 )
      goto LABEL_48;
    v10 = (unsigned __int64)v35;
  }
  if ( !v10 )
  {
LABEL_48:
    v36 = v33;
    v9 = (unsigned __int64 *)v10;
    goto LABEL_50;
  }
LABEL_6:
  if ( a4 != v10 + 32 )
  {
    v12 = *(_QWORD *)(a4 + 8);
    if ( v12 && (v13 = v12 - 1, v12 != 1) )
    {
      v31 = *(const void **)a4;
      v32 = (void *)v11[1];
      if ( v11[3] < v12 )
      {
        v38 = *(const void **)a4;
        v37 = qvector_reserve();
        v11[1] = v37;
        v31 = v38;
        v32 = (void *)v37;
        v13 = v12 - 1;
      }
      v11[2] = v12;
      memmove(v32, v31, v13);
      *(_BYTE *)(v11[1] + v12 - 1) = 0;
    }
    else
    {
      v11[2] = 0;
    }
  }
  copy_tinfo_t();
LABEL_11:
  sub_2B29A0(*(_QWORD *)(a1 + 112), a2, (__int64)&v41);
  v14 = v41.m128i_i64[0];
  if ( !v41.m128i_i64[0] )
    return v42 - __readfsqword(0x28u);
  v15 = *(_QWORD *)v41.m128i_i64[0];
  if ( !v41.m128i_i64[1] )
  {
    *(_QWORD *)v41.m128i_i64[0] = *(_QWORD *)v41.m128i_i64[0] & 3LL | v41.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    v22 = v41.m128i_i64[0];
    v23 = (__m128i)v41.m128i_u64[0];
    *(_QWORD *)v41.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v23, v23);
    *(_QWORD *)v41.m128i_i64[0] |= 2uLL;
    goto LABEL_15;
  }
  v16 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*(_BYTE *)(v15 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    goto LABEL_14;
  v24 = (_BYTE *)v16[1];
  if ( (*v24 & 2) == 0 )
  {
    sub_3BF290((__int64)v24);
    v25 = (_BYTE *)v16[2];
    if ( (*v25 & 2) != 0 )
      goto LABEL_32;
    goto LABEL_42;
  }
  v25 = (_BYTE *)v16[2];
  if ( (*v25 & 2) != 0 )
  {
LABEL_56:
    clear_tinfo_t();
    if ( v16[4] )
    {
      v16[5] = 0;
      qfree();
    }
    *v16 |= 2uLL;
    goto LABEL_33;
  }
LABEL_42:
  sub_3BF290((__int64)v25);
LABEL_32:
  if ( (*(_BYTE *)v16 & 2) == 0 )
    goto LABEL_56;
LABEL_33:
  if ( v15 > 3 )
    qfree();
  v14 = v41.m128i_i64[0];
  v15 = *(_QWORD *)v41.m128i_i64[0];
LABEL_14:
  *(_QWORD *)v14 = v15 & 3 | v14 & 0xFFFFFFFFFFFFFFFCLL;
  v17 = v41.m128i_i64[0];
  v18 = (__m128i)v41.m128i_u64[0];
  *(_QWORD *)v41.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v18, v18);
  *(_QWORD *)v41.m128i_i64[0] |= 2uLL;
  v41.m128i_i64[1] = 0;
LABEL_15:
  if ( v41.m128i_i64[0] )
    qfree();
  return v42 - __readfsqword(0x28u);
}

