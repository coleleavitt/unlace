void __fastcall sub_32190(__m128i *a1)
{
  void *v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdx
  _QWORD **v5; // rdi
  _QWORD **v6; // rbp
  _QWORD *v7; // r12
  __m128i v8; // xmm2
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  void *v11; // rdi
  void **v12; // rbp
  unsigned __int64 v13; // r12
  void *v14; // rdi
  __m128i *i; // rbp
  __m128i *v16; // rdi
  _OWORD v17[2]; // [rsp+0h] [rbp-68h] BYREF
  _OWORD v18[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-20h]

  v1 = (void *)a1[169].m128i_i64[0];
  v19 = __readfsqword(0x28u);
  a1->m128i_i64[0] = (__int64)&off_72C58;
  if ( v1 )
  {
    sub_43ED0(v1);
    operator delete(v1, 0x19C8u);
  }
  v3 = a1[173].m128i_i64[0];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  v4 = a1[171].m128i_i64[0];
  v5 = (_QWORD **)a1[170].m128i_i64[1];
  a1[170].m128i_i64[0] = (__int64)&off_71690;
  v6 = v5;
  if ( 8 * v4 )
  {
    do
    {
      v7 = *v6;
      if ( *v6 )
      {
        if ( v7[1] )
        {
          v7[2] = 0;
          qfree();
        }
        operator delete(v7, 0x20u);
        v5 = (_QWORD **)a1[170].m128i_i64[1];
        v4 = a1[171].m128i_i64[0];
      }
      ++v6;
    }
    while ( v6 != &v5[v4] );
  }
  if ( v5 )
  {
    a1[171].m128i_i64[0] = 0;
    qfree();
  }
  else
  {
    a1[172].m128i_i64[0] = 0;
  }
  v8 = _mm_loadu_si128(a1 + 168);
  v9 = _mm_loadu_si128(a1 + 165);
  v10 = _mm_loadu_si128(a1 + 166);
  v17[0] = _mm_loadu_si128(a1 + 167);
  a1->m128i_i64[0] = (__int64)&unk_72AD8;
  v17[1] = v8;
  v18[0] = v9;
  v18[1] = v10;
  sub_31DF0((__int64 *)v18, (__int64 *)v17);
  v11 = (void *)a1[164].m128i_i64[0];
  if ( v11 )
  {
    v12 = (void **)a1[166].m128i_i64[1];
    v13 = a1[168].m128i_i64[1] + 8;
    if ( (unsigned __int64)v12 < v13 )
    {
      do
      {
        v14 = *v12++;
        operator delete(v14, 0x1F8u);
      }
      while ( (unsigned __int64)v12 < v13 );
      v11 = (void *)a1[164].m128i_i64[0];
    }
    operator delete(v11, 8 * a1[164].m128i_i64[1]);
  }
  if ( a1[125].m128i_i64[1] )
  {
    a1[126].m128i_i64[0] = 0;
    qfree();
  }
  for ( i = (__m128i *)a1[124].m128i_i64[0]; &a1[124] != i; --a1[125].m128i_i64[0] )
  {
    v16 = i;
    i = (__m128i *)i->m128i_i64[0];
    *(_QWORD *)v16->m128i_i64[1] = i;
    i->m128i_i64[1] = v16->m128i_i64[1];
    qfree();
  }
  sub_278B0(&a1[75].m128i_i64[1]);
}

