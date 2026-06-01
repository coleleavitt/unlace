unsigned __int64 __fastcall sub_28E00(_QWORD *a1, char *a2)
{
  bool v2; // zf
  size_t v5; // r13
  _QWORD *v6; // r15
  __int64 v7; // rax
  char v8; // bp
  __int64 v9; // r12
  __int64 v10; // rcx
  unsigned __int64 v12; // r13
  void *v13; // rdi
  void *v14; // r12
  _QWORD *v15; // r14
  const char *v16; // rdi
  const char *v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r14
  const __m128i *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rsi
  _QWORD *v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // r13
  const char *v32; // rsi
  _QWORD *v33; // [rsp+0h] [rbp-68h]
  _QWORD *v34; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-50h]
  unsigned __int64 v37; // [rsp+28h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v2 = *a2 == 3;
  *(_OWORD *)n = 0;
  src = nullptr;
  if ( !v2 )
  {
    if ( !(unsigned __int8)sub_4C170(a1[2], &src, *((_QWORD *)a2 + 1)) || (v5 = n[0], n[0] <= 1) )
    {
      if ( !src )
        return v37 - __readfsqword(0x28u);
      goto LABEL_12;
    }
    v34 = a1 + 41;
    v6 = sub_245C0((__int64)(a1 + 41), (__int64)&src);
    v33 = a1 + 42;
    if ( v6 == a1 + 42 )
    {
      v14 = (void *)qalloc_or_throw();
      memcpy(v14, src, v5);
      v15 = (_QWORD *)a1[43];
      v6 = a1 + 42;
      if ( !v15 )
        goto LABEL_37;
      do
      {
        v16 = nptr;
        if ( v15[5] )
          v16 = (const char *)v15[4];
        if ( strcmp(v16, (const char *)v14) >= 0 )
        {
          v6 = v15;
          v15 = (_QWORD *)v15[2];
        }
        else
        {
          v15 = (_QWORD *)v15[3];
        }
      }
      while ( v15 );
      if ( v33 == v6 )
        goto LABEL_37;
      v17 = nptr;
      if ( v6[5] )
        v17 = (const char *)v6[4];
      if ( strcmp((const char *)v14, v17) < 0 )
      {
LABEL_37:
        v27 = operator new(0x50u);
        *(_QWORD *)(v27 + 32) = v14;
        v28 = v6;
        *(_QWORD *)(v27 + 56) = 0;
        v6 = (_QWORD *)v27;
        *(__m128i *)(v27 + 40) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
        *(_OWORD *)(v27 + 64) = 0;
        v29 = sub_28C40(v34, v28, v27 + 32);
        v31 = v29;
        if ( v30 )
        {
          if ( !v29 && v33 != (_QWORD *)v30 )
          {
            v32 = nptr;
            if ( *(_QWORD *)(v30 + 40) )
              v32 = *(const char **)(v30 + 32);
            strcmp((const char *)v14, v32);
          }
          std::_Rb_tree_insert_and_rebalance();
          ++a1[46];
        }
        else
        {
          if ( v6 )
          {
            if ( v14 )
            {
              v6[5] = 0;
              qfree();
            }
            operator delete(v6, 0x50u);
          }
          v6 = v31;
        }
      }
      else if ( v14 )
      {
        qfree();
      }
    }
    v7 = v6[7];
    v8 = *a2;
    v9 = *((_QWORD *)a2 + 1);
    v10 = v7 + 16LL * v6[8];
    if ( v7 == v10 )
      goto LABEL_16;
    while ( v8 != *(_BYTE *)v7 || v9 != *(_QWORD *)(v7 + 8) )
    {
      v7 += 16;
      if ( v10 == v7 )
        goto LABEL_16;
    }
    if ( v10 == v7 )
    {
LABEL_16:
      v12 = v6[9];
      if ( v12 < v6[8] + 1LL )
      {
        v18 = qvector_reserve();
        v19 = v6[8];
        v20 = v6[9];
        v6[9] = v12;
        v21 = (const __m128i *)v6[7];
        v22 = v19 - 1;
        if ( v22 >= 0 )
        {
          v23 = v18;
          do
          {
            v24 = _mm_loadu_si128(v21);
            v23 += 16;
            ++v21;
            *(__m128i *)(v23 - 16) = v24;
          }
          while ( v22-- != 0 );
        }
        qfree();
        v26 = v6[8];
        v6[7] = v18;
        v6[9] = v20;
        v10 = v18 + 16 * v26;
      }
      *(_BYTE *)v10 = v8;
      v13 = src;
      *(_QWORD *)(v10 + 8) = v9;
      ++v6[8];
      if ( v13 )
        goto LABEL_12;
    }
    else if ( src )
    {
LABEL_12:
      n[0] = 0;
      qfree();
    }
  }
  return v37 - __readfsqword(0x28u);
}

