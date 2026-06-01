__int64 __fastcall sub_4D440(__int64 a1, char **a2, int a3)
{
  char *v4; // r9
  signed __int64 v5; // rbp
  char *v7; // r14
  _DWORD *v8; // r15
  _DWORD *v9; // rcx
  char *v10; // rbx
  char *v11; // rbp
  _DWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // r15
  unsigned __int64 v16; // rsi
  signed __int64 v17; // rdx
  unsigned __int64 v18; // rax
  bool v19; // cf
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  bool v22; // zf
  void *v23; // rax
  _QWORD *v24; // rdi
  _QWORD *v25; // rax
  char *v26; // rbx
  void *v27; // rdi
  __int64 v28; // rsi
  unsigned __int64 v29; // rax
  char *v31; // rax
  void *v32; // r14
  char *v33; // r15
  __m128i v34; // xmm0
  signed __int64 v35; // rdx
  __int64 v36; // rsi
  const void *v37; // rsi
  __m128i v38; // [rsp+0h] [rbp-98h] BYREF
  char *v39; // [rsp+10h] [rbp-88h]
  void *src; // [rsp+18h] [rbp-80h]
  unsigned __int64 v41; // [rsp+20h] [rbp-78h]
  __int64 v42; // [rsp+28h] [rbp-70h]
  _DWORD *v43; // [rsp+38h] [rbp-60h] BYREF
  char *v44; // [rsp+40h] [rbp-58h] BYREF
  char *v45; // [rsp+48h] [rbp-50h]
  __int64 v46; // [rsp+50h] [rbp-48h]
  unsigned __int64 v47; // [rsp+58h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  v4 = *a2;
  v39 = a2[1];
  v5 = v39 - v4;
  if ( (unsigned __int64)(v39 - v4) > 0x7FFFFFFFFFFFFFF8LL )
    std::__throw_length_error("vector::reserve");
  if ( v5 )
  {
    v31 = (char *)operator new(v39 - v4);
    v32 = *(void **)a1;
    v33 = v31;
    v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v31);
    v35 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    if ( v35 > 0 )
    {
      v37 = *(const void **)a1;
      v38 = v34;
      memcpy(v31, v37, v35);
      v34 = _mm_load_si128(&v38);
      if ( !v32 )
        goto LABEL_41;
    }
    else if ( !v32 )
    {
LABEL_41:
      *(__m128i *)a1 = v34;
      *(_QWORD *)(a1 + 16) = &v33[v5];
      v4 = *a2;
      v39 = a2[1];
      goto LABEL_3;
    }
    v36 = *(_QWORD *)(a1 + 16);
    v38 = v34;
    operator delete(v32, v36 - (_QWORD)v32);
    v34 = _mm_load_si128(&v38);
    goto LABEL_41;
  }
LABEL_3:
  v7 = v4;
  if ( v4 == v39 )
    return a1;
  do
  {
    v8 = **(_DWORD ***)v7;
    v9 = *(_DWORD **)(*(_QWORD *)v7 + 8LL);
    if ( v8 == v9 )
      goto LABEL_17;
    v38.m128i_i64[0] = 0;
    v10 = 0;
    v11 = 0;
    do
    {
      while ( (a3 & *v8) != v8[1] )
      {
LABEL_6:
        v8 += 8;
        if ( v9 == v8 )
          goto LABEL_10;
      }
      v12 = v8 + 2;
      v43 = v8 + 2;
      if ( v10 == (char *)v38.m128i_i64[0] )
      {
        v45 = v10;
        v46 = (__int64)v10;
        src = v9;
        v44 = v11;
        sub_4D350((__int64)&v44, &v43);
        v11 = v44;
        v10 = v45;
        v9 = src;
        v38.m128i_i64[0] = v46;
        goto LABEL_6;
      }
      v8 += 8;
      *(_QWORD *)v10 = v12;
      v10 += 8;
    }
    while ( v9 != v8 );
LABEL_10:
    if ( v11 == v10 )
      goto LABEL_15;
    v13 = *(_QWORD **)(a1 + 8);
    v14 = v10 - v11;
    if ( *(_QWORD *)(a1 + 16) - (_QWORD)v13 >= (unsigned __int64)(v10 - v11) )
    {
      if ( v14 <= 8 )
      {
        if ( v14 == 8 )
        {
          *v13 = *(_QWORD *)v11;
          v13 = *(_QWORD **)(a1 + 8);
        }
      }
      else
      {
        memmove(v13, v11, v10 - v11);
        v13 = *(_QWORD **)(a1 + 8);
      }
      *(_QWORD *)(a1 + 8) = (char *)v13 + v14;
      goto LABEL_15;
    }
    v16 = v14 >> 3;
    v17 = (signed __int64)v13 - *(_QWORD *)a1;
    src = *(void **)a1;
    v18 = v17 >> 3;
    if ( 0xFFFFFFFFFFFFFFFLL - (v17 >> 3) < (unsigned __int64)(v14 >> 3) )
      std::__throw_length_error("vector::_M_range_insert");
    if ( v16 < v18 )
      v16 = v17 >> 3;
    v19 = __CFADD__(v16, v18);
    v20 = v16 + v18;
    if ( v19 )
    {
      v41 = 0x7FFFFFFFFFFFFFF8LL;
    }
    else
    {
      v41 = 0;
      v21 = 0;
      if ( !v20 )
      {
        v22 = v17 == 8;
        if ( v17 > 8 )
          goto LABEL_26;
LABEL_36:
        if ( v22 )
          *(_QWORD *)v21 = *(_QWORD *)src;
        goto LABEL_27;
      }
      if ( v20 > 0xFFFFFFFFFFFFFFFLL )
        v20 = 0xFFFFFFFFFFFFFFFLL;
      v41 = 8 * v20;
    }
    v42 = v17;
    v21 = operator new(v41);
    v17 = v42;
    v41 += v21;
    v22 = v42 == 8;
    if ( v42 <= 8 )
      goto LABEL_36;
LABEL_26:
    v42 = v17;
    v23 = memmove((void *)v21, src, v17);
    v17 = v42;
    v21 = (__int64)v23;
LABEL_27:
    v24 = (_QWORD *)(v21 + v17);
    if ( v14 == 8 )
    {
      *v24 = *(_QWORD *)v11;
    }
    else
    {
      v42 = v21;
      v25 = memmove(v24, v11, v10 - v11);
      v21 = v42;
      v24 = v25;
    }
    v26 = (char *)v24 + v14;
    v27 = src;
    if ( src )
    {
      v28 = *(_QWORD *)(a1 + 16);
      src = (void *)v21;
      operator delete(v27, v28 - (_QWORD)v27);
      v21 = (__int64)src;
    }
    v29 = v41;
    *(_QWORD *)a1 = v21;
    *(_QWORD *)(a1 + 8) = v26;
    *(_QWORD *)(a1 + 16) = v29;
LABEL_15:
    if ( v11 )
      operator delete(v11, v38.m128i_i64[0] - (_QWORD)v11);
LABEL_17:
    v7 += 8;
  }
  while ( v39 != v7 );
  return a1;
}
