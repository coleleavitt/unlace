unsigned __int64 __fastcall sub_1E4A0(__int64 a1)
{
  char **v1; // r12
  char **p_s1; // rsi
  char *v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rcx
  const char *v8; // r14
  size_t v9; // rax
  __int64 v10; // r15
  size_t v11; // rbp
  _QWORD *v12; // rax
  __int64 v13; // r15
  unsigned int v14; // r14d
  const char *v15; // rsi
  char *v16; // rdi
  char **v17; // r13
  __int64 v18; // rdi
  char *v19; // rcx
  __int64 v20; // rax
  const char *v21; // r8
  _QWORD *v22; // r12
  __int64 v23; // r15
  size_t v24; // r14
  void *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r14
  __int64 v30; // rdi
  const char *v32; // rsi
  const char *v33; // rdi
  unsigned int v34; // eax
  const char *src; // [rsp+8h] [rbp-60h]
  char *s1; // [rsp+10h] [rbp-58h] BYREF
  __m128i v37; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-40h]

  v1 = &off_2B2E0;
  v38 = __readfsqword(0x28u);
  do
  {
    v8 = *v1;
    s1 = nullptr;
    v37 = 0;
    if ( v8 )
    {
      v9 = strlen(v8);
      v10 = v9 + 1;
      v11 = v9;
      s1 = (char *)qvector_reserve(&s1, 0, v9 + 1, 1);
      v37.m128i_i64[0] = v10;
      memmove(s1, v8, v11);
      s1[v11] = 0;
    }
    p_s1 = &s1;
    v12 = sub_1E350((__int64)&loc_10298 + a1, (__int64)&s1);
    v13 = v6;
    if ( v6 )
    {
      LOBYTE(v14) = 1;
      if ( !v12 && (_UNKNOWN *)v6 != (_UNKNOWN *)((char *)&loc_102A0 + a1) )
      {
        v15 = ::s1;
        if ( *(_QWORD *)(v6 + 40) )
          v15 = *(const char **)(v6 + 32);
        v16 = (char *)::s1;
        if ( v37.m128i_i64[0] )
          v16 = s1;
        v14 = (unsigned int)strcmp(v16, v15) >> 31;
      }
      p_s1 = (char **)operator new(0x38u);
      v4 = s1;
      v5 = _mm_loadu_si128(&v37);
      s1 = nullptr;
      p_s1[4] = v4;
      *(__m128i *)(p_s1 + 5) = v5;
      v37 = 0;
      std::_Rb_tree_insert_and_rebalance((unsigned __int8)v14, p_s1, v13, (char *)&loc_102A0 + a1);
      ++*(_QWORD *)(a1 + 66240);
    }
    if ( s1 )
    {
      v37.m128i_i64[0] = 0;
      qfree(s1, p_s1, v6, v7);
    }
    v1 += 2;
  }
  while ( &off_2BF90 != v1 );
  v17 = off_2CAE0;
  do
  {
    while ( 1 )
    {
      v20 = operator new(0x38u);
      v21 = *v17;
      *(_QWORD *)(v20 + 32) = 0;
      v22 = (_QWORD *)v20;
      v23 = v20 + 32;
      *(_OWORD *)(v20 + 40) = 0;
      if ( v21 )
      {
        src = v21;
        v23 = v20 + 32;
        v24 = strlen(v21);
        v25 = (void *)qvector_reserve(v22 + 4, 0, v24 + 1, 1);
        v22[4] = v25;
        v22[5] = v24 + 1;
        memmove(v25, src, v24);
        *(_BYTE *)(v22[4] + v24) = 0;
      }
      v26 = sub_1E350((__int64)&loc_10298 + a1, v23);
      v29 = v27;
      if ( !v27 )
        break;
      v18 = 1;
      v19 = (char *)&loc_102A0 + a1;
      if ( v26 || (char *)v27 == v19 )
        goto LABEL_18;
      v32 = ::s1;
      if ( *(_QWORD *)(v27 + 40) )
      {
        v32 = *(const char **)(v27 + 32);
        v33 = ::s1;
        if ( !v22[5] )
          goto LABEL_31;
LABEL_32:
        v33 = (const char *)v22[4];
        goto LABEL_31;
      }
      v33 = ::s1;
      if ( v22[5] )
        goto LABEL_32;
LABEL_31:
      v34 = strcmp(v33, v32);
      v19 = (char *)&loc_102A0 + a1;
      v18 = v34 >> 31;
LABEL_18:
      std::_Rb_tree_insert_and_rebalance(v18, v22, v29, v19);
      ++*(_QWORD *)(a1 + 66240);
LABEL_19:
      if ( ++v17 == (char **)&unk_2CC28 )
        return v38 - __readfsqword(0x28u);
    }
    if ( !v22 )
      goto LABEL_19;
    v30 = v22[4];
    if ( v30 )
    {
      v22[5] = 0;
      qfree(v30, v23, 0, v28);
    }
    ++v17;
    operator delete(v22, 0x38u);
  }
  while ( v17 != (char **)&unk_2CC28 );
  return v38 - __readfsqword(0x28u);
}

