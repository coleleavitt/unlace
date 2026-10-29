__int64 __fastcall sub_82C0(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        double a6,
        double a7,
        __m128 a8)
{
  size_t v11; // rbp
  void *v12; // r13
  size_t v13; // r15
  size_t v14; // r12
  size_t v15; // rbp
  size_t v16; // r14
  _BYTE *v17; // rsi
  void *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  size_t v24; // r14
  size_t v25; // r8
  _BYTE *v26; // rsi
  size_t v27; // rbp
  size_t v28; // r15
  size_t v29; // r14
  _BYTE *v30; // rsi
  size_t v31; // [rsp+8h] [rbp-80h]
  void *src; // [rsp+10h] [rbp-78h] BYREF
  size_t n; // [rsp+18h] [rbp-70h]
  size_t v34; // [rsp+20h] [rbp-68h]
  void *v35; // [rsp+30h] [rbp-58h] BYREF
  size_t v36; // [rsp+38h] [rbp-50h]
  unsigned __int64 v37; // [rsp+48h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  sub_7630(a1, a2, a5, a6, a7, a8);
  if ( *(_QWORD *)(a1 + 8) > 1u && a3 != -1 && a3 != a4 )
  {
    sub_7AB0((__int64 *)&src, a2, a4, a6, a7, a8);
    sub_7A10((__int64 *)&v35, a2, a4, a6, a7, a8);
    v11 = v36;
    v12 = v35;
    if ( v36 )
    {
      v13 = v36 - 1;
      if ( v36 != 1 )
      {
        v24 = n;
        v25 = v36 - 1;
        if ( n )
        {
          v24 = n - 1;
          v25 = v13 + n - 1;
          v11 = v36 + n - 1;
        }
        v26 = src;
        if ( v34 < v11 )
        {
          v31 = v25;
          src = (void *)qvector_reserve(&src, src, v11, 1);
          v25 = v31;
          v26 = src;
        }
        n = v11;
        v26[v25] = 0;
        memcpy((char *)src + v24, v12, v13);
        v27 = n;
        if ( n )
        {
          v28 = n + 1;
          v29 = n + 2;
          v27 = n - 1;
        }
        else
        {
          v29 = 3;
          v28 = 2;
        }
        v30 = src;
        if ( v34 < v29 )
        {
          src = (void *)qvector_reserve(&src, src, v29, 1);
          v30 = src;
        }
        n = v29;
        v30[v28] = 0;
        *(_WORD *)((char *)src + v27) = 14906;
      }
    }
    v14 = n;
    v15 = (*(_QWORD *)(a1 + 8) == 0) + *(_QWORD *)(a1 + 8) - 1LL;
    v16 = v15;
    if ( n )
    {
      v14 = n - 1;
      v16 = n - 1 + v15;
    }
    v17 = *(_BYTE **)a1;
    if ( *(_QWORD *)(a1 + 16) < v16 + 1 )
    {
      v23 = qvector_reserve(a1, v17, v16 + 1, 1);
      *(_QWORD *)a1 = v23;
      v17 = (_BYTE *)v23;
    }
    *(_QWORD *)(a1 + 8) = v16 + 1;
    v17[v16] = 0;
    if ( v15 )
      memmove((void *)(*(_QWORD *)a1 + v14), *(const void **)a1, v15);
    v18 = src;
    memcpy(*(void **)a1, src, v14);
    if ( v12 )
      qfree(v12, v18, v19, v20, v21, v22);
    if ( src )
    {
      n = 0;
      qfree(src, v18, v19, v20, v21, v22);
    }
  }
  return a1;
}

