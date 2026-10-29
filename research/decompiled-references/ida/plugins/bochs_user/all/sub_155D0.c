unsigned __int64 __fastcall sub_155D0(__m128i *a1)
{
  __int64 v2; // rdi
  __m128i v3; // xmm2
  __m128i v4; // xmm1
  __m128i v5; // xmm0
  void *v6; // rdi
  void **v7; // rbx
  unsigned __int64 v8; // r12
  void *v9; // rdi
  _OWORD v11[2]; // [rsp+0h] [rbp-68h] BYREF
  _OWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  a1->m128i_i64[0] = (__int64)off_72330;
  sub_204B0();
  v2 = a1[588].m128i_i64[0];
  a1[67].m128i_i64[0] = 0;
  if ( v2 )
  {
    a1[588].m128i_i64[1] = 0;
    qfree();
  }
  if ( a1[586].m128i_i64[1] )
  {
    a1[587].m128i_i64[0] = 0;
    qfree();
  }
  a1[68].m128i_i64[0] = (__int64)&off_72250;
  remove_event_listener();
  v3 = _mm_loadu_si128(a1 + 66);
  v4 = _mm_loadu_si128(a1 + 63);
  v5 = _mm_loadu_si128(a1 + 64);
  v11[0] = _mm_loadu_si128(a1 + 65);
  v11[1] = v3;
  v12[0] = v4;
  v12[1] = v5;
  sub_12E50((__int64 *)v12, (__int64 *)v11);
  v6 = (void *)a1[62].m128i_i64[0];
  if ( v6 )
  {
    v7 = (void **)a1[64].m128i_i64[1];
    v8 = a1[66].m128i_i64[1] + 8;
    if ( (unsigned __int64)v7 < v8 )
    {
      do
      {
        v9 = *v7++;
        operator delete(v9, 0x1F8u);
      }
      while ( (unsigned __int64)v7 < v8 );
      v6 = (void *)a1[62].m128i_i64[0];
    }
    operator delete(v6, 8 * a1[62].m128i_i64[1]);
  }
  if ( a1[59].m128i_i64[1] )
  {
    a1[60].m128i_i64[0] = 0;
    qfree();
  }
  a1->m128i_i64[0] = (__int64)off_72858;
  return sub_150C0((__int64)a1);
}

