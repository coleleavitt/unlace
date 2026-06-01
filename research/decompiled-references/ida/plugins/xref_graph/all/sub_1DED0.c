QT::QGraphicsScene *__fastcall sub_1DED0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  QT::QGraphicsScene *v3; // rbp
  __int64 v4; // rsi
  size_t v5; // r12
  void *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rax
  void *src; // [rsp+0h] [rbp-68h] BYREF
  size_t n; // [rsp+8h] [rbp-60h]
  char *v16; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v17 = 0;
  v16 = nullptr;
  v16 = (char *)qvector_reserve(&v16, 0, 16, 1);
  *(_QWORD *)&v17 = 16;
  strcpy(v16, "Functions calls");
  sub_1ACF0(&src, a1, (__int64)&v16, 0x736C6C616320736ELL);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, a1, v1, v2);
  }
  v3 = sub_1DD00((__int64)a1, (__int64)&src, 1);
  v4 = getinf(16);
  sub_24740(v3);
  *((_DWORD *)v3 + 28) = 8;
  sub_265E0(v3, v4);
  sub_22680(v3);
  v5 = n;
  v6 = nullptr;
  if ( n )
  {
    v6 = (void *)qalloc_or_throw(n);
    memcpy(v6, src, v5);
  }
  v7 = a1[221];
  v8 = a1[220];
  if ( a1[222] < (unsigned __int64)(v7 + 1) )
  {
    v13 = qvector_reserve(a1 + 220, v8, v7 + 1, 24);
    a1[220] = v13;
    v7 = a1[221];
    v8 = v13;
  }
  v9 = v8 + 24 * v7;
  *(_QWORD *)v9 = v6;
  *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  ++a1[221];
  sub_1A840((__int64)a1);
  if ( src )
  {
    n = 0;
    qfree(src, v8, v10, v11);
  }
  return v3;
}

