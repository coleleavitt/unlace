void __fastcall sub_2DC60(__m128i *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // r12
  _QWORD *v5; // rbx
  __m128i v6; // xmm2
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  __m128i *j; // rbx
  __m128i *v10; // rdi
  _OWORD v11[2]; // [rsp+0h] [rbp-78h] BYREF
  _OWORD v12[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  a1->m128i_i64[0] = (__int64)&off_72B98;
  v2 = a1[171].m128i_i64[1];
  if ( v2 )
  {
    v3 = a1[172].m128i_i64[0];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 80 * i);
        if ( v5[5] )
        {
          v5[6] = 0;
          qfree();
        }
        if ( v5[2] )
        {
          v5[3] = 0;
          qfree();
        }
        v2 = a1[171].m128i_i64[1];
      }
    }
    a1[172].m128i_i64[0] = 0;
    qfree();
  }
  if ( a1[169].m128i_i64[1] )
  {
    a1[170].m128i_i64[0] = 0;
    qfree();
  }
  v6 = _mm_loadu_si128(a1 + 168);
  v7 = _mm_loadu_si128(a1 + 165);
  v8 = _mm_loadu_si128(a1 + 166);
  v11[0] = _mm_loadu_si128(a1 + 167);
  a1->m128i_i64[0] = (__int64)&unk_72AD8;
  v11[1] = v6;
  v12[0] = v7;
  v12[1] = v8;
  sub_2BE00((__int64 *)v12, (__int64 *)v11);
  sub_2DA50((__int64)a1[164].m128i_i64);
  if ( a1[125].m128i_i64[1] )
  {
    a1[126].m128i_i64[0] = 0;
    qfree();
  }
  for ( j = (__m128i *)a1[124].m128i_i64[0]; &a1[124] != j; --a1[125].m128i_i64[0] )
  {
    v10 = j;
    j = (__m128i *)j->m128i_i64[0];
    *(_QWORD *)v10->m128i_i64[1] = j;
    j->m128i_i64[1] = v10->m128i_i64[1];
    qfree();
  }
  sub_278B0(&a1[75].m128i_i64[1]);
  operator delete(a1, 0xAF8u);
}

